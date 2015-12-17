#include "../include/AAFile.h"
#include "../include/AAClassPrivateHandle.hpp"
#include <thread>
#include <list>

#ifdef OS_WINDOWS
#include <windows.h>
#undef CopyFile
#undef DeleteFile

#elif defined OS_UNIX

#ifdef OS_ANDROID

#elif OS_MAC
#endif

#endif

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
	fpos_t len = 0;
	//内存读写指针的位置
	fpos_t pos = 0;
	//打开命名管道时，是否自动创建了此管道
	void* pipeHandle = nullptr;
	std::thread* pipeReader = nullptr;
	std::list<char> inners;

	static void NamePipeReader(FsPrivate*self);
	std::list<char> ReadNamePipe(DWORD length, const BYTE* endtag = nullptr);

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


std::list<char> FsPrivate::ReadNamePipe(DWORD length, const BYTE* endtag/* = nullptr*/)
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
	AAAssert(filepath != nullptr);
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

bool FileStream::Open(DWORD memaddr, fpos_t len)
{
	auto hd = handleManager[handle];
	//type没有重置，说明本流尚未关闭
	if(hd->type != StreamType::None)
		return false;
	AAAssert(memaddr != 0);
	if(hd->noexist)
		return false;
	//保存内存地址
	hd->mem = reinterpret_cast<void*>(memaddr);
	//测试内存能否读写
	try
	{
		BYTE a = (reinterpret_cast<BYTE*>(hd->mem))[0];
		char*p = reinterpret_cast<char*>(hd->mem);
		p[0] = 1;
		p[0] = 2;
		p[0] = a;
		a = (reinterpret_cast<BYTE*>(hd->mem))[len - 1];
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
	sprintf(name, "%X", memaddr);
	hd->name = name;
	hd->len = len;
	hd->type = StreamType::Memory;
	return true;
}

bool FileStream::Open(BYTE* memaddr, fpos_t len)
{
	return Open(reinterpret_cast<DWORD>(memaddr), len);
}

bool FileStream::Open(const char* pipename, const char*pipePath, const char*pipeServer /*= "."*/)
{
	auto hd = handleManager[handle];
	if(hd->type != StreamType::None)
		return false;
	AAAssert(pipename != nullptr);
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
		if(0 == (hd->pipeHandle = !mkfifo(hd->name, O_RDWR | O_CREAT))
#endif
		   || nullptr == (hd->file = fopen(hd->name.c_str(), "wb+")))
		{
			hd->name = "";
			return false;
		}
		hd->pipeReader = new std::thread(hd->NamePipeReader,hd);
	}
	hd->type = StreamType::NamePipe;
	return true;
}

bool FileStream::Open(BYTE comNum)
{
	auto hd = handleManager[handle];
	if(hd->type != StreamType::None)
		return false;
	AAAssert(comNum != 0);
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

bool FileStream::Open(const char* netAddr, BYTE protocol)
{
	auto hd = handleManager[handle];
	if(hd->type != StreamType::None)
		return false;
	AAAssert(netAddr != nullptr && protocol != 0);
	hd->name = netAddr;
	//填充网络通信连接操作
	return false;
}

bool FileStream::Open(DWORD netIp, WORD port, BYTE protocol)
{
	auto hd = handleManager[handle];
	if(hd->type != StreamType::None)
		return false;
	AAAssert(port != 0 && protocol != 0);
	char name[32] = "";
	sprintf(name, "%d.%d.%d.%d:%d", netIp / 256 / 256 / 256, netIp / 256 / 256 % 256, netIp / 256 % 256, netIp % 256, int(port));
	hd->name = name;
	//填充网络通信连接操作
	return false;
}

bool FileStream::Close()
{
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
				AA_SAFE_DEL(hd->pipeReader)
			}
			hd->file = nullptr;
			break;
		case StreamType::Memory:
			hd->mem = nullptr;
			hd->len = 0;
			break;
		case StreamType::Network:
			AAAssert(0);	//修改为网络关闭操作
			break;
		case StreamType::None:
		default:
			break;
	}
	hd->type = StreamType::None;
	return true;
}

