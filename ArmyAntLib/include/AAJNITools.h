﻿/*  
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

#ifndef AA_JNI_TOOLS_H_2016_2_23
#define AA_JNI_TOOLS_H_2016_2_23

#include "AADefine.h"
#include "AA_start.h"
#include <jni.h>
#include <string>
#include <cstring>

namespace ArmyAnt {

namespace JNITools{

	/*	Convert the Java string to C++ string
	 *	将Java的String转化为C++的string输出
	 */
ARMYANTLIB_API std::string JstringToCstring(JNIEnv* env, jstring jstr);


	/*	Convert the C++ string to Java string
	 *	将C++的string转化为Java的String输出
	 */
ARMYANTLIB_API jstring CstringToJstring(JNIEnv*env, std::string str);

	/*	Get the Java method ID from a named method in named Java class or interface
	 *	获取指定接口的指定Java函数ID
	 */
ARMYANTLIB_API jmethodID GetInterfaceMethodID(JNIEnv *env, const char* interfaceName, const char* methodName, const char* methodSig);

};

} // namespace ArmyAnt

#endif
