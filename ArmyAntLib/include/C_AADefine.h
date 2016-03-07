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

#ifndef C_A_A_DEFINE_H_2015_11_11
#define C_A_A_DEFINE_H_2015_11_11

//#include <yvals.h>

typedef char int8;
typedef unsigned char uint8;
typedef short int16;
typedef unsigned short uint16;
typedef int int32;
typedef unsigned int uint32;

#ifdef _x86
typedef int mac_int;
typedef unsigned int mac_uint;
#else
typedef long long mac_int;
typedef unsigned long long mac_uint;
#endif

#ifndef BOOL
typedef int BOOL;
#ifndef TRUE
static const int TRUE = 1;
static const int FALSE = 0;
#endif
#endif

#ifndef _cplusplus

typedef _Bool bool;
static const int true = TRUE;
static const int false = FALSE;

static const double s_aa_natrualBase = 2.7182818284590452353;

#ifndef min
#define min(x,y) ((x>y)?y:x)
#endif
#ifndef max
#define max(x,y) ((x<y)?y:x)
#endif

#define AA_SAFE_DEL(x) if(x != NULL){free(x); x = NULL;}else;
#define AA_SAFE_FREE AA_SAFE_DEL
#define AA_SAFE_DELALL AA_SAFE_DEL

#if defined DEBUG
#include <assert.h>
#define Assert(x) assert(x)
#else
#define Assert(x) x
#endif

#endif

#define ARMYANT_CLIB_API ARMYANTLIB_API

#endif // C_A_A_DEFINE_H_2015_11_11