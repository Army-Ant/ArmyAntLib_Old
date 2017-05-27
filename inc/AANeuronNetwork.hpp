/*
 * Copyright (c) 2015 ArmyAnt
 * 版权所有 (c) 2015 ArmyAnt
 *
 * Licensed under the BSD License, Version 2.0 (the License);
 * 本软件使用BSD协议保护, 协议版本:2.0
 * you may not use this file except in compliance with the License.
 * 使用本开源代码文件的内容, 视为同意协议
 * You can read the license content in the file "LICENSE" at the root of this project
 * 您可以在本项目的根目录找到名为"LICENSE"的文件, 来阅读协议内容
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
        NeuronNetwork(std::vector<T_Val> neuronNumAndFloor, T_Val minValue, T_Val maxValue, NeuronAlgorithm<uint32>::ActiveFunc);
		~NeuronNetwork();
		NeuronNetwork Clone();
		static NeuronNetwork Create(std::vector<T_Val> neuronNumAndFloor, T_Val min, T_Val max, NeuronAlgorithm<uint32>::ActiveFunc);
		AA_FORBID_COPY_CTOR(NeuronNetwork);
		AA_FORBID_ASSGN_OPR(NeuronNetwork);

	public:
		const std::vector<T_Val> Active(const std::vector<T_Val>& input);
		bool Forget();

	protected:
		static double GetSmallRandomNum();

	};

}

#endif // AA_NEURON_NETWORK_HPP
