#coding=utf-8
# library ArmyAnt

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

import platform
from ctypes import *

# Please use the latest Python 3.x version
# 请使用最新版本的python3

# TODO: 因Stream类的变更，此代码文件需要大批量重构

__lib=None
print(platform.architecture()[0])
if platform.architecture()[0]=="32bit":
	if platform.system() == "Windows":
		try:
			__lib = cdll.LoadLibrary("ArmyAntLibd.dll")
		except:
			__lib = cdll.LoadLibrary("ArmyAntLib.dll")
	else:
		try:
			__lib = cdll.LoadLibrary("libArmyAntd.so")
		except:
			__lib = cdll.LoadLibrary("libArmyAnt.so")
else:
	if platform.system() == "Windows":
		try:
			__lib = cdll.LoadLibrary("ArmyAntLibd_64.dll")
		except:
			__lib = cdll.LoadLibrary("ArmyAntLib_64.dll")
	else:
		try:
			__lib = cdll.LoadLibrary("libArmyAntd.so")
		except:
			__lib = cdll.LoadLibrary("libArmyAnt.so")

#classes

class Stream:
	'''
		本类是调用了C/C++语言库的 ArmyAnt::FileStream 的包装类
		可打开本地磁盘文件、本地串口、本地命名管道、本地任意编号的内存，以及网络
		网络功能暂未实现
		请勿调用非公有成员
	'''

	def SetMode(self, nocreate=True, noexist=False):
		'''
			打开前的设定选项,必须在Open之前调用才能对此次Open生效
			@param="nocreate"	bool,为True表示不允许打开(新建)不存在的文件,否则会打开失败
			@param="noexist"	bool,为True表示不允许覆盖已存在的文件,如果打开时文件已存在,则打开失败
			@returns	bool,设定是否成功
		'''
		return __lib.AA_Stream_SetMode(self.__handle__lib,nocreate,noexist)!=0

	def OpenFile(self, filename):
		'''
			打开本地磁盘文件
			@param="filename"	str,本地磁盘文件的相对或绝对路径
			@returns	bool,打开是否成功
		'''
		return __lib.AA_Stream_OpenFile(self.__handle__lib,c_char_p(str.encode(filename)))!=0

	def OpenMemoryByAddr(self, memaddr, len):
		'''
			打开本地内存
			@param="memaddr"	int,内存地址的整数
			@param="len"		int,内存可读写的最大长度(字节数)
			@returns	bool,打开是否成功
		'''
		return __lib.AA_Stream_OpenMemoryByAddr(self.__handle__lib, memaddr, len)!=0

	def OpenNamePipe(self, pipename, pipepath, pipeserver):
		'''
			打开命名管道
			@param="pipename"	str,管道名
			@param="pipepath"	str,管道路径
			@param="pipeserver"	str,管道所在机器
			@returns	bool,打开是否成功
		'''
		return __lib.AA_Stream_OpenNamePipe(self.__handle__lib, c_char_p(str.encode(pipename)), c_char_p(str.encode(pipepath)), c_char_p(str.encode(pipeserver)))!=0

	def OpenCom(self, com):
		'''
			打开本地串口
			@param="com"	int,串口号
			@returns	bool,打开是否成功
		'''
		return __lib.AA_Stream_OpenCom(self.__handle__lib, com)!=0

	def OpenNetWithName(self, netAddr, protocol):
		'''
			根据域名地址端口字符串来访问网络,打开网络流
			@param="netAddr"	str,域名或地址端口字符串
			@param="protocol"	int,协议序号
			@returns	bool,打开是否成功
		'''
		return __lib.AA_Stream_OpenNetWithName(self.__handle__lib, c_char_p(str.encode(netAddr)), protocol)!=0

	def OpenNetWithAddr(self, netIp, port, protocol):
		'''
			根据IPv4地址和端口,打开网络流
			@param="netIp"		int,IPv4地址的十进制整数值
			@param="port"		int,端口号
			@param="protocol"	int,协议序号
			@returns	bool,打开是否成功
		'''
		return __lib.AA_Stream_OpenNetWithAddr(self.__handle__lib, netIp, port, protocol)!=0

	def OpenNet(self, net, protocolOrPort, protocol=None):
		'''
			OpenNetWithName方法和OpenNetWithAddr方法的合并,参数列表相同,根据net参数的类型来决定
		'''
		if(protocolOrPort==None):
			return self.OpenNetWithName(net,protocolOrPort)
		return self.OpenNetWithAddr(net,protocolOrPort,protocol)

	def Open(self, arg1, arg2=None, arg3=None):
		'''
			所有Open方法的合并,参数列表相同,根据参数个数和类型决定
		'''
		if arg3==None:
			if arg2==None:
				if type(arg1) == int:
					return self.OpenCom(arg1)
				return self.OpenFile(arg1)
			if type(arg1) == int:
				return self.OpenMemoryByAddr(arg1,arg2)
			return self.OpenNetWithName(arg1, arg2)
		if type(arg3) == int:
			return self.OpenNetWithAddr(arg1, arg2, arg3)
		return self.OpenNamePipe(arg1, arg2, arg3)

	def Close(self):
		'''
			关闭打开的流
			@returns	bool,关闭是否成功
		'''
		return __lib.AA_Stream_Close(self.__handle__lib)!=0

	def IsOpened(self):
		'''
			检查是否正在使用打开的流
		'''
		return __lib.AA_Stream_IsOpened(self.__handle__lib)!=0

	def NowType(self):
		'''
			获取打开的流的类型
			@returns=None		NoneType,尚未打开流
			@returns="File"		str,本地磁盘文件
			@returns="Memory"	str,内存
			@returns="NamePipe"	str,命名管道
			@returns="ComData"	str,串口
			@returns="Network"	str,网络流
		'''
		return Stream.__retv[__lib.AA_Stream_NowType(self.__handle__lib)]

	def GetLength(self):
		'''
			获取流的读写长度,int
		'''
		return __lib.AA_Stream_GetLength(self.__handle__lib)

	def GetPos(self):
		'''
			获取当前读写指针在流中的位置,int
		'''
		return __lib.AA_Stream_GetPos(self.__handle__lib)
	
	def IsEndPos(self):
		'''
			判断当前读写指针是否已经在流的结尾.未打开流或者流为空时,此函数同样返回True
		'''
		return __lib.AA_Stream_IsEndPos(self.__handle__lib)!=0

	def MovePos(self, pos):
		'''
			将读写指针移动到指定位置
			@param="pos"	int,要移动到的位置
			@returns	bool,是否移动成功
		'''
		return __lib.AA_Stream_MovePos(self.__handle__lib, pos)!=0

	def GetStreamName(self):
		'''
			获取流源的名称,如文件名,网络域名等等,str
		'''
		return bytes.decode(__lib.AA_Stream_GetStreamName(self.__handle__lib).value)

	def ReadSome(self, len=0, pos=0xffffffff):
		'''
			从流中读取指定字节数,或者到流的结尾
			@param="len"	int,要读取的长度,读取行为会读取直到达到此长度或者达到流尾,不传此参数则读取直到达到流尾
			@param="pos"	int,要开始读取的位置.不传则从当前指针处开始读取,读取过后停留在读到的地方.传此参数则读取指针位置不会变化
			@returns	int,实际读取的字节数.为非正数则表明文件已到结尾,或者发生了错误
		'''
		return __lib.AA_Stream_GetReadedSome(self.__handle__lib, len, pos)

	def ReadTo(self, endtag, len=0):
		'''
			从流中读取指定字节数,或者到流的结尾
			@param="endtag"	chr或者bytes,要读取到的终止符,当读到此字符(或字节)时,停止读取
			@param="len"	int,要读取的最大长度,读取行为会读取直到遇到终止符,或者达到此长度或者达到流尾,不传此参数则无长度限制
			@returns	int,实际读取的字节数.为非正数则表明文件已到结尾,或者发生了错误
		'''
		if type(endtag)==bytes:
			return __lib.AA_Stream_GetReadedTo(self.__handle__lib, c_char(int(endtag)), len)	
		return __lib.AA_Stream_GetReadedTo(self.__handle__lib, c_char(chr(str.encode(endtag)[0])), len)

	def Write(self, content):
		'''
			将指定的bytearray或者str写入流中,返回实际写入的长度
		'''
		if type(content)==str:
			return __lib.AA_Stream_WriteTo(self.__handle__lib, str.encode(content), content.count())	
		return __lib.AA_Stream_WriteTo(self.__handle__lib, content, content.count())

	@classmethod
	def CopyFile(cls, srcPath, dstPath):
		'''
			复制磁盘文件
		'''
		return __lib.AA_Stream_CopyFile(str.encode(srcPath), str.encode(dstPath))!=0

	@classmethod
	def MoveOrRenameFile(cls, srcPath, dstPath):
		'''
			移动或重命名磁盘文件
		'''
		return __lib.AA_Stream_MoveOrRenameFile(str.encode(srcPath), str.encode(dstPath))!=0

	@classmethod
	def DeleteFile(cls, path):
		'''
			删除磁盘文件
		'''
		return __lib.AA_Stream_DeleteFile(str.encode(path))!=0

	@classmethod
	def IsFileExist(cls, path):
		'''
			判断磁盘上是否存在指定路径的文件
		'''
		return __lib.AA_Stream_IsFileExist(str.encode(path))!=0

	#private:
	
	__retv = (None, "File", "Memory", "NamePipe", "ComData", "Network")

	def __init__(self):
		'''
			构造函数,构造Stream类实例
			在内核中初始化一个相同的句柄对象
		'''
		self.__handle__lib=__lib.AA_Stream_Create()
		return self.__handle__lib

	def __del__(self):
		'''
			析构函数,销毁Stream类实例
			在内核中销毁对应的句柄对象
		'''
		__lib.AA_Stream_Release(self.__handle__lib)
		return self.__handle__lib

	def __str__(self):
		'''
			字符串输出时,转化为流的名称
		'''
		return self.GetStreamName()

	def __repr__(self):
		'''
			获取对象信息字符串
		'''
		return "<class Stream : %s>" % self.GetStreamName()

	def __sizeof__(self):
		'''
			求大小时,为流的长度
		'''
		return self.GetLength()

	def __eq__(self, value):
		'''
			空流等于None和False
		'''
		return (self.IsOpened()==None)==(value==None or value==False)

	def __ne__(self, value):
		return not self==value


