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

template <class T_Weight = float>
class NeuronAlgorithm
{
public:
	typedef std::function<T_Weight(T_Weight)> ActiveFunc;

public: // Some normal activation functions

	// Liner function
	// 线性函数, 默认值为单位正比例函数
	inline static ActiveFunc GetLinerFunc(T_Weight  slope = T_Weight(1), T_Weight bias = T_Weight(0));
	// Ramp function
	// 对称斜坡函数 , 默认值为单位斜坡函数
	inline static ActiveFunc GetRampFunc(T_Weight  width = T_Weight(1), T_Weight height = T_Weight(1));
	// Step function (Threshold function)
	// 阶跃函数 (门阀函数) , 默认值为单位阶跃函数
	inline static ActiveFunc GetThresholdFunc(T_Weight  amplitude = T_Weight(1), T_Weight threshold = T_Weight(0));
	// Sigmoid function
	// S形函数
	inline static ActiveFunc GetSigmoidFunc(T_Weight  coef = T_Weight(1));
	// Double-sigmoid function
	// 双S形函数
	inline static ActiveFunc GetDoubleSigmoidFunc(T_Weight  coef = T_Weight(1));

public:
	NeuronAlgorithm(ActiveFunc activationFunc, T_Weight threshold = T_Weight(0));
	NeuronAlgorithm(const NeuronAlgorithm&value);
	NeuronAlgorithm<T_Weight>&operator=(const NeuronAlgorithm&value);
	virtual ~NeuronAlgorithm();

public:
	// 传入信号
	bool JoinActive(T_Weight input, T_Weight weight);
	// 取消信号
	bool LeaveActive(T_Weight input, T_Weight weight);
	// 重置输入
	bool ClearActive();
	// 求输出
	T_Weight GetOutput() const;
	// 求信号权值总和
	T_Weight GetAllActive() const;

	// 更改激活函数
	bool SetActivationFunction(ActiveFunc func);
	// 查看阀值
	T_Weight GetThreshold()const;
	// 修改阀值
	bool SetThreshold(T_Weight value);

public:
	inline NeuronAlgorithm<T_Weight>&operator<<(T_Weight inputweight);
	inline NeuronAlgorithm<T_Weight>&operator>>(T_Weight inputweight);
	inline operator T_Weight();

protected:
	T_Weight threshold = T_Weight(0);	//阀值
	ActiveFunc activationFunc = nullptr; //激活函数

private:
	T_Weight inputAll = 0;
};


/*************************** Source Code : NeuronAlgorithm *********************************************/


template<class T_Weight>
inline typename NeuronAlgorithm<T_Weight>::ActiveFunc NeuronAlgorithm<T_Weight>::GetLinerFunc(T_Weight slope, T_Weight bias)
{
	return [=](T_Weight input){return T_Weight(slope*input + bias);};	// y=kx+b
}

template<class T_Weight>
inline typename NeuronAlgorithm<T_Weight>::ActiveFunc NeuronAlgorithm<T_Weight>::GetRampFunc(T_Weight width, T_Weight height)
{
	return [=](T_Weight input)
	{
		if(input > width)
			return height;
		if(input < -width)
			return -height;
		return T_Weight(input*height / width);
	};
}

template<class T_Weight>
inline typename NeuronAlgorithm<T_Weight>::ActiveFunc NeuronAlgorithm<T_Weight>::GetThresholdFunc(T_Weight amplitude, T_Weight threshold)
{
	return [=](T_Weight input){return input > threshold ? amplitude : T_Weight(0);};
}

template<class T_Weight>
inline typename NeuronAlgorithm<T_Weight>::ActiveFunc NeuronAlgorithm<T_Weight>::GetSigmoidFunc(T_Weight coef)
{
	return [=](T_Weight input){return 1 / (1 + pow(s_aa_natrualBase, -coef*input));};
}

template<class T_Weight>
inline typename NeuronAlgorithm<T_Weight>::ActiveFunc NeuronAlgorithm<T_Weight>::GetDoubleSigmoidFunc(T_Weight coef)
{
	return [=](T_Weight input){return 2 / (1 + pow(s_aa_natrualBase, -coef*input)) - 1;};
}

template<class T_Weight>
NeuronAlgorithm<T_Weight>::NeuronAlgorithm(ActiveFunc activationFunc, T_Weight threshold)
	: activationFunc(activationFunc), threshold(threshold)
{
	Assert(activationFunc != nullptr);
}

template<class T_Weight>
NeuronAlgorithm<T_Weight>::NeuronAlgorithm(const NeuronAlgorithm & value)
	: activationFunc(value.activationFunc), threshold(value.threshold), inputAll(value.inputAll)
{
}

template<class T_Weight>
NeuronAlgorithm<T_Weight> & NeuronAlgorithm<T_Weight>::operator=(const NeuronAlgorithm & value)
{
	activationFunc = value.activationFunc;
	threshold = value.threshold;
	inputAll = value.inputAll;
	return *this;
}

template<class T_Weight>
NeuronAlgorithm<T_Weight>::~NeuronAlgorithm()
{
}

template<class T_Weight>
bool NeuronAlgorithm<T_Weight>::JoinActive(T_Weight input, T_Weight weight)
{
	inputAll += input*weight;
	return true;
}

template<class T_Weight>
bool NeuronAlgorithm<T_Weight>::LeaveActive(T_Weight input, T_Weight weight)
{
	inputAll -= input*weight;
	return true;
}

template<class T_Weight>
bool NeuronAlgorithm<T_Weight>::ClearActive()
{
	inputAll -= 0;
	return true;
}

template<class T_Weight>
T_Weight NeuronAlgorithm<T_Weight>::GetOutput() const
{
	return activationFunc(inputAll - threshold);
}

template<class T_Weight>
T_Weight NeuronAlgorithm<T_Weight>::GetAllActive() const
{
	return inputAll;
}

template<class T_Weight>
bool NeuronAlgorithm<T_Weight>::SetActivationFunction(ActiveFunc func)
{
	if(func == nullptr)
		return false;
	activationFunc = func;
	return true;
}

template<class T_Weight>
T_Weight NeuronAlgorithm<T_Weight>::GetThreshold() const
{
	return threshold;
}

template<class T_Weight>
bool NeuronAlgorithm<T_Weight>::SetThreshold(T_Weight value)
{
	if(value < T_Weight(0))
		return false;
	threshold = value;
	return true;
}

template<class T_Weight>
inline NeuronAlgorithm<T_Weight> & NeuronAlgorithm<T_Weight>::operator<<(T_Weight inputweight)
{
	inputAll += inputweight;
	return*this;
}

template<class T_Weight>
inline NeuronAlgorithm<T_Weight> & NeuronAlgorithm<T_Weight>::operator>>(T_Weight inputweight)
{
	inputAll -= inputweight;
	return*this;
}

template<class T_Weight>
inline NeuronAlgorithm<T_Weight>::operator T_Weight()
{
	return GetOutput();
}

} // namespace ArmyAnt

#endif // AA_NEURON_HPP_2016_1_21
