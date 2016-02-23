#ifndef C_AA_NEURON_H_2016_2_23
#define C_AA_NEURON_H_2016_2_23

#include "C_AADefine.h"
#include "AA_start.h"

#ifdef _cplusplus
extern "C" {
#endif

	typedef DWORD AA_CNeuronAlgorithm;
	typedef double(*AA_Neuron_ActiveFunc)(double input);

	ARMYANT_CLIB_API double AA_Math_Liner(double input, double slope, double bias);
	ARMYANT_CLIB_API double AA_Math_Ramp(double input, double width, double height);
	ARMYANT_CLIB_API double AA_Math_Threshold(double input, double amplitude, double threshold);
	ARMYANT_CLIB_API double AA_Math_Sigmoid(double input, double coef);
	ARMYANT_CLIB_API double AA_Math_DoubleSigmoid(double input, double coef);

	/*
		Usage:

		double My_Liner(double input)
		{
			double slope = 1; // Your setting slope
			double bias = 0; // Your setting bias
			return AA_Math_Liner(input, slope, bias);
		}

		AA_CNeuronAlgorithm object = AA_NeuronAlgorithm_Create(My_Liner, 0);

	*/

	ARMYANT_CLIB_API AA_CNeuronAlgorithm AA_NeuronAlgorithm_Create(AA_Neuron_ActiveFunc activationFunc, double threshold);
	ARMYANT_CLIB_API AA_CNeuronAlgorithm AA_NeuronAlgorithm_Clone(AA_CNeuronAlgorithm value);
	ARMYANT_CLIB_API void AA_NeuronAlgorithm_Release(AA_CNeuronAlgorithm value);

	ARMYANT_CLIB_API BOOL AA_NeuronAlgorithm_JoinActive(AA_CNeuronAlgorithm value, double input, double weight);
	ARMYANT_CLIB_API BOOL AA_NeuronAlgorithm_LeaveActive(AA_CNeuronAlgorithm value, double input, double weight);
	ARMYANT_CLIB_API BOOL AA_NeuronAlgorithm_ClearActive(AA_CNeuronAlgorithm value);
	ARMYANT_CLIB_API double AA_NeuronAlgorithm_GetOutput(AA_CNeuronAlgorithm value);
	ARMYANT_CLIB_API double AA_NeuronAlgorithm_GetAllActive(AA_CNeuronAlgorithm value);

	ARMYANT_CLIB_API BOOL AA_NeuronAlgorithm_SetActivationFunction(AA_CNeuronAlgorithm value, AA_Neuron_ActiveFunc func);
	ARMYANT_CLIB_API double AA_NeuronAlgorithm_GetThreshold(AA_CNeuronAlgorithm value);
	ARMYANT_CLIB_API BOOL AA_NeuronAlgorithm_SetThreshold(AA_CNeuronAlgorithm value, double threshold);

#ifdef _cplusplus
}
#endif

#endif // C_AA_NEURON_H_2016_2_23