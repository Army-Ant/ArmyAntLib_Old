#ifndef AA_NEURON_HPP_2016_1_21
#define AA_NEURON_HPP_2016_1_21

/*	* @ author			: Jason
	* @ date			: 01/21/2016
	* @ nearly update	: 01/21/2016
	* @ small version	: 0.1
	* @ summary			: 神经元
	* @ uncompleted		: all
	* @ untested		:
	* @ tested			:
	*/

#include "AADigraph.hpp"
#include "AAStateMachine.hpp"

namespace ArmyAnt {

// Some normal activation functions
namespace Helper {

template <class T_Weight = float, T_Weight slope = T_Weight(1), T_Weight bias = T_Weight(0)>
T_Weight Liner(T_Weight input)
{
	return T_Weight(slope*input + bias);
}

template <class T_Weight = float, T_Weight height = T_Weight(1), T_Weight value = T_Weight(1), T_Weight slope = T_Weight(0)>
T_Weight Ramp(T_Weight input)
{
	if(input > height)
		return value;
	if(input < -height)
		return -value;
	return T_Weight(slope*input);
}

template <class T_Weight = float, T_Weight threshold = T_Weight(0), T_Weight value = T_Weight(1)>
T_Weight Threshold(T_Weight input)
{
	return input > threshold ? T_Weight(1) : T_Weight(0);
}

}

template <class T_Weight = float>
class NeuronAlgorithm
{
public:
	typedef std::function<T_Weight(T_Weight)> ActiveFunc;

public:
	NeuronAlgorithm(ActiveFunc activationFunc, T_Weight threshold = T_Weight(0));
	virtual ~NeuronAlgorithm();

public:

protected:
	T_Weight threshold = T_Weight(0);	//阀值
	ActiveFunc activationFunc = nullptr; //激活函数
};

} // namespace ArmyAnt

#endif // AA_NEURON_HPP_2016_1_21
