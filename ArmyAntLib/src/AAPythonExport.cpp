#include <string>
#include "../include/AAFile.h"
#include "../include/C_AAFile.h"

#include <Python.h>
#include <map>
#include "../include/AANeuron.hpp"
#include "../include/C_AANeuron.h"

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