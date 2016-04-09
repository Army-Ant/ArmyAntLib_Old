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
#include "../include/AAJNITools.hpp"
#include "../include/C_AAFile.h"

#include <string>

// FileStream 对Java接口的实现

#ifdef __cplusplus
extern "C" {
#endif

JNIEXPORT jlong JNICALL Java_ArmyAnt_File_Stream_Native_1Create(JNIEnv *, jclass)
{
	return jlong(AA_Stream_Create());
}

JNIEXPORT void JNICALL Java_ArmyAnt_File_Stream_Native_1Release(JNIEnv *, jclass, jlong stream)
{
	if(stream >= 0)
		AA_Stream_Release(AA_CFileStream(stream));
}

JNIEXPORT jboolean JNICALL Java_ArmyAnt_File_Stream_Native_1SetMode(JNIEnv *, jclass, jlong stream, jboolean nocreate, jboolean noexist)
{
	if(stream < 0)
		return JNI_FALSE;
	return jboolean(AA_Stream_SetMode(AA_CFileStream(stream), BOOL(nocreate), BOOL(noexist)));
}

JNIEXPORT jboolean JNICALL Java_ArmyAnt_File_Stream_Native_1OpenFile(JNIEnv * env, jclass, jlong stream, jstring filename)
{
	if(stream < 0)
		return JNI_FALSE;
	return jboolean(AA_Stream_OpenFile(AA_CFileStream(stream), ArmyAnt::JNITools::JstringToCstring(env, filename).c_str()));
}

JNIEXPORT jboolean JNICALL Java_ArmyAnt_File_Stream_Native_1OpenMemoryByAddr(JNIEnv *, jclass, jlong stream, jlong memaddr, jint len)
{
	if(stream < 0 || memaddr <= 0 || len <= 0)
		return JNI_FALSE;
	return jboolean(AA_Stream_OpenMemoryByAddr(AA_CFileStream(stream), mac_uint(memaddr), uint32(len)));
}

JNIEXPORT jboolean JNICALL Java_ArmyAnt_File_Stream_Native_1OpenNamePipe(JNIEnv * env, jclass, jlong stream, jstring pipename, jstring pipepath, jstring pipeserver)
{
	if(stream < 0)
		return JNI_FALSE;
	return jboolean(AA_Stream_OpenNamePipe(AA_CFileStream(stream), ArmyAnt::JNITools::JstringToCstring(env, pipename).c_str(), ArmyAnt::JNITools::JstringToCstring(env, pipepath).c_str(), ArmyAnt::JNITools::JstringToCstring(env, pipeserver).c_str()));
}

JNIEXPORT jboolean JNICALL Java_ArmyAnt_File_Stream_Native_1OpenCom(JNIEnv *, jclass, jlong stream, jshort comNum)
{
	if(stream < 0 || comNum < 0)
		return JNI_FALSE;
	return jboolean(AA_Stream_OpenCom(AA_CFileStream(stream), uint8(comNum)));
}

JNIEXPORT jboolean JNICALL Java_ArmyAnt_File_Stream_Native_1OpenNetWithName(JNIEnv * env, jclass, jlong stream, jstring netAddr, jshort protocol)
{
	if(stream < 0 || protocol < 0)
		return JNI_FALSE;
	return jboolean(AA_Stream_OpenNetWithName(AA_CFileStream(stream), ArmyAnt::JNITools::JstringToCstring(env, netAddr).c_str(), uint8(protocol)));
}

JNIEXPORT jboolean JNICALL Java_ArmyAnt_File_Stream_Native_1OpenNetWithAddr(JNIEnv *, jclass, jlong stream, jlong netIp, jint port, jshort protocol)
{
	if(stream < 0 || netIp < 0 || port < 0 || protocol < 0)
		return JNI_FALSE;
	return jboolean(AA_Stream_OpenNetWithAddr(AA_CFileStream(stream), uint32(netIp), uint16(port), uint8(protocol)));
}

JNIEXPORT jboolean JNICALL Java_ArmyAnt_File_Stream_Native_1Close(JNIEnv *, jclass, jlong stream)
{
	if(stream < 0)
		return JNI_FALSE;
	return jboolean(AA_Stream_Close(AA_CFileStream(stream)));
}

JNIEXPORT jboolean JNICALL Java_ArmyAnt_File_Stream_Native_1IsOpened(JNIEnv *, jclass, jlong stream)
{
	if(stream < 0)
		return JNI_FALSE;
	return jboolean(AA_Stream_IsOpened(AA_CFileStream(stream)));
}

JNIEXPORT jlong JNICALL Java_ArmyAnt_File_Stream_Native_1NowType(JNIEnv *, jclass, jlong stream)
{
	if(stream < 0)
		return jlong(-1);
	return jlong(AA_Stream_NowType(AA_CFileStream(stream)));
}

JNIEXPORT jlong JNICALL Java_ArmyAnt_File_Stream_Native_1GetLength(JNIEnv *, jclass, jlong stream)
{
	if(stream < 0)
		return jlong(-1);
	return jlong(AA_Stream_GetLength(AA_CFileStream(stream)));
}

JNIEXPORT jlong JNICALL Java_ArmyAnt_File_Stream_Native_1GetPos(JNIEnv *, jclass, jlong stream)
{
	if(stream < 0)
		return jlong(-1);
	return jlong(AA_Stream_GetPos(AA_CFileStream(stream)));
}

JNIEXPORT jboolean JNICALL Java_ArmyAnt_File_Stream_Native_1IsEndPos(JNIEnv *, jclass, jlong stream)
{
	if(stream < 0)
		return JNI_FALSE;
	return jboolean(AA_stream_IsEndPos(AA_CFileStream(stream)));
}

JNIEXPORT jboolean JNICALL Java_ArmyAnt_File_Stream_Native_1MovePos(JNIEnv *, jclass, jlong stream, jlong pos)
{
	if(stream < 0 || pos < 0)
		return JNI_FALSE;
	return jboolean(AA_Stream_MovePos(AA_CFileStream(stream), uint32(pos)));
}

JNIEXPORT jstring JNICALL Java_ArmyAnt_File_Stream_Native_1GetStreamName(JNIEnv * env, jclass, jlong stream)
{
	if(stream < 0)
		return ArmyAnt::JNITools::CstringToJstring(env, "");
	return ArmyAnt::JNITools::CstringToJstring(env, AA_Stream_GetStreamName(AA_CFileStream(stream)));
}

JNIEXPORT jlong JNICALL Java_ArmyAnt_File_Stream_Native_1ReadSome(JNIEnv * env, jclass, jlong stream, jbyteArray buffer, jlong pos, jlong len)
{
	if(stream < 0 || pos < 0 || len <= 0)
		return jlong(-1);
	if(len > env->GetArrayLength(buffer))
		return jlong(-1);
	auto tmparray = new uint8[uint32(len)];
	auto ret = jlong(AA_Stream_ReadSome(AA_CFileStream(stream), tmparray, uint32(len), uint32(pos)));
	auto tmpjarray = new jbyte[uint32(len)];
	for(jsize i = 0; i < len; ++i)
	{
		tmpjarray[i] = jbyte(tmparray[i]);
	}
	env->GetByteArrayRegion(buffer, 0, uint32(len), tmpjarray);
	AA_SAFE_DELALL(tmparray);
	AA_SAFE_DELALL(tmpjarray);
	return ret;
}

JNIEXPORT jlong JNICALL Java_ArmyAnt_File_Stream_Native_1ReadTo(JNIEnv *env, jclass, jlong stream, jbyteArray buffer, jshort endtag, jlong maxlen)
{
	if(stream < 0 || endtag < 0 || maxlen <= 0)
		return jlong(-1);
	if(maxlen > env->GetArrayLength(buffer))
		return jlong(-1);
	auto tmparray = new uint8[uint32(maxlen)];
	// TODO : 这里是否需要endtag字符的转码?
	auto ret = jlong(AA_Stream_ReadTo(AA_CFileStream(stream), tmparray, uint8(endtag), uint32(maxlen)));
	auto tmpjarray = new jbyte[uint32(maxlen)];
	for(jsize i = 0; i < maxlen; ++i)
	{
		tmpjarray[i] = jbyte(tmparray[i]);
	}
	env->GetByteArrayRegion(buffer, 0, uint32(maxlen), tmpjarray);
	AA_SAFE_DELALL(tmparray);
	AA_SAFE_DELALL(tmpjarray);
	return ret;
}

JNIEXPORT jlong JNICALL Java_ArmyAnt_File_Stream_Native_1Write(JNIEnv *env, jclass, jlong stream, jbyteArray buffer, jlong len)
{
	if(stream < 0 || len <= 0)
		return jlong(-1);
	if(len > env->GetArrayLength(buffer))
		return jlong(-1);
	auto bts = env->GetByteArrayElements(buffer, JNI_FALSE);
	auto ret = jlong(AA_Stream_Write(AA_CFileStream(stream), bts, uint32(len)));
	env->ReleaseByteArrayElements(buffer, bts, JNI_ABORT);
	return ret;
}

JNIEXPORT jboolean JNICALL Java_ArmyAnt_File_Stream_Native_1CopyFile(JNIEnv *env, jclass, jstring srcPath, jstring dstPath)
{
	return jboolean(AA_Stream_CopyFile(ArmyAnt::JNITools::JstringToCstring(env, srcPath).c_str(), ArmyAnt::JNITools::JstringToCstring(env, dstPath).c_str()));
}

JNIEXPORT jboolean JNICALL Java_ArmyAnt_File_Stream_Native_1MoveOrRenameFile(JNIEnv *env, jclass, jstring srcPath, jstring dstPath)
{
	return jboolean(AA_Stream_MoveOrRenameFile(ArmyAnt::JNITools::JstringToCstring(env, srcPath).c_str(), ArmyAnt::JNITools::JstringToCstring(env, dstPath).c_str()));
}

JNIEXPORT jboolean JNICALL Java_ArmyAnt_File_Stream_Native_1DeleteFile(JNIEnv *env, jclass, jstring path)
{
	return jboolean(AA_Stream_DeleteFile(ArmyAnt::JNITools::JstringToCstring(env, path).c_str()));
}

JNIEXPORT jboolean JNICALL Java_ArmyAnt_File_Stream_Native_1IsFileExist(JNIEnv *env, jclass, jstring path)
{
	return jboolean(AA_Stream_IsFileExist(ArmyAnt::JNITools::JstringToCstring(env, path).c_str()));
}

#ifdef __cplusplus
}
#endif