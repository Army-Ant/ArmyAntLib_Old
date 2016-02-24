#include "../include/Java_AANeuron.h"
#include "../include/C_AANeuron.h"
#include "../include/AANeuron.hpp"
#include "../include/AAJNITools.hpp"

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

JNIEXPORT jdouble JNICALL Java_ArmyAnt_Java_1AANeuron_Liner(JNIEnv *, jclass, jdouble input, jdouble slope, jdouble bias)
{
	return AA_Math_Liner(input, slope, bias);
}

JNIEXPORT jdouble JNICALL Java_ArmyAnt_Java_1AANeuron_Ramp(JNIEnv *, jclass, jdouble input, jdouble width, jdouble height)
{
	return AA_Math_Ramp(input, width, height);
}

JNIEXPORT jdouble JNICALL Java_ArmyAnt_Java_1AANeuron_Threshold(JNIEnv *, jclass, jdouble input, jdouble amplitude, jdouble threshold)
{
	return AA_Math_Threshold(input, amplitude, threshold);
}

JNIEXPORT jdouble JNICALL Java_ArmyAnt_Java_1AANeuron_Sigmoid(JNIEnv *, jclass, jdouble input, jdouble coef)
{
	return AA_Math_Sigmoid(input, coef);
}

JNIEXPORT jdouble JNICALL Java_ArmyAnt_Java_1AANeuron_DoubleSigmoid(JNIEnv *, jclass, jdouble input, jdouble coef)
{
	return AA_Math_DoubleSigmoid(input, coef);
}

JNIEXPORT jlong JNICALL Java_ArmyAnt_Java_1AANeuron_Native_1Create(JNIEnv *env, jclass, jobject funcInterface, jdouble threshold)
{
	if(funcInterface == nullptr)
		return -1;
	auto ret = AA_NeuronAlgorithm_Create(MethodTemplate, threshold);
	auto obj = ArmyAnt::NeuronAlgorithm_GetCppObject(ret);
	obj->SetActivationFunction([env, funcInterface](double input) { auto mid = ActiveMethodID(env); return env->CallDoubleMethod(funcInterface, mid, input); });
	return jlong(ret);
}

JNIEXPORT jlong JNICALL Java_ArmyAnt_Java_1AANeuron_Native_1Clone(JNIEnv *, jclass, jlong value)
{
	if(value < 0)
		return jlong(-1);
	return jlong(AA_NeuronAlgorithm_Clone(DWORD(value)));
}

JNIEXPORT void JNICALL Java_ArmyAnt_Java_1AANeuron_Native_1Release(JNIEnv *, jclass, jlong value)
{
	if(value >= 0)
		AA_NeuronAlgorithm_Release(DWORD(value));
}

JNIEXPORT jboolean JNICALL Java_ArmyAnt_Java_1AANeuron_Native_1JoinActive(JNIEnv *, jclass, jlong value, jdouble input, jdouble weight)
{
	if(value < 0)
		return JNI_FALSE;
	return jboolean(AA_NeuronAlgorithm_JoinActive(DWORD(value),input,weight));
}

JNIEXPORT jboolean JNICALL Java_ArmyAnt_Java_1AANeuron_Native_1LeaveActive(JNIEnv *, jclass, jlong value, jdouble input, jdouble weight)
{
	if(value < 0)
		return JNI_FALSE;
	return jboolean(AA_NeuronAlgorithm_LeaveActive(DWORD(value), input, weight));
}

JNIEXPORT jboolean JNICALL Java_ArmyAnt_Java_1AANeuron_Native_1ClearActive(JNIEnv *, jclass, jlong value)
{
	if(value < 0)
		return JNI_FALSE;
	return jboolean(AA_NeuronAlgorithm_ClearActive(DWORD(value)));
}

JNIEXPORT jdouble JNICALL Java_ArmyAnt_Java_1AANeuron_Native_1GetOutput(JNIEnv *, jclass, jlong value)
{
	Assert(value < 0);
	return AA_NeuronAlgorithm_GetOutput(DWORD(value));
}

JNIEXPORT jdouble JNICALL Java_ArmyAnt_Java_1AANeuron_Native_1GetAllActive(JNIEnv *, jclass, jlong value)
{
	Assert(value < 0);
	return AA_NeuronAlgorithm_GetAllActive(DWORD(value));
}

JNIEXPORT jboolean JNICALL Java_ArmyAnt_Java_1AANeuron_Native_1SetActiveInterface(JNIEnv *env, jclass, jlong value, jobject funcInterface)
{
	if(value < 0 || funcInterface == nullptr)
		return JNI_FALSE;
	auto obj = ArmyAnt::NeuronAlgorithm_GetCppObject(DWORD(value));
	return obj->SetActivationFunction([env, funcInterface](double input) { auto mid = ActiveMethodID(env); return env->CallDoubleMethod(funcInterface, mid, input); }) ? JNI_TRUE : JNI_FALSE;
}

JNIEXPORT jdouble JNICALL Java_ArmyAnt_Java_1AANeuron_Native_1GetThreshold(JNIEnv *, jclass, jlong value)
{
	Assert(value < 0);
	return AA_NeuronAlgorithm_GetThreshold(DWORD(value));
}

JNIEXPORT jboolean JNICALL Java_ArmyAnt_Java_1AANeuron_Native_1SetThreshold(JNIEnv *, jclass, jlong value, jdouble threshold)
{
	if(value < 0)
		return JNI_FALSE;
	return jboolean(AA_NeuronAlgorithm_SetThreshold(DWORD(value), threshold));
}


#ifdef __cplusplus
}
#endif