class NeuronAlgorithm:
	'''
		本类是调用了C/C++语言库的 ArmyAnt::NeuronAlgorithm<double> 的包装类
		神经元的基本算法,可以任意设置激活函数和阀值,计算值均为浮点数,可以设置加权激活,并求出响应值
		请勿调用非公有成员
	'''

	handleDict = {}

	@classmethod
	def GetLinerFunc(cls, slope, bias):
		'''
			获取线性方程, return = slope * x + bias
			@param="slope"	float,斜率
			@param="bias"	float,偏置常数
			@returns	c_int, 序号,内核用此序号提取真计算结果
		'''
		return (lambda x:c_int(cls.RecordDoubleToInt(__lib.AA_Math_Liner(x, slope, bias))))

	@classmethod
	def GetRampFunc(cls, width, height):
		'''
			获取斜面方程
			@param="width"	float,斜面宽度
			@param="height"	float,斜面高度
			@returns	c_int, 序号,内核用此序号提取真计算结果
		'''
		return (lambda x:c_int(cls.RecordDoubleToInt(__lib.AA_Math_Ramp(x, width, height))))

	@classmethod
	def GetThresholdFunc(cls, amplitude, threshold):
		'''
			获取阶跃方程
			@param="amplitude"	float,阶跃幅度
			@param="threshold"	float,阶跃阀值
			@returns	c_int, 序号,内核用此序号提取真计算结果
		'''
		return (lambda x:c_int(cls.RecordDoubleToInt(__lib.AA_Math_Threshold(x, amplitude, threshold))))

	@classmethod
	def GetSigmoidFunc(cls, coef):
		'''
			获取S形方程
			@param="coef"	float,S形系数
			@returns	c_int, 序号,内核用此序号提取真计算结果
		'''
		return (lambda x:c_int(cls.RecordDoubleToInt(__lib.AA_Math_Sigmoid(x, coef))))

	@classmethod
	def GetDoubleSigmoidFunc(cls, coef):
		'''
			获取双S形方程
			@param="coef"	float,S形系数
			@returns	c_int, 序号,内核用此序号提取真计算结果
		'''
		return (lambda x:c_int(cls.RecordDoubleToInt(__lib.AA_Math_DoubleSigmoid(x, coef))))
	
	@classmethod
	def GetObjectByHd(cls, hd):
		'''
			根据句柄数值获取python实例对象,此函数由内核调用
		'''
		return cls.handleDict[hd]

	@classmethod
	def RecordDoubleToInt(cls, doubleObj):
		'''
			将计算得到的double值存储起来,获取int序号, 此函数由内核调用
		'''
		return __lib.AA_NeuronAlgorithm_RecordDoubleToInt(c_double(doubleObj))

	@classmethod
	def Clone(cls, value):
		'''
			获取一个新的NeuronAlgorithm实例对象,此对象拷贝自value实例
		'''
		return __lib.AA_NeuronAlgorithm_Clone(value.__handle__lib)

	def SetActivationFunc(self, func):
		'''
			设定神经元的激活函数
		'''
		self.__func = func
		return __lib.AA_NeuronAlgorithm_PythonChangeActFunc(self.__handle__lib)!=0

	def GetThreshold(self):
		'''
			获取神经元的应激阀值
		'''
		return __lib.AA_NeuronAlgorithm_GetThreshold(self.__handle__lib)

	def SetThreshold(self):
		'''
			设定神经元的应激阀值
		'''
		return __lib.AA_NeuronAlgorithm_SetThreshold(self.__handle__lib)!=0

	def JoinActive(self, input, weight):
		'''
			传入刺激信号
			@param="input"	信号冲激强度
			@param="weight"	信号权值
			@returns	bool,是否成功
		'''
		return __lib.AA_NeuronAlgorithm_JoinActive(self.__handle__lib, input, weight)!=0

	def LeaveActive(self, input, weight):
		'''
			撤销刺激信号
			@param="input"	信号冲激强度
			@param="weight"	信号权值
			@returns	bool,是否成功
		'''
		return __lib.AA_NeuronAlgorithm_LeaveActive(self.__handle__lib, input, weight)!=0

	def ClearActive(self):
		'''
			清空所有应激数据
		'''
		return __lib.AA_NeuronAlgorithm_ClearActive(self.__handle__lib)!=0

	def GetOutput(self):
		'''
			获取当前应激强度计算值
		'''
		return __lib.AA_NeuronAlgorithm_GetOutput(self.__handle__lib)

	def GetAllActive(self):
		'''
			获取当前传入信号的加权总值
		'''
		return __lib.AA_NeuronAlgorithm_GetAllActive(self.__handle__lib)

	def __init__(self, func, threshold=0):
		'''
			构造函数, 构造NeuronAlgorithm实例对象,并在内核中创建一个相同的内核句柄对象
			@param="func"		function,激活函数
			@param="threshold"	int,应激阀值
		'''
		self.__func = func
		self.__handle__lib = __lib.AA_NeuronAlgorithm_FreeCreate(threshold)
		assert self.SetActivationFunc(func)
		NeuronAlgorithm.handleDict[self.__handle__lib] = self
		return self

	def __del__(self):
		'''
			析构函数,销毁NeuronAlgorithm类实例
			在内核中销毁对应的句柄对象
		'''
		__lib.AA_NeuronAlgorithm_Release(self.__handle__lib)
		return self.__handle__lib
