#include "../include/C_AAFile.h"
#include "../include/AAFile.h"
using namespace ArmyAnt;

ARMYANT_CLIB_API AA_CFileStream AA_Stream_Create()
{
	return (new FileStream())->handle;
}

ARMYANT_CLIB_API void AA_Stream_Release(AA_CFileStream stream)
{
	delete FileStream::GetStream(stream);
}

ARMYANT_CLIB_API bool AA_Stream_SetMode(AA_CFileStream stream, bool nocreate, bool noexist)
{
	return FileStream::GetStream(stream)->SetStreamMode(nocreate, noexist);
}

ARMYANT_CLIB_API bool AA_Stream_OpenFile(AA_CFileStream stream, const char* filename)
{
	return FileStream::GetStream(stream)->Open(filename);
}

ARMYANT_CLIB_API bool AA_Stream_OpenMemoryByAddr(AA_CFileStream stream, DWORD memaddr, WORD len)
{
	return FileStream::GetStream(stream)->Open(memaddr, len);
}

ARMYANT_CLIB_API bool AA_Stream_OpenMemoryByPtr(AA_CFileStream stream, void* memaddr, WORD len)
{
	return FileStream::GetStream(stream)->Open(reinterpret_cast<BYTE*>(memaddr), fpos_t(len));
}

ARMYANT_CLIB_API bool AA_Stream_OpenNamePipe(AA_CFileStream stream, const char* pipename, const char*pipePath, const char*pipeServer)
{
	return FileStream::GetStream(stream)->Open(pipename, pipePath, pipeServer);
}

ARMYANT_CLIB_API bool AA_Stream_OpenCom(AA_CFileStream stream, BYTE comNum)
{
	return FileStream::GetStream(stream)->Open(comNum);
}

ARMYANT_CLIB_API bool AA_Stream_OpenNetWithName(AA_CFileStream stream, const char* netAddr, BYTE protocol)
{
	return FileStream::GetStream(stream)->Open(netAddr, protocol);
}

ARMYANT_CLIB_API bool AA_Stream_OpenNetWithAddr(AA_CFileStream stream, DWORD netIp, WORD port, BYTE protocol)
{
	return FileStream::GetStream(stream)->Open(netIp, port, protocol);
}

ARMYANT_CLIB_API bool AA_Stream_Close(AA_CFileStream stream)
{
	return FileStream::GetStream(stream)->Close();
}

ARMYANT_CLIB_API bool AA_Stream_IsOpened(AA_CFileStream stream)
{
	return FileStream::GetStream(stream)->IsOpened();
}

ARMYANT_CLIB_API AA_StreamType AA_Stream_NowType(AA_CFileStream stream)
{
	return (AA_StreamType)FileStream::GetStream(stream)->NowType();
}

ARMYANT_CLIB_API DWORD AA_Stream_GetLength(AA_CFileStream stream)
{
	return FileStream::GetStream(stream)->GetLength();
}

ARMYANT_CLIB_API DWORD AA_Stream_GetPos(AA_CFileStream stream)
{
	return FileStream::GetStream(stream)->GetPos();
}

ARMYANT_CLIB_API bool AA_stream_IsEndPos(AA_CFileStream stream)
{
	return FileStream::GetStream(stream)->IsEndPos();
}

ARMYANT_CLIB_API bool AA_Stream_MovePos(AA_CFileStream stream, DWORD pos)
{
	return FileStream::GetStream(stream)->MovePos(pos);
}

ARMYANT_CLIB_API const char* AA_Stream_GetStreamName(AA_CFileStream stream)
{
	return FileStream::GetStream(stream)->GetSourceName();
}

ARMYANT_CLIB_API DWORD AA_Stream_ReadSome(AA_CFileStream stream, void*buffer, DWORD len, DWORD pos)
{
	return FileStream::GetStream(stream)->Read(buffer, len, fpos_t(pos));
}

ARMYANT_CLIB_API DWORD AA_Stream_ReadTo(AA_CFileStream stream, void*buffer, BYTE endtag, DWORD maxlen)
{
	return FileStream::GetStream(stream)->Read(buffer, endtag, maxlen);
}

ARMYANT_CLIB_API DWORD AA_Stream_Write(AA_CFileStream stream, void*buffer, DWORD len)
{
	return FileStream::GetStream(stream)->Write(buffer, len);
}

ARMYANT_CLIB_API bool AA_Stream_CopyFile(const char*srcPath, const char*dstPath)
{
	return FileStream::CopyFile(srcPath, dstPath);
}

ARMYANT_CLIB_API bool AA_Stream_MoveOrRenameFile(const char*srcPath, const char*dstPath)
{
	return FileStream::MoveOrRenameFile(srcPath, dstPath);
}

ARMYANT_CLIB_API bool AA_Stream_DeleteFile(const char*path)
{
	return FileStream::DeleteFile(path);
}

ARMYANT_CLIB_API bool AA_Stream_IsFileExist(const char*path)
{
	return FileStream::IsFileExist(path);
}