bool FileStream::IsOpened(bool dynamicCheck/* = true*/)
{
	auto hd = handleManager[handle];
	if(hd->type == StreamType::None || (hd->file == nullptr&&hd->mem == nullptr&&hd->len <= 0))
		return false;
	else if(!dynamicCheck)
		return true;

	//动态检查是否打开，防止意外断开
	BYTE c;
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
				if(Read(reinterpret_cast<void*>(&c), DWORD(1), 0))
					return true;
			}
			catch(std::exception)
			{
				return false;
			}
			break;
		case StreamType::Network:
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

fpos_t FileStream::GetLength() const
{
	auto hd = handleManager[handle];
	//根据类型获取长度
	switch(hd->type)
	{
		case StreamType::File:
		case StreamType::NamePipe:
		case StreamType::ComData:
		{
			fpos_t nowpos = 0;
			fgetpos(hd->file, &nowpos);
			_fseeki64(hd->file, 0, SEEK_END);
			fpos_t ret;
			fgetpos(hd->file, &ret);
			_fseeki64(hd->file, nowpos, SEEK_SET);
			return ret;
		}
		case StreamType::Memory:
			return hd->len;
		case StreamType::Network:
		default:
			return 0;
	}
}

fpos_t FileStream::GetPos() const
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
			return ret;
		case StreamType::Memory:
			return hd->pos;
		case StreamType::Network:
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
		default:
			return false;
	}
}

bool FileStream::MovePos(fpos_t pos /*= FILE_POS_END*/) const
{
	auto hd = handleManager[handle];
	switch(hd->type)
	{
		case StreamType::File:
		case StreamType::NamePipe:
		case StreamType::ComData:
			_fseeki64(hd->file, pos, SEEK_SET);
			break;
		case StreamType::Memory:
			hd->pos = pos;
			break;
		case StreamType::Network:
		default:
			return false;
	}
	return true;
}

const char* FileStream::GetSourceName() const
{
	return	handleManager[handle]->name.c_str();
}

