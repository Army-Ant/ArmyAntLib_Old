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

#include "../base/base.hpp"
#include "../include/C_AAFile.h"
#include "../include/AAFile.h"
#include <iostream>
using namespace ArmyAnt;

uint32 AA_FILE_MAX_LENGTH = 0xffffffff;

ARMYANT_CLIB_API AA_CFileStream AA_Stream_Create()
{
	return (new FileStream())->handle;
}

ARMYANT_CLIB_API void AA_Stream_Release(AA_CFileStream stream)
{
	delete FileStream::GetStream(stream);
}

ARMYANT_CLIB_API BOOL AA_Stream_SetMode(AA_CFileStream stream, BOOL nocreate, BOOL noexist)
{
	return FileStream::GetStream(stream)->SetStreamMode(nocreate != 0, noexist != 0) ? TRUE : FALSE;
}

ARMYANT_CLIB_API BOOL AA_Stream_OpenFile(AA_CFileStream stream, const char* filename)
{
	return FileStream::GetStream(stream)->Open(filename) ? TRUE : FALSE;
}

ARMYANT_CLIB_API BOOL AA_Stream_OpenMemoryByAddr(AA_CFileStream stream, mac_uint memaddr, uint32 len)
{
	return FileStream::GetStream(stream)->Open(memaddr, len) ? TRUE : FALSE;
}

ARMYANT_CLIB_API BOOL AA_Stream_OpenMemoryByPtr(AA_CFileStream stream, void* memaddr, uint32 len)
{
	return FileStream::GetStream(stream)->Open(memaddr, len) ? TRUE : FALSE;
}

ARMYANT_CLIB_API BOOL AA_Stream_OpenNamePipe(AA_CFileStream stream, const char* pipename, const char*pipePath, const char*pipeServer)
{
	return FileStream::GetStream(stream)->Open(pipename, pipePath, pipeServer) ? TRUE : FALSE;
}

ARMYANT_CLIB_API BOOL AA_Stream_OpenCom(AA_CFileStream stream, uint8 comNum)
{
	return FileStream::GetStream(stream)->Open(comNum) ? TRUE : FALSE;
}

ARMYANT_CLIB_API BOOL AA_Stream_OpenNetWithName(AA_CFileStream stream, const char* netAddr, uint8 protocol)
{
	return FileStream::GetStream(stream)->Open(netAddr, protocol) ? TRUE : FALSE;
}

ARMYANT_CLIB_API BOOL AA_Stream_OpenNetWithAddr(AA_CFileStream stream, uint32 netIp, uint16 port, uint8 protocol)
{
	return FileStream::GetStream(stream)->Open(netIp, port, protocol) ? TRUE : FALSE;
}

ARMYANT_CLIB_API BOOL AA_Stream_Close(AA_CFileStream stream)
{
	return FileStream::GetStream(stream)->Close() ? TRUE : FALSE;
}

ARMYANT_CLIB_API BOOL AA_Stream_IsOpened(AA_CFileStream stream)
{
	return FileStream::GetStream(stream)->IsOpened() ? TRUE : FALSE;
}

ARMYANT_CLIB_API AA_StreamType AA_Stream_NowType(AA_CFileStream stream)
{
	return (AA_StreamType)FileStream::GetStream(stream)->NowType();
}

ARMYANT_CLIB_API uint32 AA_Stream_GetLength(AA_CFileStream stream)
{
	return FileStream::GetStream(stream)->GetLength();
}

ARMYANT_CLIB_API uint32 AA_Stream_GetPos(AA_CFileStream stream)
{
	return FileStream::GetStream(stream)->GetPos();
}

ARMYANT_CLIB_API BOOL AA_stream_IsEndPos(AA_CFileStream stream)
{
	return FileStream::GetStream(stream)->IsEndPos() ? TRUE : FALSE;
}

ARMYANT_CLIB_API BOOL AA_Stream_MovePos(AA_CFileStream stream, uint32 pos)
{
	return FileStream::GetStream(stream)->MovePos(pos) ? TRUE : FALSE;
}

ARMYANT_CLIB_API const char* AA_Stream_GetStreamName(AA_CFileStream stream)
{
	return FileStream::GetStream(stream)->GetSourceName();
}

ARMYANT_CLIB_API uint32 AA_Stream_ReadSome(AA_CFileStream stream, void*buffer, uint32 len, uint32 pos)
{
	return FileStream::GetStream(stream)->Read(buffer, len, pos);
}

ARMYANT_CLIB_API uint32 AA_Stream_ReadTo(AA_CFileStream stream, void*buffer, uint8 endtag, uint32 maxlen)
{
	return FileStream::GetStream(stream)->Read(buffer, endtag, maxlen);
}

ARMYANT_CLIB_API uint32 AA_Stream_Write(AA_CFileStream stream, void*buffer, uint32 len)
{
	return FileStream::GetStream(stream)->Write(buffer, len);
}

ARMYANT_CLIB_API BOOL AA_Stream_CopyFile(const char*srcPath, const char*dstPath)
{
	return FileStream::CopyFile(srcPath, dstPath) ? TRUE : FALSE;
}

ARMYANT_CLIB_API BOOL AA_Stream_MoveOrRenameFile(const char*srcPath, const char*dstPath)
{
	return FileStream::MoveOrRenameFile(srcPath, dstPath) ? TRUE : FALSE;
}

ARMYANT_CLIB_API BOOL AA_Stream_DeleteFile(const char*path)
{
	return FileStream::DeleteFile(path) ? TRUE : FALSE;
}

ARMYANT_CLIB_API BOOL AA_Stream_IsFileExist(const char*path)
{
	return FileStream::IsFileExist(path) ? TRUE : FALSE;
}