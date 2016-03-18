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

#ifndef AA_FRAGMENT_H_2015_12_31
#define AA_FRAGMENT_H_2015_12_31

/*
 * The base tool functions and datas in the library
 * 本库的一些基础工具和数据.如果是数据, 实现在base.hpp中
 */

#if defined DEBUG
#include <assert.h>
#elif defined _cplusplus
#include <stdexcept>
#else

#endif

#include <iostream>

#ifdef _cplusplus
#undef max
#undef min
#undef AA_SAFE_DEL
#undef AA_SAFE_DELALL
#endif


namespace ArmyAnt {

namespace Fragment {

extern const double s_aa_natrualBase;

template <class NUM1, class NUM2> 
inline NUM1 min(NUM1 num1, NUM2 num2)
{
	return num1 > num2 ? NUM1(num2) : num1;
}

template <class NUM1, class NUM2> 
inline NUM1 max(NUM1 num1, NUM2 num2)
{
	return num1 < num2 ? NUM1(num2) : num1;
}

inline void Assert(bool x)
{
#if defined DEBUG
	assert(x);
#elif defined _cplusplus
	if(!(x))
		throw std::invalid_argument("assert failed !");
#endif
}

template<class PTR>
inline PTR&AA_SAFE_DEL(PTR&ptr)
{
	if(ptr != nullptr)
	{
		delete ptr;
		ptr = nullptr;
	}
	return ptr;
}

template <class PTR>
inline void AA_SAFE_DELALL(PTR&ptr)
{
	if(ptr != nullptr)
	{
		delete[] ptr;
		ptr = nullptr;
	}
}

inline void Log_Debug(const char* msg)
{
	msg;
#ifdef DEBUG
	std::cout << msg << std::endl;
#endif
}

inline void Log_Error(const char* msg)
{
#ifdef OS_WINDOWS
	std::cerr << msg << std::endl;
#elif defined OS_UNIX
	printf("\033[0;40;32m%s\033[0m \n", msg);
#else

#endif
}

} // namespace Fragment

} // namespace ArmyAnt

#endif
