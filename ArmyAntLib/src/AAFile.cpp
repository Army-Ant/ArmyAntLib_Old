/*  
 * Copyright (c) 2015 ArmyAnt
 * 版权所有 (c) 2015 ArmyAnt
 *
 * Licensed under the BSD License, Version 2.0 (the License); 
 * 本软件使用BSD协议保护, 协议版本:2.0
 * you may not use this file except in compliance with the License. 
 * 使用本开源代码文件的内容, 视为同意协议
 * You can read the license content in the file "ARMYANT.COPYRIGHT.BSD_LICENSE.MD" at the root of this project
 * 您可以在本项目的根目录找到名为"ARMYANT.COPYRIGHT.BSD_LICENSE.MD"的文件, 来阅读协议内容
 * You may also obtain a copy of the License at 
 * 您也可以在此处获得协议的副本:
 * 
 *     http://opensource.org/licenses/BSD-3-Clause
 * 
 * Unless required by applicable law or agreed to in writing, software distributed under the License is distributed on an AS IS BASIS, 
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied. 
 * 除非法律要求或者版权所有者书面同意,本软件在本协议基础上的发布没有任何形式的条件和担保,无论明示的或默许的.
 * See the License for the specific language governing permissions and limitations under the License. 
 * 请在特定限制或语言管理权限下阅读协议
 * This file is the internal source file of this project, is not contained by the closed source release part of this software
 * 本文件为内部源码文件, 不会包含在闭源发布的本软件中
 */

#include "../include/AAFile.h"
#include "../include/AAClassPrivateHandle.hpp"
#include <thread>
#include <list>
#include "../externals/boost/boost/asio.hpp"

#ifdef OS_WINDOWS
#include <windows.h>
#undef CopyFile
#undef DeleteFile

#elif defined OS_UNIX // ifdef OS_WINDOWS
#define _FILE_OFFSET_BITS 64
#include <sys/stat.h>
#include <fcntl.h>
#include <memory.h>
#include <sys/errno.h>
#include <unistd.h>
#include <sys/types.h>

#ifdef OS_ANDROID

#elif defined OS_MAC  // ifdef OS_ANDROID

#endif // ifdef OS_ANDROID    elif defined OS_MAC

#endif // ifdef OS_WINDOWS    elif defined OS_UNIX

namespace ArmyAnt {

//封装类私有成员的保护器
class FsPrivate
{
public:
	FsPrivate() {};
	~FsPrivate()
	{
		if(pipeReader != nullptr)
		{
			pipeReader->join();
		}
		AA_SAFE_DEL(pipeReader);
	};

	//流的类型
	StreamType type = StreamType::None;
	//是否在打开时不允许文件不存在
	bool nocreate = true;
	//是否在打开时不允许文件已存在
	bool noexist = false;
	//流名称（如文件名，网络域名等等）
	std::string name = "";
	//文件指针
	FILE*file = nullptr;
	//内存指针
	void*mem = nullptr;
	//内存长度
	uint64 len = 0;
	//内存读写指针的位置
	uint64 pos = 0;;
	//命名管道句柄
	void* pipeHandle = nullptr;
	//命名管道读写线程
	std::thread* pipeReader = nullptr;
	std::list<char> inners;
	//网络通讯tbox句柄
	//boost::asio::handler_type<> sockHandle = nullptr;

	static void NamePipeReader(FsPrivate*self);
	std::list<char> ReadNamePipe(uint64 length, const uint8* endtag = nullptr);

	static inline int Fseek(FILE*stream, uint64 offset,int whence)
	{
#ifdef OS_WINDOWS
        return _fseeki64(stream, offset, whence);
#else
        return fseek(stream, offset, whence);
#endif
	}

