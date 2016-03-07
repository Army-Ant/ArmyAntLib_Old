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
 */

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
