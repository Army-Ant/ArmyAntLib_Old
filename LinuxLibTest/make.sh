#!/usr/bin/env bash

LibTar=""

if (($#<=0)); then
	echo "Please choose your target type:"
	echo "	1. i386 ( x86_32bits )"
	echo "	2. x64  ( x86_64bits )"
	echo "	3. arm  ( arm_32bits )"
	echo "	4. arm64( arm_64bits )"
	read LibTar
	LibTar="$LibTar rr"
	if [[ ${LibTar} == "1 rr" ]];then
		LibTar="i386"
	elif [[ ${LibTar} == "2 rr" ]];then
		LibTar="x64"
	elif [[ ${LibTar} == "3 rr" ]];then
		LibTar="arm"
	elif [[ ${LibTar} == "4 rr" ]];then
		LibTar="arm64"
	else
		echo "Error target type input: ${LibTar} !"
		echo "Build failed !"
		exit -1
	fi
else
	LibTar=$1
	if [ "${LibTar}" != "i386" ] && [ "${LibTar}" != "x64" ] && [ "${LibTar}" != "arm" ] && [ "${LibTar}" != "arm64" ] ;then
		echo "Error target type input: ${LibTar} !"
		echo "Build failed !"
		exit -1
	fi
fi


# Building source
#source ./build_start.sh $debugType ./
cmake ./ -DARMYANTLIB_TAR=$LibTar -DCMAKE_BUILD_TYPE=Debug
make
rm -rf CMakeCache.txt
rm -rf *.*~
#source ./build_end.sh $debugType ./
	
