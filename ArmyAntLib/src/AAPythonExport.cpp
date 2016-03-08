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
 * This file is the internal source file of this project, is not contained by the closed source release part of this software
 * 本文件为内部源码文件, 不会包含在闭源发布的本软件中
 */

#include <string>
#include "../include/AAFile.h"
#include "../include/C_AAFile.h"

#include "../externals/python3.5.1/include/Python.h"
#include <map>
#include "../include/AANeuron.hpp"
#include "../include/C_AANeuron.h"

//#pragma comment(lib, "python35.lib")

extern "C" {

	ARMYANT_CLIB_API const char*AA_Stream_GetReadedSome(AA_CFileStream stream, uint32 len, uint32 pos)
	{
		if(len <= 0)
			len = AA_Stream_GetLength(stream);
		if(len <= 0)
			return nullptr;
		static std::string readed;
		readed.clear();
		char* reded = new char[len+2];
		if(!ArmyAnt::FileStream::GetStream(stream)->Read(reded, len, pos))
		{
			AA_SAFE_DELALL(reded);
			return nullptr;
		}
		readed = reded;
		AA_SAFE_DELALL(reded);
		return readed.c_str();
	}

	ARMYANT_CLIB_API const char*AA_Stream_GetReadedTo(AA_CFileStream stream, char endtag, uint32 len)
	{
		if(len <= 0)
			len = AA_Stream_GetLength(stream);
		if(len <= 0)
			return nullptr;
		static std::string readed;
		readed.clear();
		char* reded = new char[len + 2];
		if(!ArmyAnt::FileStream::GetStream(stream)->Read(reded, uint8(endtag), len))
		{
			AA_SAFE_DELALL(reded);
			return nullptr;
		}
		readed = reded;
		AA_SAFE_DELALL(reded);
		return readed.c_str();
	}
	
	ARMYANT_CLIB_API BOOL AA_Stream_WriteTo(AA_CFileStream stream, char*buffer, uint32 len)
	{
		return 0 < AA_Stream_Write(stream, buffer, len) ? TRUE : FALSE;
	}

	static double MethodTemplate(double)
	{
		return 0;
	}

	static std::map<int, double> intDoubleDict;

	ARMYANT_CLIB_API AA_CNeuronAlgorithm AA_NeuronAlgorithm_FreeCreate(double threshold)
	{
		auto ret = AA_NeuronAlgorithm_Create(MethodTemplate, threshold);
		return ret;
	}

	ARMYANT_CLIB_API int AA_NeuronAlgorithm_RecordDoubleToInt(double value)
	{
		for(int i = 0; i < intDoubleDict.size() + 2; i++)
			if(intDoubleDict.find(i) == intDoubleDict.end())
			{
				intDoubleDict.insert(std::pair<int, double>(i, value));
				return i;
			}
		Assert(false);
		return -1;
	}

	ARMYANT_CLIB_API BOOL AA_NeuronAlgorithm_PythonChangeActFunc(AA_CNeuronAlgorithm handle)
	{
		auto obj = ArmyAnt::NeuronAlgorithm_GetCppObject(handle);
		
		return obj->SetActivationFunction([handle](double input)
		{
			PyRun_SimpleString("import ArmyAnt");
			char tmpstr[256] = "aa_tmp = ArmyAnt.NeuronAlgorithm.GetObjectByHd(%d)";
			sprintf(tmpstr, tmpstr, handle);
			PyRun_SimpleString(tmpstr);
			char tmpstr2[256] = "aa_ret = aa_tmp.__func(%f)";
			sprintf(tmpstr2, tmpstr2, input);
			auto ret =  PyRun_SimpleString(tmpstr2);
			return intDoubleDict.find(ret)->second;
		}) ? TRUE : FALSE;
	}

}