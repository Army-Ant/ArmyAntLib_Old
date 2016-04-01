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
* This file is the internal source file of this project, is not contained by the closed source release part of this software
* 本文件为内部源码文件, 不会包含在闭源发布的本软件中
*/

#include "../base/base.hpp"
#include "..\include\ArmyAntLib.h"

namespace ArmyAnt {

const double Fragment::s_aa_natrualBase = 2.7182818284590452353;

namespace Infos {

Version::VerChar::VerChar(uint16 bigVer, uint16 smallVer, uint16 patchVer, uint16 testVer)
	:bigVer(bigVer), smallVer(smallVer), patchVer(patchVer), testVer(testVer)
{
}

Version::Version(uint32 ver)
	: ver(ver)
{
}

Version::Version(uint16 bigVer, uint16 smallVer, uint16 patchVer, uint16 testVer)
	: sver(bigVer, smallVer, patchVer, testVer)
{
}

const Version Version::GetVersion(const char* obj)
{
	std::string objstr = obj;
	if(objstr == "boost")
		return Version(1, 59, 0, 0);
	else if(objstr == "python")
		return Version(3, 5, 1, 0);
	else if(objstr == "tbox")
		return Version(1, 5, 1, 0);
	else if(objstr == "")	// Self library's version
		return Version(0, 0, 0, 1);
	else return Version(0, 0, 0, 0);
}

} // namespace Infos

} // namespace ArmyAnt