DWORD FileStream::Read(void*buffer, DWORD len /*= FILE_SHORT_POS_END*/, fpos_t pos /*= FILE_LONG_POS_END*/)
{
	AAAssert(buffer != nullptr);
	auto hd = handleManager[handle];
	//根据类型进行读取。磁盘文件、命名管道和串口可以统一调用库函数
	switch(hd->type)
	{
		case StreamType::File:
		case StreamType::ComData:
		{
			//记录当前位置。如果参数制定了要开始读取的位置，则读取过后要返回到原位置
			fpos_t now = 0;
			fgetpos(hd->file, &now);
			_fseeki64(hd->file, 0, SEEK_END);
			fpos_t wholelen = 0;
			fgetpos(hd->file, &wholelen);
			//标记是否在读取结束后返回初始位置
			bool gostart = true;
			if(pos == FILE_LONG_POS_END)
			{
				gostart = false;
				pos = now;
			}
			_fseeki64(hd->file, pos, SEEK_SET);
			fread(buffer, DWORD(min(wholelen, len)), 1, hd->file);
			if(gostart)
				_fseeki64(hd->file, now, SEEK_SET);
			return DWORD(min(wholelen, len));
		}
		case StreamType::NamePipe:
		{
			auto ret = hd->ReadNamePipe(len);
			auto thislen = min(len, ret.size());
			auto reti = ret.begin();
			for(DWORD i = 0; i < thislen; i++)
			{
				reinterpret_cast<BYTE*>(buffer)[i] = *reti;
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
			fpos_t reallen = min(hd->len - hd->pos, len);
			memcpy(reinterpret_cast<char*>(buffer), reinterpret_cast<char*>(hd->mem) + pos, DWORD(reallen));
			if(pos == hd->pos)
				pos += min(hd->len - hd->pos, len);
			return DWORD(min(hd->len - hd->pos, len));
		}
		case StreamType::Network:
		default:
			return 0;
	}
}

DWORD FileStream::Read(void*buffer, BYTE endtag, DWORD maxlen/* = FILE_SHORT_POS_END*/)
{
	AAAssert(buffer != nullptr);
	auto hd = handleManager[handle];
	DWORD len = 0;
	fpos_t wholeLen = 0;
	if(hd->type != StreamType::None)
		wholeLen = GetLength();
	size_t sz = 0;
	BYTE a = 0;
	//根据类型进行读取。磁盘文件、命名管道和串口可以统一调用库函数
	switch(hd->type)
	{
		case StreamType::File:
		case StreamType::ComData:
		{
			//逐字读取
			for(auto nowpos = GetPos(); nowpos < wholeLen || len== maxlen; nowpos++)
			{
				sz = fread(&a, 1, 1, hd->file);
				if(a == endtag || sz < 1)
					return len;
				else
				{
					reinterpret_cast<BYTE*>(buffer)[len++] = a;
				}
			}
			return len;
		}
		case StreamType::NamePipe:
		{
			auto ret = hd->ReadNamePipe(maxlen, &endtag);
			auto thislen = min(maxlen, ret.size());
			auto reti = ret.begin();
			for(DWORD i = 0; i < thislen; i++)
			{
				reinterpret_cast<BYTE*>(buffer)[i] = *reti;
				reti++;
			}
			return thislen;
		}
		case StreamType::Memory:
		{
			//逐字读取
			
			for(auto nowPos = hd->pos; ; nowPos++)
			{
				if(nowPos < hd->len || reinterpret_cast<BYTE*>(hd->mem)[nowPos] == endtag || nowPos-hd->pos== maxlen)
				{
					auto alllen = DWORD(nowPos - hd->pos);
					memcpy(reinterpret_cast<char*>(buffer), reinterpret_cast<char*>(hd->mem) + hd->pos, alllen);
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

DWORD FileStream::Write(void*buffer, DWORD len /*= 0*/)
{
	AAAssert(buffer != nullptr);
	auto hd = handleManager[handle];
	//如果len参数没有传入，则写内存到流，直至遇到0，这相当于写入字符串至流
	if(len == 0)
		while(reinterpret_cast<BYTE*>(buffer)[len] != 0)
			len++;

	switch(hd->type)
	{
		case StreamType::File:
		case StreamType::NamePipe:
		case StreamType::ComData:

			fwrite(buffer, len, 1, hd->file);
			return 0 == errno;
		case StreamType::Memory:
		{
			auto realLen = DWORD(min(len, hd->len - hd->pos));
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
	DWORD memlen = 1048576;
	char*cpmem = new char[memlen];
	//如果申请失败，则尝试申请1kB
	if(cpmem == nullptr)
	{
		memlen = 1024;
		cpmem = new char[memlen];
		AAAssert(cpmem == nullptr);
	}
	//检测源文件的长度
	fpos_t flen = 0;
	_fseeki64(srcfp, 0, SEEK_END);
	fgetpos(srcfp, &flen);
	_fseeki64(srcfp, 0, SEEK_SET);
	//拷贝
	for(fpos_t i = 0; i < flen; i+=memlen)
	{
		auto readed = fread(cpmem, memlen, 1, srcfp);
		fwrite(cpmem, readed, 1, dstfp);
		fflush(dstfp);
	}
	//保存并关闭文件
	fclose(srcfp);
	fclose(dstfp);
	//释放内存
	AA_SAFE_DELALL(cpmem)
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

FileStream* FileStream::GetStream(DWORD handle)
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
	DWORD memlen = 1048576;
	char*cpmem = new char[memlen];
	//申请失败，则尝试申请1kB
	if(cpmem == nullptr)
	{
		memlen = 1024;
		cpmem = new char[memlen];
		AAAssert(cpmem == nullptr);
	}
	//进行数据拷贝
	for(fpos_t i = 0; i < flen; i += memlen)
	{
		auto readed = fp.Read(cpmem, memlen);
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