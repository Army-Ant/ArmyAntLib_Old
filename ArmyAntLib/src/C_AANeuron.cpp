#include "../include/AANeuron.hpp"
#include "../include/C_AANeuron.h"

#include <map>

typedef ArmyAnt::NeuronAlgorithm<double> C_AA_NeuronAlgorithm;

ARMYANT_CLIB_API double AA_Math_Liner(double input, double slope, double bias)
{
	return slope*input + bias;
}

ARMYANT_CLIB_API double AA_Math_Ramp(double input, double width, double height)
{
	if(input > width)
		return height;
	if(input < -width)
		return -height;
	return input*height / width;
}

ARMYANT_CLIB_API double AA_Math_Threshold(double input, double amplitude, double threshold)
{
	return input > threshold ? amplitude : 0.0;
}

ARMYANT_CLIB_API double AA_Math_Sigmoid(double input, double coef)
{
	return 1 / (1 + pow(s_aa_natrualBase, -coef*input));
}

ARMYANT_CLIB_API double AA_Math_DoubleSigmoid(double input, double coef)
{
	return 2 / (1 + pow(s_aa_natrualBase, -coef*input)) - 1;
}

static std::map<AA_CNeuronAlgorithm, ArmyAnt::NeuronAlgorithm<double>*> manager;

ARMYANT_CLIB_API AA_CNeuronAlgorithm AA_NeuronAlgorithm_Create(AA_Neuron_ActiveFunc activationFunc, double threshold)
{
	DWORD len = manager.size();
	//获取当前未使用的最小句柄号
	for(DWORD n = 0; n < len; n++)
	{
		//设置句柄，创建内部实例，并关联到外部实例
		if(manager.find(n) == manager.end())
		{
			manager.insert(std::pair<DWORD, ArmyAnt::NeuronAlgorithm<double>*>(n, new ArmyAnt::NeuronAlgorithm<double>(activationFunc, threshold)));
			return n;
		}
	}
	//没有未使用的中间句柄号，则在结尾添加新最大句柄号，并创建内部实例、关联到外部实例
	manager.insert(std::pair<DWORD, ArmyAnt::NeuronAlgorithm<double>*>(len, new ArmyAnt::NeuronAlgorithm<double>(activationFunc, threshold)));
	return len;

}

ARMYANT_CLIB_API AA_CNeuronAlgorithm AA_NeuronAlgorithm_Clone(AA_CNeuronAlgorithm value)
{
	Assert(manager.find(value)!=manager.end());
	DWORD len = manager.size();
	//获取当前未使用的最小句柄号
	for(DWORD n = 0; n < len; n++)
	{
		//设置句柄，创建内部实例，并关联到外部实例
		if(manager.find(n) == manager.end())
		{
			manager.insert(std::pair<DWORD, ArmyAnt::NeuronAlgorithm<double>*>(n, new ArmyAnt::NeuronAlgorithm<double>(*manager.find(value)->second)));
			return n;
		}
	}
	//没有未使用的中间句柄号，则在结尾添加新最大句柄号，并创建内部实例、关联到外部实例
	manager.insert(std::pair<DWORD, ArmyAnt::NeuronAlgorithm<double>*>(len, new ArmyAnt::NeuronAlgorithm<double>(*manager.find(value)->second)));
	return len;
}

ARMYANT_CLIB_API void AA_NeuronAlgorithm_Release(AA_CNeuronAlgorithm value)
{
	auto ret = manager.find(value);
	//销毁内部实例，解除关联
	if(ret != manager.end())
	{
		delete ret->second;
		manager.erase(ret);
	}
}

ARMYANT_CLIB_API BOOL AA_NeuronAlgorithm_JoinActive(AA_CNeuronAlgorithm value, double input, double weight)
{
	return manager.find(value)->second->JoinActive(input, weight) ? TRUE : FALSE;
}

ARMYANT_CLIB_API BOOL AA_NeuronAlgorithm_LeaveActive(AA_CNeuronAlgorithm value, double input, double weight)
{
	return manager.find(value)->second->LeaveActive(input, weight) ? TRUE : FALSE;
}

ARMYANT_CLIB_API BOOL AA_NeuronAlgorithm_ClearActive(AA_CNeuronAlgorithm value)
{
	return manager.find(value)->second->ClearActive() ? TRUE : FALSE;
}

ARMYANT_CLIB_API double AA_NeuronAlgorithm_GetOutput(AA_CNeuronAlgorithm value)
{
	return manager.find(value)->second->GetOutput();
}

ARMYANT_CLIB_API double AA_NeuronAlgorithm_GetAllActive(AA_CNeuronAlgorithm value)
{
	return manager.find(value)->second->GetAllActive();
}

ARMYANT_CLIB_API BOOL AA_NeuronAlgorithm_SetActivationFunction(AA_CNeuronAlgorithm value, AA_Neuron_ActiveFunc func)
{
	return manager.find(value)->second->SetActivationFunction(func) ? TRUE : FALSE;
}

ARMYANT_CLIB_API double AA_NeuronAlgorithm_GetThreshold(AA_CNeuronAlgorithm value)
{
	return manager.find(value)->second->GetThreshold();
}

ARMYANT_CLIB_API BOOL AA_NeuronAlgorithm_SetThreshold(AA_CNeuronAlgorithm value, double threshold)
{
	return manager.find(value)->second->SetThreshold(threshold) ? TRUE : FALSE;
}
