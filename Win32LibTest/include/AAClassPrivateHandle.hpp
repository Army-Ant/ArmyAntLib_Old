#ifndef CLASS_PRIVATE_HANDLE_HPP_2015_11_13
#define CLASS_PRIVATE_HANDLE_HPP_2015_11_13

#include "AADefine.h"
#include <map>

namespace ArmyAnt {

//�������ڱ���������C++���е�˽�г�Ա����˽�г�Ա������cppʵ���ļ�����һ�����У�public������ԭ������һ�� const T_Handle handle ���г�Ա
//ʵ���ļ�����һ��static����ʵ������Ϊ˽�г�Ա��������ԭ��ĺ�������ͨ��handle�͹���������ȡ˽�г�Ա
//T_Out��������ԭ���ͣ�T_In�����������˽�г�Ա�����ͣ�T_Handle�����������ͣ��ɴ�����������ѡ��Ĭ��ΪDWORD
//ʹ��ʱ����Ҫ�ѹ�����ʵ������T_In����κ���Ϣ����¶��cpp�ļ�֮��

template <class T_Out, class T_In, class T_Handle = DWORD>
class ClassPrivateHandleManager
{
public:
	ClassPrivateHandleManager() {}
	~ClassPrivateHandleManager() {}

	T_Handle GetHandle(T_Out* src);
	void ReleaseHandle(T_Handle handle);

	T_Out* GetSourceByHandle(T_Handle handle);
	T_In* GetDataByHandle(T_Handle handle);

	T_In* operator[](T_Handle handle);

	std::map<T_Handle, T_Out*> handleRefMap;
	std::map<T_Handle, T_In*> handleMap;

	AA_FORBID_COPY_CTOR(ClassPrivateHandleManager)
	AA_FORBID_EQUAL_OPR(ClassPrivateHandleManager)
};

/******************************** Source Code *********************************/

template <class T_Out, class T_In, class T_Handle>
T_Handle ArmyAnt::ClassPrivateHandleManager<T_Out, T_In, T_Handle>::GetHandle(T_Out* src)
{
	auto len = handleMap.size();
	for(T_Handle n = 0; n < len; n++)
	{
		if(handleMap.find(n) == handleMap.end())
		{
			handleMap.insert(std::pair<T_Handle, T_In*>(n, new T_In()));
			handleRefMap.insert(std::pair<T_Handle, T_Out*>(n, src));
			return n;
		}
	}
	handleMap.insert(std::pair<T_Handle, T_In*>(len, new T_In()));
	handleRefMap.insert(std::pair<T_Handle, T_Out*>(len, src));
	return len;
}

template <class T_Out, class T_In, class T_Handle>
void ArmyAnt::ClassPrivateHandleManager<T_Out, T_In, T_Handle>::ReleaseHandle(T_Handle handle)
{
	auto ret = handleMap.find(handle);
	if(ret != handleMap.end())
	{
		AA_SAFE_DEL(ret->second);
		handleMap.erase(ret);
	}
}

template <class T_Out, class T_In, class T_Handle>
T_Out* ArmyAnt::ClassPrivateHandleManager<T_Out, T_In, T_Handle>::GetSourceByHandle(T_Handle handle)
{
	return handleRefMap.find(handle)->second;
}

template <class T_Out, class T_In, class T_Handle>
T_In* ArmyAnt::ClassPrivateHandleManager<T_Out, T_In, T_Handle>::GetDataByHandle(T_Handle handle)
{
	return handleMap.find(handle)->second;
}

template <class T_Out, class T_In, class T_Handle>
T_In* ArmyAnt::ClassPrivateHandleManager<T_Out, T_In, T_Handle>::operator[](T_Handle handle)
{
	return GetDataByHandle(handle);
}

} // namespace ArmyAnt

#endif