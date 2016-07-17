/*
* Copyright (c) 2015 ArmyAnt
* ��Ȩ���� (c) 2015 ArmyAnt
*
* Licensed under the BSD License, Version 2.0 (the License);
* �����ʹ��BSDЭ�鱣��, Э��汾:2.0
* you may not use this file except in compliance with the License.
* ʹ�ñ���Դ�����ļ�������, ��Ϊͬ��Э��
* You can read the license content in the file "LICENSE" at the root of this project
* �������ڱ���Ŀ�ĸ�Ŀ¼�ҵ���Ϊ"LICENSE"���ļ�, ���Ķ�Э������
* You may also obtain a copy of the License at
* ��Ҳ�����ڴ˴����Э��ĸ���:
*
*     http://opensource.org/licenses/BSD-3-Clause
*
* Unless required by applicable law or agreed to in writing, software distributed under the License is distributed on an AS IS BASIS,
* WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
* ���Ƿ���Ҫ����߰�Ȩ����������ͬ��,������ڱ�Э������ϵķ���û���κ���ʽ�������͵���,������ʾ�Ļ�Ĭ���.
* See the License for the specific language governing permissions and limitations under the License.
* �����ض����ƻ����Թ���Ȩ�����Ķ�Э��
*/

#ifndef AA_NEURON_NETWORK_HPP
#define AA_NEURON_NETWORK_HPP

#include <array>
#include "AAStateMachine.hpp"
#include "AANeuron.hpp"
#include "AADigraph.hpp"

namespace ArmyAnt {

	template <class T_Val = uint32>
	class NeuronNetwork : public Digraph<T_Val, uint32> 
	{
	public:
		enum class Type : uint8 
		{
			Unknown,
			Feedforward,
			Feedback,
			SelfOrganizing,

		};
	public:
		NeuronNetwork(std::array<T_Val> neuronNumAndFloor, T_Val minValue, T_Val maxValue, NeuronAlgorithm::ActiveFunc);
		~NeuronNetwork();
		NeuronNetwork Clone();
		static NeuronNetwork Create(std::array<T_Val> neuronNumAndFloor, T_Val min, T_Val max, NeuronAlgorithm::ActiveFunc);
		AA_FORBID_COPY_CTOR(NeuronNetwork);
		AA_FORBID_ASSGN_OPR(NeuronNetwork);

	public:
		const std::array<T_Val> Active(const std::array<T_Val>& input);
		bool Forget();

	protected:
		static double GetSmallRandomNum();

	};

}

#endif // AA_NEURON_NETWORK_HPP
