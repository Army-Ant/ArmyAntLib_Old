#include "../include/ArmyAnt_Java_AAFile.h"
#include "../include/C_AAFile.h"
#include "../include/AAJNITools.hpp"

#include <string>

#ifdef __cplusplus
extern "C" {
#endif

JNIEXPORT jlong JNICALL Java_ArmyAnt_Java_1AAFile_Native_1Create(JNIEnv *, jclass)
{
	return jlong(AA_Stream_Create());
}

JNIEXPORT void JNICALL Java_ArmyAnt_Java_1AAFile_Native_1Release(JNIEnv *, jclass, jlong stream)
{
	return AA_Stream_Release(AA_CFileStream(stream));
}

JNIEXPORT jboolean JNICALL Java_ArmyAnt_Java_1AAFile_Native_1SetMode(JNIEnv *, jclass, jlong stream, jboolean nocreate, jboolean noexist)
{
	return jboolean(AA_Stream_SetMode(AA_CFileStream(stream), BOOL(nocreate), BOOL(noexist)));
}

JNIEXPORT jboolean JNICALL Java_ArmyAnt_Java_1AAFile_Native_1OpenFile(JNIEnv * env, jclass, jlong stream, jstring filename)
{
	return jboolean(AA_Stream_OpenFile(AA_CFileStream(stream), ArmyAnt::JNITools::JstringToCstring<std::string>(env, filename).c_str()));
}

#ifdef __cplusplus
}
#endif