#ifndef AA_JNI_TOOLS_HPP_2016_2_23
#define AA_JNI_TOOLS_HPP_2016_2_23

#include "AADefine.h"
#include <jni.h>
#include <string>

namespace ArmyAnt {

namespace JNITools{

	inline static std::string JstringToCstring(JNIEnv* env,jstring jstr)
	{
		std::string rtn = "";
		jclass clsstring = env->FindClass("java/lang/String");
		Assert(clsstring != nullptr);
		jstring strencode = env->NewStringUTF("GB2312");
		static jmethodID mid = env->GetMethodID(clsstring, "getBytes", "(Ljava/lang/String;)[B");
		Assert(mid != nullptr);
		jbyteArray barr = (jbyteArray)(env->CallObjectMethod(jstr, mid, strencode));
		jsize alen = env->GetArrayLength(barr);
		char* tmp = new char[alen];
		jbyte* ba = env->GetByteArrayElements(barr, JNI_FALSE);
		if(alen > 0)
		{
			memcpy(tmp, ba, alen);
			tmp[alen] = 0;
		}
		rtn = tmp;
		env->ReleaseByteArrayElements(barr, ba, 0);
		AA_SAFE_DELALL(tmp);
		return rtn;
	};

	inline static jstring CstringToJstring(JNIEnv*env, std::string str)
	{
		return env->NewStringUTF(str.c_str());
	}

	inline static jmethodID GetInterfaceMethodID(JNIEnv *env, const char* interfaceName, const char* methodName, const char* methodSig)
	{
		auto cls = env->FindClass(interfaceName);
		Assert(cls != nullptr);
		return env->GetMethodID(cls, methodName, methodSig);
	}

} // namespace ArmyAnt::JNITools

} // namespace ArmyAnt

#endif
