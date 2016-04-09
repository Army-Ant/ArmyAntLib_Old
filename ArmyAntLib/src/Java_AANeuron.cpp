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

#include "../base/base.hpp"
#include "../include/C_AANeuron.h"
#include "../include/AANeuron.hpp"
#include "../include/AAJNITools.hpp"
#include <map>

#define ActiveClassName "ArmyAnt/Java_AANeuron$INeuronActive"
#define ActiveMethodName "ActiveFunc"
#define ActiveMethodSig "(D)D"
#define ActiveMethodID(jnienv) ArmyAnt::JNITools::GetInterfaceMethodID(jnienv, ActiveClassName, ActiveMethodName, ActiveMethodSig)

// NeuronAlgorithm 对Java接口的实现

#ifdef __cplusplus
extern "C" {
#endif

static double MethodTemplate(double)
{
	return 0;
}

JNIEXPORT jdouble JNICALL Java_ArmyAnt_Neuron_Algorithm_Liner(JNIEnv *, jclass, jdouble input, jdouble slope, jdouble bias)
{
	return AA_Math_Liner(input, slope, bias);
}

JNIEXPORT jdouble JNICALL Java_ArmyAnt_Neuron_Algorithm_Ramp(JNIEnv *, jclass, jdouble input, jdouble width, jdouble height)
{
	return AA_Math_Ramp(input, width, height);
}

JNIEXPORT jdouble JNICALL Java_ArmyAnt_Neuron_Algorithm_Threshold(JNIEnv *, jclass, jdouble input, jdouble amplitude, jdouble threshold)
{
	return AA_Math_Threshold(input, amplitude, threshold);
}

JNIEXPORT jdouble JNICALL Java_ArmyAnt_Neuron_Algorithm_Sigmoid(JNIEnv *, jclass, jdouble input, jdouble coef)
{
	return AA_Math_Sigmoid(input, coef);
}

JNIEXPORT jdouble JNICALL Java_ArmyAnt_Neuron_Algorithm_DoubleSigmoid(JNIEnv *, jclass, jdouble input, jdouble coef)
{
	return AA_Math_DoubleSigmoid(input, coef);
}

static std::map<uint32, jobject> s_funcInterfaceGlobal;

JNIEXPORT jlong JNICALL Java_ArmyAnt_Neuron_Algorithm_Native_1Create(JNIEnv *env, jclass, jobject funcInterface, jdouble threshold)
{
	if(funcInterface == nullptr)
		return -1;
	auto ret = AA_NeuronAlgorithm_Create(MethodTemplate, threshold);
	auto obj = ArmyAnt::NeuronAlgorithm_GetCppObject(ret);
	if(s_funcInterfaceGlobal.find(ret)->second != nullptr)
		env->DeleteGlobalRef(s_funcInterfaceGlobal.find(ret)->second);
	s_funcInterfaceGlobal.erase(ret);
	s_funcInterfaceGlobal.insert(std::pair<uint32, jobject>(ret, env->NewGlobalRef(funcInterface)));
	if(!obj->SetActivationFunction([env, ret](double input)
	{
		auto mid = ActiveMethodID(env);
		return env->CallDoubleMethod(s_funcInterfaceGlobal.find(ret)->second, mid, input);
	}))
		return jlong(-1);
	return jlong(ret);
}

JNIEXPORT jlong JNICALL Java_ArmyAnt_Neuron_Algorithm_Native_1Clone(JNIEnv *, jclass, jlong value)
{
	if(value < 0)
		return jlong(-1);
	auto ret = AA_NeuronAlgorithm_Clone(uint32(value));
	s_funcInterfaceGlobal.insert(std::pair<uint32, jobject>(ret, s_funcInterfaceGlobal.find(uint32(value))->second));
	return jlong(ret);
}


JNIEXPORT void JNICALL Java_ArmyAnt_Neuron_Algorithm_Native_1Release(JNIEnv * env, jclass, jlong value)
{
	if(value >= 0)
		AA_NeuronAlgorithm_Release(uint32(value));
	if(s_funcInterfaceGlobal.find(uint32(value))->second != nullptr)
		env->DeleteGlobalRef(s_funcInterfaceGlobal.find(uint32(value))->second);
	s_funcInterfaceGlobal.erase(uint32(value));
}

JNIEXPORT jboolean JNICALL Java_ArmyAnt_Neuron_Algorithm_Native_1JoinActive(JNIEnv *, jclass, jlong value, jdouble input, jdouble weight)
{
	if(value < 0)
		return JNI_FALSE;
	return jboolean(AA_NeuronAlgorithm_JoinActive(uint32(value),input,weight));
}

JNIEXPORT jboolean JNICALL Java_ArmyAnt_Neuron_Algorithm_Native_1LeaveActive(JNIEnv *, jclass, jlong value, jdouble input, jdouble weight)
{
	if(value < 0)
		return JNI_FALSE;
	return jboolean(AA_NeuronAlgorithm_LeaveActive(uint32(value), input, weight));
}

JNIEXPORT jboolean JNICALL Java_ArmyAnt_Neuron_Algorithm_Native_1ClearActive(JNIEnv *, jclass, jlong value)
{
	if(value < 0)
		return JNI_FALSE;
	return jboolean(AA_NeuronAlgorithm_ClearActive(uint32(value)));
}

JNIEXPORT jdouble JNICALL Java_ArmyAnt_Neuron_Algorithm_Native_1GetOutput(JNIEnv *, jclass, jlong value)
{
	AAAssert(value >= 0, -1.);
	return AA_NeuronAlgorithm_GetOutput(uint32(value));
}

JNIEXPORT jdouble JNICALL Java_ArmyAnt_Neuron_Algorithm_Native_1GetAllActive(JNIEnv *, jclass, jlong value)
{
	AAAssert(value >= 0, -1.);
	return AA_NeuronAlgorithm_GetAllActive(uint32(value));
}

JNIEXPORT jboolean JNICALL Java_ArmyAnt_Neuron_Algorithm_Native_1SetActiveInterface(JNIEnv *env, jclass, jlong value, jobject funcInterface)
{
	if(value < 0 || funcInterface == nullptr)
		return JNI_FALSE;
	auto obj = ArmyAnt::NeuronAlgorithm_GetCppObject(uint32(value));
	if(s_funcInterfaceGlobal.find(uint32(value))->second != nullptr)
		env->DeleteGlobalRef(s_funcInterfaceGlobal.find(uint32(value))->second);
	s_funcInterfaceGlobal.erase(uint32(value));
	s_funcInterfaceGlobal.insert(std::pair<uint32, jobject>(uint32(value), env->NewGlobalRef(funcInterface)));
	return obj->SetActivationFunction([env, value](double input)
	{
		auto mid = ActiveMethodID(env);
		return env->CallDoubleMethod(s_funcInterfaceGlobal.find(uint32(value))->second, mid, input);
	}) ? JNI_TRUE : JNI_FALSE;
}

JNIEXPORT jdouble JNICALL Java_ArmyAnt_Neuron_Algorithm_Native_1GetThreshold(JNIEnv *, jclass, jlong value)
{
	AAAssert(value >= 0, -1.);
	return AA_NeuronAlgorithm_GetThreshold(uint32(value));
}

JNIEXPORT jboolean JNICALL Java_ArmyAnt_Neuron_Algorithm_Native_1SetThreshold(JNIEnv *, jclass, jlong value, jdouble threshold)
{
	if(value < 0)
		return JNI_FALSE;
	return jboolean(AA_NeuronAlgorithm_SetThreshold(uint32(value), threshold));
}


#ifdef __cplusplus
}
#endif
