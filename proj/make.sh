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
# This is a shell script file used to build in linux platform


debugType=""
targetPlatform=""
targetBits=""
TarName=ArmyAntLib

# Check the debug type
if (($#<=0)); then
    echo "Do you want to built it in release mode ? Input nothing to agree or anything not empty to disagree : "
    read debugType
    debugType="$debugType rr"
    if [[ ${debugType} == " rr" ]];then
        debugType=Release
    else
        debugType=Debug
    fi
else
    debugType=$1
fi
if [ "${debugType}" != "Debug" ] && [ "${debugType}" != "Release" ] ;then
    echo "Error debug type name : ${debugType} !"
    echo "Build failed !"
    exit -1
fi

# Check the target machine
if (($#<=1)); then
    echo "Do you want to built it for x86 platform ? Input nothing to agree or anything not empty to disagree : "
    read targetPlatform
    targetPlatform="$targetPlatform rr"
    if [[ ${targetPlatform} == " rr" ]];then
        targetPlatform=x86
    else
        targetPlatform=arm
    fi
else
    targetPlatform=$2
fi
if [ "${targetPlatform}" != "x86" ] && [ "${targetPlatform}" != "arm" ] ;then
    echo "Error target machine name : ${targetPlatform} !"
    echo "Build failed !"
    exit -1
fi

# Check the target bits
if (($#<=2)); then
    echo "Do you want to built it for 64 Bits platform ? Input nothing to agree or anything not empty to disagree : "
    read targetBits
    targetBits="$targetBits rr"
    if [[ ${targetBits} == " rr" ]];then
        targetBits=64
    else
        targetBits=32
    fi
else
	targetBits=$3
fi
if [ "${targetBits}" != "64" ] && [ "${targetBits}" != "32" ] ;then
    echo "Error target machine name : ${targetBits} !"
    echo "Build failed !"
    exit -1
fi

# Target nameb
[[ $debugType == "Debug" ]] && TarName=${TarName}d

[[ $targetPlatform == "arm" ]] && [[ $targetBits == "64" ]] && TarName=${TarName}_arm64
[[ $targetPlatform == "arm" ]] && [[ $targetBits == "32" ]] && TarName=${TarName}_arm
[[ $targetPlatform == "x86" ]] && [[ $targetBits == "64" ]] && TarName=${TarName}_64

echo $debugType
echo $targetPlatform
echo $targetBits
echo $TarName

# Building source
source ../src/build_start.sh $debugType ../ $TarName $targetPlatform $targetBits
cmake ./ -DCMAKE_BUILD_TYPE=$debugType -DTAR_MAC=$targetPlatform -DTAR_BITS=$targetBits -DTAR_NAME=$TarName
make
mv *.so ../bin
#mv *.o ../lib
rm -rf CMakeCache.txt
rm -rf *.*~
source ../src/build_end.sh $debugType ../ $TarName $targetPlatform $targetBits

