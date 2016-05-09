#!/usr/bin/env bash

# Copyright (c) 2015 ArmyAnt
# 版权所有 (c) 2015 ArmyAnt
#
# Licensed under the BSD License, Version 2.0 (the License); 
# 本软件使用BSD协议保护, 协议版本:2.0
# you may not use this file except in compliance with the License. 
# 使用本开源代码文件的内容, 视为同意协议
# You can read the license content in the file "ARMYANT.COPYRIGHT.BSD_LICENSE.MD" at the root of this project
# 您可以在本项目的根目录找到名为"ARMYANT.COPYRIGHT.BSD_LICENSE.MD"的文件, 来阅读协议内容
# You may also obtain a copy of the License at 
# 您也可以在此处获得协议的副本:
# 
#     http://opensource.org/licenses/BSD-3-Clause
# 
# Unless required by applicable law or agreed to in writing, software distributed under the License is distributed on an AS IS BASIS, 
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied. 
# 除非法律要求或者版权所有者书面同意,本软件在本协议基础上的发布没有任何形式的条件和担保,无论明示的或默许的.
# See the License for the specific language governing permissions and limitations under the License. 
# 请在特定限制或语言管理权限下阅读协议
# This file is the internal source file of this project, is not contained by the closed source release part of this software
# 本文件为内部源码文件, 不会包含在闭源发布的本软件中

# Created by Jason 4/18/2016
# This is a shell script file used to build the debug bin for x86 machine in linux platform


debugType=""
targetPlatform=""

if (($#<=0)); then
    echo "Do you want to built it in release mode ? Input nothing to agree or anything not empty to disagree : "
    read debugType
    debugType="$debugType rr"
    if [[ ${debugType}==" rr" ]];then
        debugType=Release
    else
        debugType=Debug
    fi
else
    debugType=$1
fi
if (($#<=1)); then
    echo "Please set your target platform before build it;"
    echo "The platform you can choose contains x86, x64, arm"
    echo "Input the name of the platform to choose : "
    read targetPlatform
    if [ "${targetPlatform}" != "x86" ] && [ "${targetPlatform}" != "x64" ] && [ "${targetPlatform}" != "arm" ] ;then
	echo "Error target platform name : ${targetPlatform} !"
        echo "Build failed !"
        exit -1
    fi
else
    targetPlatform=$2
fi

if [[ $debugType=="Debug" ]];then
    TarName=ArmyAntLibd$targetPlatform
else
    TarName=ArmyAntLib$targetPlatform
fi
source ./base/build_start.sh $debugType ./ $TarName $targetPlatform
cmake ./ -DCMAKE_BUILD_TYPE=$debugType -DTAR_MAC=$targetPlatform
make
#source ./base/build_end.sh $debugType ./ $TarName $targetPlatform