	static inline uint64 GetFPos(fpos_t pos){
#ifdef OS_WINDOWS
        return pos;
#else
        return pos.__pos;
#endif
	}
	static inline void SetPos(fpos_t&pos, uint64 value) {
#ifdef OS_WINDOWS
		pos=value;
#else
		pos.__pos = value;
#endif
	}

private:
	AA_FORBID_COPY_CTOR(FsPrivate);
	AA_FORBID_ASSGN_OPR(FsPrivate);
};

void FsPrivate::NamePipeReader(FsPrivate*self)
{
	while(self->pipeHandle != nullptr)
	{
		char buffer = 0;
		if(0<fread(&buffer, 1, 1, self->file))
			self->inners.push_back(buffer);
	}
	self->inners.clear();
}


std::list<char> FsPrivate::ReadNamePipe(uint64 length, const uint8* endtag/* = nullptr*/)
{
	if(inners.size() <= 0)
		return std::list<char>();
	std::list<char> ret;
	for(auto i = inners.begin(); i != inners.end() && length > 0; i++, len--)
	{
		if(endtag != nullptr&&endtag[0] == *i)
		{
			inners.pop_front();
			break;
		}
		ret.push_back(*i);
		inners.pop_front();
	}
	return ret;
}

static ClassPrivateHandleManager<FileStream, FsPrivate> handleManager;

FileStream::FileStream()
	:handle(handleManager.GetHandle(this))
{
}

FileStream::~FileStream()
{
	handleManager.ReleaseHandle(handle);
}

bool FileStream::SetStreamMode(bool nocreate /*= true*/, bool noexist /*= false*/)
{
	//不能两者同时为false
	if(nocreate&&noexist)
		return false;
	//保存设定
	auto hd = handleManager[handle];
	hd->nocreate = nocreate;
	hd->noexist = noexist;
	return true;
}

bool FileStream::Open(const char* filepath)
{
	auto hd = handleManager[handle];
	//type没有重置，说明本流尚未关闭
	if(hd->type != StreamType::None)
		return false;
	Assert(filepath != nullptr);
	//根据exist和created的允许设定，判断文件存在情况
	bool fexist = IsFileExist(filepath);
	if(hd->nocreate&&!fexist)
		return false;
	if(hd->noexist&&fexist)
		return false;
	//打开文件，并保存文件名
	hd->file = fopen(filepath, "rb+");
	if(hd->file == nullptr)
	{
		if(hd->nocreate)
			return false;
		hd->file = fopen(filepath, "wb");
		if(hd->file == nullptr)
			return false;
		fclose(hd->file);
		hd->file = fopen(filepath, "rb+");
		if(hd->file == nullptr)
			return false;
	}
	hd->name = filepath;
	hd->type = StreamType::File;
	return true;
}

bool FileStream::Open(mac_uint memaddr, uint64 len)
{
	auto hd = handleManager[handle];
	//type没有重置，说明本流尚未关闭
	if(hd->type != StreamType::None)
		return false;
	Assert(memaddr != 0);
	if(hd->noexist)
		return false;
	//保存内存地址
	hd->mem = reinterpret_cast<void*>(memaddr);
	//测试内存能否读写
	try
	{
		uint8 a = (static_cast<uint8*>(hd->mem))[0];
		char*p = static_cast<char*>(hd->mem);
		p[0] = 1;
		p[0] = 2;
		p[0] = a;
		a = (static_cast<uint8*>(hd->mem))[len - 1];
		p[len - 1] = 1;
		p[len - 1] = 2;
		p[len - 1] = a;
	}
	//如果不能读写，则取消打开该流
	catch(std::exception&)
	{
		hd->mem = nullptr;
		return false;
	}
	//保存内存地址、长度等信息
	char name[16] = "";
#ifdef _x86
	sprintf(name, "%X", memaddr);
#else
	sprintf(name, "%X%X", uint32(memaddr/0xffffffff), uint32(memaddr%0xffffffff));
#endif
	hd->name = name;
	hd->len = len;
	hd->type = StreamType::Memory;
	return true;
}

bool FileStream::Open(void* memaddr, uint64 len)
{
	return Open(reinterpret_cast<mac_uint>(memaddr), len);
}

bool FileStream::Open(const char* pipename, const char*pipePath, const char*pipeServer /*= "."*/)
{
	auto hd = handleManager[handle];
	if(hd->type != StreamType::None)
		return false;
	Assert(pipename != nullptr);
	//打开命名管道
	hd->name = std::string("\\\\") + pipeServer + "\\pipe\\" + pipePath + pipename;
	hd->file = fopen(hd->name.c_str(), "wb+");
	if(hd->file != nullptr&&hd->noexist)
	{
		hd->type = StreamType::NamePipe;
		Close();
		return false;
	}
	if(hd->file == nullptr&&hd->nocreate)
	{
		hd->name = "";
		return false;
	}
	else if(hd->file == nullptr)
	{
#ifdef OS_WINDOWS
		hd->pipeHandle = CreateNamedPipeA(hd->name.c_str(), PIPE_ACCESS_DUPLEX | FILE_FLAG_OVERLAPPED, PIPE_TYPE_MESSAGE | PIPE_READMODE_MESSAGE | PIPE_WAIT, PIPE_UNLIMITED_INSTANCES - 1, 0, 0, 0, 0);
		if(hd->pipeHandle==nullptr
#else
		if(0 == (hd->pipeHandle = static_cast<void*>(!mkfifo(hd->name.c_str(), O_RDWR | O_CREAT)))
#endif
		   || nullptr == (hd->file = fopen(hd->name.c_str(), "wb+")))
		{
			hd->name = "";
			return false;
		}
		std::function<void(ArmyAnt::FsPrivate*)> func = hd->NamePipeReader;
		hd->pipeReader = new std::thread(func,&(*hd));
	}
	hd->type = StreamType::NamePipe;
	return true;
}

bool FileStream::Open(uint8 comNum)
{
	auto hd = handleManager[handle];
	if(hd->type != StreamType::None)
		return false;
	Assert(comNum != 0);
	//打开串口
	hd->name = std::string("com") + char((comNum / 10 > 0) ? (comNum / 10 + 48) : 0) + char(comNum % 10 + 48);
	hd->file = fopen(hd->name.c_str(), "wb+");
	if(hd->file == nullptr)
	{
		hd->name = "";
		return false;
	}
	hd->type = StreamType::ComData;
	return true;
}

bool FileStream::Open(const char* netAddr, uint8 protocol)
{
	auto hd = handleManager[handle];
	if(hd->type != StreamType::None)
		return false;
	Assert(netAddr != nullptr && protocol != 0);
	// TODO : 填充网络通信连接操作
	/*hd->sockHandle = tb_stream_init_from_url(netAddr);
	if(hd->sockHandle == nullptr)
		return false;
	if(tb_stream_open(hd->sockHandle) == tb_false)*/
		return false;
	hd->name = netAddr;
	hd->type = StreamType::Network;
	return true;
}

bool FileStream::Open(uint32 netIp, uint16 port, uint8 protocol)
{
	auto hd = handleManager[handle];
	if(hd->type != StreamType::None)
		return false;
	Assert(port != 0 && protocol != 0);
	char name[32] = "";
	sprintf(name, "%d.%d.%d.%d:%d", netIp / 256 / 256 / 256, netIp / 256 / 256 % 256, netIp / 256 % 256, netIp % 256, int(port));
	// TODO : 填充网络通信连接操作
	/*hd->sockHandle = tb_stream_init_from_sock(name, port, protocol, tb_true);
	if(hd->sockHandle == nullptr)
		return false;
	if(tb_stream_open(hd->sockHandle) == tb_false)*/
		return false;
	hd->name = name;
	hd->type = StreamType::Network;
	return true;
}

bool FileStream::Close()
{
	bool ret = true;
	auto hd = handleManager[handle];
	//根据相应的类型进行关闭
	switch(hd->type)
	{
		case StreamType::File:
		case StreamType::NamePipe:
		case StreamType::ComData:
			if(hd->pipeHandle != nullptr)
			{
#ifdef OS_WINDOWS
				CloseHandle(hd->pipeHandle);
#else

#endif
				hd->pipeHandle = nullptr;
				fclose(hd->file);
				hd->pipeReader->join();
				AA_SAFE_DEL(hd->pipeReader);
			}
			hd->file = nullptr;
			break;
		case StreamType::Memory:
			hd->mem = nullptr;
			hd->len = 0;
			break;
		case StreamType::Network:
			// TODO : 填充网络通信关闭操作
			/*ret = tb_false != tb_stream_clos(hd->sockHandle);
			if(ret)
				hd->sockHandle = nullptr;*/
			break;
		case StreamType::None:
		default:
			break;
	}
	hd->name = "";
	hd->type = StreamType::None;
	return ret;
}

bool FileStream::IsOpened(bool dynamicCheck/* = true*/)
{
	auto hd = handleManager[handle];
	if(hd->type == StreamType::None || (hd->file == nullptr&&hd->mem == nullptr&&hd->len <= 0))
		return false;
	else if(!dynamicCheck)
		return true;

	//动态检查是否打开，防止意外断开
	uint8 c;
	switch(hd->type)
	{
		case StreamType::Memory:
			if(hd->mem == nullptr || hd->len == 0)
				return false;
		case StreamType::File:
		case StreamType::NamePipe:
		case StreamType::ComData:
			try
			{
				if(Read(static_cast<void*>(&c), uint32(1), 0))
					return true;
			}
			catch(std::exception)
			{
				return false;
			}
			break;
		case StreamType::Network:
			// TODO : 填充网络通信检测操作
//			return tb_stream_is_opened(hd->sockHandle) != tb_false;
		default:
			return false;
	}
	return true;
}

ArmyAnt::StreamType FileStream::NowType() const
{
	auto hd = handleManager[handle];
	return hd->type;
}

uint64 FileStream::GetLength() const
{
	auto hd = handleManager[handle];
	//根据类型获取长度
	switch(hd->type)
	{
		case StreamType::File:
		case StreamType::NamePipe:
		case StreamType::ComData:
		{
			fpos_t nowpos;
			FsPrivate::SetPos(nowpos, 0);
			fgetpos(hd->file, &nowpos);
			fseek(hd->file,0,SEEK_END);
			FsPrivate::Fseek(hd->file, 0, SEEK_END);
			fpos_t ret;
			fgetpos(hd->file, &ret);
			FsPrivate::Fseek(hd->file, FsPrivate::GetFPos(nowpos), SEEK_SET);
			return FsPrivate::GetFPos(ret);
		}
		case StreamType::Memory:
			return hd->len;
		case StreamType::Network:
			// TODO : 填充网络通信检测操作
//			return uint64(tb_stream_size(hd->sockHandle));
		default:
			return 0;
	}
}

uint64 FileStream::GetPos() const
{
	auto hd = handleManager[handle];
	//根据类型获取当前读写位置
	switch(hd->type)
	{
		case StreamType::File:
		case StreamType::NamePipe:
		case StreamType::ComData:
			fpos_t ret;
			fgetpos(hd->file, &ret);
			return FsPrivate::GetFPos(ret);
		case StreamType::Memory:
			return hd->pos;
		case StreamType::Network:
			// TODO : 填充网络通信检测操作
//			return uint64(tb_stream_left(hd->sockHandle));
		default:
			return 0;
	}
}

bool FileStream::IsEndPos() const
{
	auto hd = handleManager[handle];
	switch(hd->type)
	{
		case StreamType::File:
		case StreamType::NamePipe:
		case StreamType::ComData:
			return feof(hd->file) != 0;
		case StreamType::Memory:
			return hd->pos >= hd->len;
		case StreamType::Network:
			// TODO : 填充网络通信检测操作
			//return tb_stream_left(hd->sockHandle) >= tb_stream_size(hd->sockHandle);
		default:
			return false;
	}
}

bool FileStream::MovePos(uint64 pos /*= FILE_POS_END*/) const
{
	auto hd = handleManager[handle];
	switch(hd->type)
	{
		case StreamType::File:
		case StreamType::NamePipe:
		case StreamType::ComData:
			FsPrivate::Fseek(hd->file, pos, SEEK_SET);
			break;
		case StreamType::Memory:
			hd->pos = pos;
			break;
		case StreamType::Network:
			// TODO : 填充网络通信检测操作
			//return tb_false != tb_stream_ctrl(hd->sockHandle, pos);
		default:
			return false;
	}
	return true;
}

const char* FileStream::GetSourceName() const
{
	return	handleManager[handle]->name.c_str();
}

uint64 FileStream::Read(void*buffer, uint32 len /*= FILE_SHORT_POS_END*/, uint64 pos /*= FILE_LONG_POS_END*/)
{
	Assert(buffer != nullptr);
	auto hd = handleManager[handle];
	//根据类型进行读取。磁盘文件、命名管道和串口可以统一调用库函数
	switch(hd->type)
	{
		case StreamType::File:
		case StreamType::ComData:
		{
			//记录当前位置。如果参数制定了要开始读取的位置，则读取过后要返回到原位置
			fpos_t now;
			fgetpos(hd->file, &now);
			FsPrivate::Fseek(hd->file, 0, SEEK_END);
			fpos_t wholelen;
			fgetpos(hd->file, &wholelen);
			//标记是否在读取结束后返回初始位置
			bool gostart = true;
			if(pos == FILE_LONG_POS_END)
			{
				gostart = false;
				pos = FsPrivate::GetFPos(now);
			}
			FsPrivate::Fseek(hd->file, pos, SEEK_SET);
			fread(buffer, uint32(min(FsPrivate::GetFPos(wholelen), len)), 1, hd->file);
			if(gostart)
				FsPrivate::Fseek(hd->file, FsPrivate::GetFPos(now), SEEK_SET);
			return uint64(min(FsPrivate::GetFPos(wholelen), len));
		}
		case StreamType::NamePipe:
		{
			auto ret = hd->ReadNamePipe(len);
			auto thislen = min(len, ret.size());
			auto reti = ret.begin();
			for(uint32 i = 0; i < thislen; i++)
			{
				static_cast<uint8*>(buffer)[i] = *reti;
				reti++;
			}
			return thislen;
		}
		case StreamType::Memory:
		{
			if(pos == FILE_LONG_POS_END)
				pos = hd->pos;
			if(pos >= hd->len)
				return false;
			//内存拷贝
			fpos_t reallen ;
			FsPrivate::SetPos(reallen, min(hd->len - hd->pos, len));
			memcpy(static_cast<char*>(buffer), static_cast<char*>(hd->mem) + pos, uint32(FsPrivate::GetFPos(reallen)));
			if(pos == hd->pos)
				pos += min(hd->len - hd->pos, len);
			return uint64(min(hd->len - hd->pos, len));
		}
		case StreamType::Network:
		{
			// TODO : 填充网络通信检测操作
			//tb_stream_read(hd->sockHandle, static_cast<tb_byte_t*>(buffer), len);
		}
		default:
			return 0;
	}
}

uint64 FileStream::Read(void*buffer, uint8 endtag, uint64 maxlen/* = FILE_SHORT_POS_END*/)
{
	Assert(buffer != nullptr);
	auto hd = handleManager[handle];
	uint64 len = 0;
	fpos_t wholeLen;
	if(hd->type != StreamType::None)
		FsPrivate::SetPos(wholeLen, GetLength());
	else
		FsPrivate::SetPos(wholeLen, 0);
	size_t sz = 0;
	uint8 a = 0;
	//根据类型进行读取。磁盘文件、命名管道和串口可以统一调用库函数
	switch(hd->type)
	{
		case StreamType::File:
		case StreamType::ComData:
		{
			//逐字读取
			for(auto nowpos = GetPos(); nowpos < FsPrivate::GetFPos(wholeLen) || len== maxlen; nowpos++)
			{
				sz = fread(&a, 1, 1, hd->file);
				if(a == endtag || sz < 1)
					return len;
				else
				{
					static_cast<uint8*>(buffer)[len++] = a;
				}
			}
			return len;
		}
		case StreamType::NamePipe:
		{
			auto ret = hd->ReadNamePipe(maxlen, &endtag);
			auto thislen = min(maxlen, ret.size());
			auto reti = ret.begin();
			for(uint64 i = 0; i < thislen; i++)
			{
				static_cast<uint8*>(buffer)[i] = *reti;
				reti++;
			}
			return thislen;
		}
		case StreamType::Memory:
		{
			//逐字读取
			
			for(auto nowPos = hd->pos; ; nowPos++)
			{
				if(nowPos < hd->len || static_cast<uint8*>(hd->mem)[nowPos] == endtag || nowPos-hd->pos== maxlen)
				{
					auto alllen = uint64(nowPos - hd->pos);
					memcpy(static_cast<char*>(buffer), static_cast<char*>(hd->mem) + hd->pos, alllen);
					hd->pos = nowPos;
					return alllen;
				}
			}
		}
		case StreamType::Network:
		default:
			return 0;
	}
}

uint64 FileStream::Write(void*buffer, uint64 len /*= 0*/)
{
	Assert(buffer != nullptr);
	auto hd = handleManager[handle];
	//如果len参数没有传入，则写内存到流，直至遇到0，这相当于写入字符串至流
	if(len == 0)
		while(static_cast<uint8*>(buffer)[len] != 0)
			len++;

	switch(hd->type)
	{
		case StreamType::File:
		case StreamType::NamePipe:
		case StreamType::ComData:

			return fwrite(buffer, len, 1, hd->file);
		case StreamType::Memory:
		{
			auto realLen = uint64(min(len, hd->len - hd->pos));
			memcpy(hd->mem, buffer, realLen);
			return realLen;
		}
		case StreamType::Network:
		default:
			return 0;
	}
}

bool FileStream::CopyFile(const char*srcPath, const char*dstPath)
{
	//只读打开源文件和目标文件，前者应当成功，后者应当失败
	auto srcfp = fopen(srcPath, "rb");
	auto dstfp = fopen(dstPath, "rb");
	if(srcfp == nullptr || dstfp != nullptr)
		return false;
	//创建目标文件
	dstfp = fopen(dstPath, "wb");
	if(dstfp == nullptr)
		return false; 
	//开辟拷贝文件的临时内存，先尝试申请1MB
	uint32 memlen = 1048576;
	char*cpmem = new char[memlen];
	//如果申请失败，则尝试申请1kB
	if(cpmem == nullptr)
	{
		memlen = 1024;
		cpmem = new char[memlen];
		Assert(cpmem != nullptr);
	}
	//检测源文件的长度
	fpos_t flen;
	FsPrivate::Fseek(srcfp, 0, SEEK_END);
	fgetpos(srcfp, &flen);
	FsPrivate::Fseek(srcfp, 0, SEEK_SET);
	//拷贝
	for(uint64 i = 0; i < FsPrivate::GetFPos(flen); i+=memlen)
	{
		auto readed = fread(cpmem, memlen, 1, srcfp);
		fwrite(cpmem, readed, 1, dstfp);
		fflush(dstfp);
	}
	//保存并关闭文件
	fclose(srcfp);
	fclose(dstfp);
	//释放内存
	AA_SAFE_DELALL(cpmem);
	return true;
}

bool FileStream::MoveOrRenameFile(const char*srcPath, const char*dstPath)
{
	return 0 == rename(srcPath, dstPath);
}

bool FileStream::DeleteFile(const char*path)
{
	return 0 == remove(path);
}

bool FileStream::IsFileExist(const char*path)
{
	//尝试只读打开文件
	auto ret = fopen(path, "rb");
	if(ret != nullptr)
	{
		fclose(ret);
		return true;
	}
	return false;
}

FileStream& FileStream::operator>>(void*buffer)
{
	Read(buffer);
	return *this;
}

FileStream& FileStream::operator<<(void*buffer)
{
	Write(buffer);
	return *this;
}

FileStream* FileStream::GetStream(uint32 handle)
{
	return 	handleManager.GetSourceByHandle(handle);
}

bool FileStream::operator!=(std::nullptr_t)
{
	return IsOpened(false);
}

bool FileStream::operator==(std::nullptr_t)
{
	return !IsOpened(false);
}

bool FileStream::operator^=(const char* filename)
{
	FileStream fp;
	if(!fp.Open(filename))
		return false;
	//统计要读取的长度
	auto flen = GetLength()- GetPos();
	//申请内存拷贝临时区1MB
	uint32 memlen = 1048576;
	char*cpmem = new char[memlen];
	//申请失败，则尝试申请1kB
	if(cpmem == nullptr)
	{
		memlen = 1024;
		cpmem = new char[memlen];
		Assert(cpmem != nullptr);
	}
	//进行数据拷贝
	for(uint64 i = 0; i < flen; i += memlen)
	{
		uint64 readed = fp.Read(cpmem, memlen);
		if(0 == readed)
		{
			fp.Close();
			return false;
		}
		if(0 == Write(cpmem, readed))
		{
			fp.Close();
			return false;
		}
	}
	fp.Close();
	return true;
}

} // namespace ArmyAnt