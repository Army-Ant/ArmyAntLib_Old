/*	*
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
	* This file is the internal source file of this project, is not contained by the closed source release part of this software
	* ���ļ�Ϊ�ڲ�Դ���ļ�, ��������ڱ�Դ�����ı������
	*/

#ifndef AA_ISTREAM_PRIVATE_HEADER_2016_5_11
#define AA_ISTREAM_PRIVATE_HEADER_2016_5_11

#include "../inc/AAClassPrivateHandle.hpp"
#include "../inc/AAIStream.h"

namespace ArmyAnt{

class IStream_Private
{
public:
	IStream_Private(){};
	virtual ~IStream_Private(){};

public:
	static ClassPrivateHandleManager<IStream, IStream_Private>& handleManager;
};

} // namespace ArmyAnt

#endif // AA_ISTREAM_PRIVATE_HEADER_2016_5_11
