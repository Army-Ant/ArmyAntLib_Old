/*
* Copyright (c) 2015 ArmyAnt
* ��Ȩ���� (c) 2015 ArmyAnt
*
* Licensed under the BSD License, Version 2.0 (the License);
* �����ʹ��BSDЭ�鱣��, Э��汾:2.0
* you may not use this file except in compliance with the License.
* ʹ�ñ���Դ�����ļ�������, ��Ϊͬ��Э��
* You can read the license content in the file "ARMYANT.COPYRIGHT.BSD_LICENSE.MD" at the root of this project
* �������ڱ���Ŀ�ĸ�Ŀ¼�ҵ���Ϊ"ARMYANT.COPYRIGHT.BSD_LICENSE.MD"���ļ�, ���Ķ�Э������
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
#ifndef AA_CONFIGURATION_2016_3_28
#define AA_CONFIGURATION_2016_3_28

#include "AA_start.h"
#include "AATree.hpp"

namespace ArmyAnt {

class ARMYANTLIB_API Configuration
{
public:
	Configuration();
	Configuration(const Configuration&value);
	Configuration&operator=(const Configuration&value);
	virtual ~Configuration();

public:
	bool LoadFromIni(const char*iniStr);
	bool LoadFromXml(const char*xmlStr);
	bool LoadFromJson(const char*jsonStr);
	bool LoadFromAABinary(const void*bins, uint64 len);
	bool SaveAsIni(char*iniStr)const;
	bool SaveAsXml(char*xmlStr)const;
	bool SaveAsJson(char*jsonStr)const;
	uint64 SaveAsAABinary(void*bins)const;

public:
	const char* GetRootName()const;
	const char* GetRootValue()const;
	const char* GetParentName()const;
	Configuration* GetParent();
	const Configuration* GetParent()const;
	Configuration* GetChild(const char*childName);
	const Configuration* GetChild(const char*childName)const;
	uint32 GetMaxChildNameLength()const;
	uint32 GetChildren(char*const*childName)const;

	bool SetRootName(const char*name);
	bool SetRootValue(const char*value);
	bool AddChild(const char*name, const char*value);
	bool AddChild(const Configuration&child);
	bool RemoveChild(const char*name);
	bool RemoveChild(const Configuration&child);
	bool AddToParent(const Configuration&child);
	bool RemoveFromParent();
	// ArmyAnt::Tree<std::string, std::string>*
	void* GetTree();

public:
	const uint32 handle;
};

} // namespace ArmyAnt

#endif // AA_CONFIGURATION_2016_3_28