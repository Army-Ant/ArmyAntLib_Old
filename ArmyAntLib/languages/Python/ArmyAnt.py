#coding=utf-8

import platform
from ctypes import *

# library ArmyAnt

# Please use the latest Python 3.x version
# 请使用最新版本的python3

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
			__lib = cdll.LoadLibrary("libArmyAntd_64.so")
		except:
			__lib = cdll.LoadLibrary("libArmyAnt_64.so")

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
		return __lib.AA_Stream_OpenNamePipe(self.__handle__lib, c_char_p(str.encode(pipename)), c_char_p(str.encode(pipepath)), c_char_p(str.encode(pipeserver)))!=0

	def OpenCom(self, com):
		return __lib.AA_Stream_OpenCom(self.__handle__lib, com)!=0

	def OpenNetWithName(self, netAddr, protocol):
		return __lib.AA_Stream_OpenNetWithName(self.__handle__lib, c_char_p(str.encode(netAddr)), protocol)!=0

	def OpenNetWithAddr(self, netIp, port, protocol):
		return __lib.AA_Stream_OpenNetWithAddr(self.__handle__lib, netIp, port, protocol)!=0

	def OpenNet(self, net, protocolOrPort, protocol=None):
		if(arg2==None):
			return self.OpenNetWithName(net,protocolOrPort)
		return self.OpenNetWithAddr(net,protocolOrPort,protocol)

	def Open(self, arg1, arg2=None, arg3=None):
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
		return __lib.AA_Stream_Close(self.__handle__lib)!=0

	def IsOpened(self):
		return __lib.AA_Stream_IsOpened(self.__handle__lib)!=0

	def NowType(self):
		return Stream.__retv[__lib.AA_Stream_NowType(self.__handle__lib)]

	def GetLength(self):
		return __lib.AA_Stream_GetLength(self.__handle__lib)

	def GetPos(self):
		return __lib.AA_Stream_GetPos(self.__handle__lib)
	
	def IsEndPos(self):
		return __lib.AA_Stream_IsEndPos(self.__handle__lib)!=0

	def MovePos(self, pos):
		return __lib.AA_Stream_MovePos(self.__handle__lib, pos)!=0

	def GetStreamName(self):
		return bytes.decode(__lib.AA_Stream_GetStreamName(self.__handle__lib).value)

	def ReadSome(self, len=0, pos=0xffffffff):
		return bytes.decode(__lib.AA_Stream_GetReadedSome(self.__handle__lib, len, pos))

	def ReadTo(self, endtag, len=0):
		return bytes.decode(__lib.AA_Stream_GetReadedTo(self.__handle__lib, c_char(chr(str.encode(endtag)[0])), len))

	def Write(self, content):
		return __lib.AA_Stream_WriteTo(self.__handle__lib, str.encode(content), content.count())

	@classmethod
	def CopyFile(cls, srcPath, dstPath):
		return __lib.AA_Stream_CopyFile(str.encode(srcPath), str.encode(dstPath))!=0

	@classmethod
	def MoveOrRenameFile(cls, srcPath, dstPath):
		return __lib.AA_Stream_MoveOrRenameFile(str.encode(srcPath), str.encode(dstPath))!=0

	@classmethod
	def DeleteFile(cls, path):
		return __lib.AA_Stream_DeleteFile(str.encode(path))!=0

	@classmethod
	def IsFileExist(cls, path):
		return __lib.AA_Stream_IsFileExist(str.encode(path))!=0

	#private:
	
	__retv = ("None", "File", "Memory", "NamePipe", "ComData", "Network")

	def __init__(self):
		self.__handle__lib=__lib.AA_Stream_Create()
		return self.__handle__lib

	def __del__(self):
		__lib.AA_Stream_Release(self.__handle__lib)
		return self.__handle__lib

	def __str__(self):
		return self.GetStreamName()

	def __repr__(self):
		return "<class Stream : %s>" % self.GetStreamName()

	def __sizeof__(self):
		return self.GetLength()

	def __eq__(self, value):
		return (self.__handle__lib==None)==(value==None or value==False)

	def __ne__(self, value):
		return not self==value


class NeuronAlgorithm:

	handleDict = {}

	@classmethod
	def GetLinerFunc(cls, slope, bias):
		return (lambda x:c_int(cls.RecordDoubleToInt(__lib.AA_Math_Liner(x, slope, bias))))

	@classmethod
	def GetRampFunc(cls, width, height):
		return (lambda x:c_int(cls.RecordDoubleToInt(__lib.AA_Math_Ramp(x, width, height))))

	@classmethod
	def GetThresholdFunc(cls, amplitude, threshold):
		return (lambda x:c_int(cls.RecordDoubleToInt(__lib.AA_Math_Threshold(x, amplitude, threshold))))

	@classmethod
	def GetSigmoidFunc(cls, coef):
		return (lambda x:c_int(cls.RecordDoubleToInt(__lib.AA_Math_Sigmoid(x, coef))))

	@classmethod
	def GetDoubleSigmoidFunc(cls, coef):
		return (lambda x:c_int(cls.RecordDoubleToInt(__lib.AA_Math_DoubleSigmoid(x, coef))))
	
	@classmethod
	def GetObjectByHd(cls, hd):
		return cls.handleDict[hd]

	@classmethod
	def RecordDoubleToInt(cls, doubleObj):
		return __lib.AA_NeuronAlgorithm_RecordDoubleToInt(c_double(doubleObj))

	@classmethod
	def Clone(cls, value):
		return __lib.AA_NeuronAlgorithm_Clone(value.__handle__lib)

	def SetActivationFunc(self, func):
		self.__func = func
		return __lib.AA_NeuronAlgorithm_PythonChangeActFunc(self.__handle__lib)!=0

	def GetThreshold(self):
		return __lib.AA_NeuronAlgorithm_GetThreshold(self.__handle__lib)

	def SetThreshold(self):
		return __lib.AA_NeuronAlgorithm_SetThreshold(self.__handle__lib)!=0

	def JoinActive(self, input, weight):
		return __lib.AA_NeuronAlgorithm_JoinActive(self.__handle__lib, input, weight)!=0

	def LeaveActive(self, input, weight):
		return __lib.AA_NeuronAlgorithm_LeaveActive(self.__handle__lib, input, weight)!=0

	def ClearActive(self):
		return __lib.AA_NeuronAlgorithm_ClearActive(self.__handle__lib)!=0

	def GetOutput(self):
		return __lib.AA_NeuronAlgorithm_GetOutput(self.__handle__lib)

	def GetAllActive(self):
		return __lib.AA_NeuronAlgorithm_GetAllActive(self.__handle__lib)

	def __init__(self, func, threshold):
		self.__func = func
		self.__handle__lib = __lib.AA_NeuronAlgorithm_FreeCreate(threshold)
		assert self.SetActivationFunc(func)
		NeuronAlgorithm.handleDict[self.__handle__lib] = self
		return self

	def __del__(self):
		__lib.AA_NeuronAlgorithm_Release(self.__handle__lib)
		return self.__handle__lib
