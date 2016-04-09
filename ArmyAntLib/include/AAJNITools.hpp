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
#include <cstring>

namespace ArmyAnt {

namespace JNITools{

	// 将Java的String转化为C++的string输出
	inline static std::string JstringToCstring(JNIEnv* env,jstring jstr)
	{
		// 获取Java字符串类
		std::string rtn = "";
		jclass clsstring = env->FindClass("java/lang/String");
		AAAssert(clsstring != nullptr, "");
		// 获取Java的字符串转字节流函数
		jstring strencode = env->NewStringUTF("GB2312");
		static jmethodID mid = env->GetMethodID(clsstring, "getBytes", "(Ljava/lang/String;)[B");
		AAAssert(mid != nullptr, "");
		// 执行Java的转换函数
		jbyteArray barr = (jbyteArray)(env->CallObjectMethod(jstr, mid, strencode));
		jsize alen = env->GetArrayLength(barr);
		char* tmp = new char[alen];
		// 得到转换后的字节流
		jbyte* ba = env->GetByteArrayElements(barr, JNI_FALSE);
		// 拷贝到C字符串
		if(alen > 0)
		{
			memcpy(tmp, ba, alen);
			tmp[alen] = 0;
		}
		rtn = tmp;
		// 释放Java字节流
		env->ReleaseByteArrayElements(barr, ba, 0);
		Fragment::AA_SAFE_DELALL(tmp);
		return rtn;
	};

	// 将C++的string转化为Java的String输出
	inline static jstring CstringToJstring(JNIEnv*env, std::string str)
	{
		return env->NewStringUTF(str.c_str());
	}

	// 获取指定接口的指定Java函数ID
	inline static jmethodID GetInterfaceMethodID(JNIEnv *env, const char* interfaceName, const char* methodName, const char* methodSig)
	{
		auto cls = env->FindClass(interfaceName);
		AAAssert(cls != nullptr, nullptr);
		return env->GetMethodID(cls, methodName, methodSig);
	}

} // namespace ArmyAnt::JNITools

} // namespace ArmyAnt

#endif
