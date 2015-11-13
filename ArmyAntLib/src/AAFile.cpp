#include "../include/AAFile.h"
#include "../include/AAClassPrivateHandle.hpp"

#ifdef OS_WINDOWS

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
	~FsPrivate() {};

	StreamType type = StreamType::None;
	bool nocreate = true;
	bool noexist = false;
	std::string name = "";
	FILE*file = nullptr;
	void*mem = nullptr;
	fpos_t len = 0;
	fpos_t pos = 0;

private:
	FsPrivate(FsPrivate&) {};
	void operator=(FsPrivate&) {};
};

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
	if(nocreate&&noexist)
		return false;
	auto hd = handleManager[handle];
	hd->nocreate = nocreate;
	hd->noexist = noexist;
	return true;
}

bool FileStream::Open(const char* filepath)
{
	auto hd = handleManager[handle];
	if(hd->type != StreamType::None)
		return false;
	AAAssert(filepath != nullptr);
	hd->name = filepath;
	hd->file = fopen(filepath, "rb+");
	hd->type = StreamType::File;
	return true;
}

bool FileStream::Open(DWORD memaddr, fpos_t len)
{
	auto hd = handleManager[handle];
	if(hd->type != StreamType::None)
		return false;
	AAAssert(memaddr != 0);
	hd->mem = reinterpret_cast<void*>(memaddr);
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
	catch(std::exception&)
	{
		hd->mem = nullptr;
		return false;
	}
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
	hd->name = std::string("\\\\") + pipeServer + "\\pipe\\" + pipePath + pipename;
	hd->file = fopen(hd->name.c_str(), "wb+");
	hd->type = StreamType::NamePipe;
	return true;
}

bool FileStream::Open(BYTE comNum)
{
	auto hd = handleManager[handle];
	if(hd->type != StreamType::None)
		return false;
	AAAssert(comNum != 0);
	hd->name = std::string("com") + char((comNum / 10 > 0) ? (comNum / 10 + 48) : 0) + char(comNum % 10 + 48);
	hd->file = fopen(hd->name.c_str(), "wb+");
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
	switch(hd->type)
	{
		case StreamType::File:
		case StreamType::NamePipe:
		case StreamType::ComData:
			fclose(hd->file);
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
	switch(hd->type)
	{
		case StreamType::File:
		case StreamType::NamePipe:
		case StreamType::ComData:
		{
			auto ret = errno;
			fpos_t now = 0;
			fgetpos(hd->file, &now);
			_fseeki64(hd->file, 0, SEEK_END);
			fpos_t wholelen = 0;
			fgetpos(hd->file, &wholelen);
			bool gostart = false;
			if(pos == FILE_LONG_POS_END)
			{
				gostart = true;
				pos = now;
			}
			_fseeki64(hd->file, pos, SEEK_SET);
			fread(buffer, DWORD(min(wholelen, len)), 1, hd->file);
			if(!gostart)
				_fseeki64(hd->file, now, SEEK_SET);
			return ret == 0;
		}
		case StreamType::Memory:
		{
			if(pos == FILE_LONG_POS_END)
				pos = hd->pos;
			if(pos >= hd->len)
				return false;
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
	switch(hd->type)
	{
		case StreamType::File:
		case StreamType::NamePipe:
		case StreamType::ComData:
		{
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
		case StreamType::Memory:
		{
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
	auto srcfp = fopen(srcPath, "rb");
	auto dstfp = fopen(dstPath, "rb");
	if(srcfp == nullptr || dstfp != nullptr)
		return false;
	dstfp = fopen(dstPath, "wb");
	if(dstfp == nullptr)
		return false; 
	fpos_t flen = 0;
	DWORD memlen = 1048576;
	char*cpmem = new char[memlen];
	if(cpmem == nullptr)
	{
		memlen = 1024;
		cpmem = new char[memlen];
		AAAssert(cpmem == nullptr);
	}
	_fseeki64(srcfp, 0, SEEK_END);
	fgetpos(srcfp, &flen);
	_fseeki64(srcfp, 0, SEEK_SET);
	for(fpos_t i = 0; i < flen; i+=memlen)
	{
		auto readed = fread(cpmem, memlen, 1, srcfp);
		fwrite(cpmem, readed, 1, dstfp);
		fflush(dstfp);
	}
	fclose(srcfp);
	fclose(dstfp);
	AA_SAFE_DELALL(cpmem)
	return true;
}

bool FileStream::MoveOrRenameFile(const char*srcPath, const char*dstPath)
{
	auto ret = CopyFile(srcPath, dstPath);
	if(!ret)
		return ret;
	return DeleteFile(srcPath);
}

bool FileStream::DeleteFile(const char*path)
{
	return 0 == remove(path);
}

bool FileStream::IsFileExist(const char*path)
{
	auto ret = fopen(path, "rb");
	if(ret != nullptr)
		fclose(ret);
	return ret == nullptr;
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
	auto flen = GetLength()- GetPos();
	DWORD memlen = 1048576;
	char*cpmem = new char[memlen];
	if(cpmem == nullptr)
	{
		memlen = 1024;
		cpmem = new char[memlen];
		AAAssert(cpmem == nullptr);
	}
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