#ifndef AA_STATE_MACHINE_HPP_2015_12_2
#define AA_STATE_MACHINE_HPP_2015_12_2

/*	* @ author			: Jason
	* @ date			: 12/02/2015
	* @ nearly update	: 12/02/2015
	* @ small version	: 0.1
	* @ summary			: 状态机
	* @ uncompleted		: all
	* @ untested		: 
	* @ tested			: 
*/

#include <functional>
#include "AADigraph.hpp"

namespace ArmyAnt {

namespace StateMachineHelper {

typedef std::function<bool(const char*lastState, const char*nextState, void*params)> StateChangeFunc;
typedef std::function<bool(const char*thisState, DWORD eventId, void*params)>StateEventFunc;

struct State
{
	StateChangeFunc OnEnter = nullptr;
	StateChangeFunc OnLeave = nullptr;
	TripleMap<DWORD, bool, StateEventFunc> OnUpdate;
};

} // namespace ArmyAnt::StateMachineHelper

// 同步状态机, 不具有独自的线程, 采用被动事件触发的方式
template <class T_Tag>
class FiniteStateMachine : private Digraph<T_Tag>
{
public:
	//默认构造函数,创建一个空的同步状态机
	FiniteStateMachine();
	//拷贝自另一个状态机
	FiniteStateMachine(const FiniteStateMachine&value);
	//从另一个状态机拷贝数据
	FiniteStateMachine&operator=(const FiniteStateMachine&value);
	//析构函数
	virtual ~FiniteStateMachine();

public:
	//添加一个状态
	bool InsertState(const StateMachineHelper::State&state, bool isDefaultState = false);
	//删除一个状态
	bool DeleteState(const T_Tag&name);
	//判断是否存在指定名称的状态
	bool IsStateExist(const T_Tag&name)const;
	//获取所有状态的名称
	const char* GetAllStates()const;

	//跳转到默认状态
	bool GoToState();
	//跳转到指定状态
	bool GoToState(const T_Tag&name);
	//中断当前状态并立即变换到指定状态
	bool AbortToState(const T_Tag&name, StateMachineHelper::StateChangeFunc dealFunc = nullptr);

	//获取当前激活的状态
	const char* GetCurrentState()const;
	//获取默认状态
	const char* GetDefaultState()const;
	//更改默认状态
	bool SetDefaultState(const T_Tag&name);
	//启用或禁用状态
	bool EnableState(const T_Tag&name);
	//查询状态是否可用
	bool IsStateEnable(const T_Tag&name)const;

	//启用状态机,状态为之前状态或默认状态
	bool Enable();
	//启用状态机并指定初始状态
	bool Enable(const T_Tag&name);
	//禁用状态机
	bool Disable();
	//查询状态机是否可用
	bool IsEnabled()const;
	//触发事件
	void DispatchEvent(DWORD eventId);
	template<class T_Param>
	void DispatchEvent(DWORD eventId, T_Param*params);

public:
	//添加状态
	FiniteStateMachine& operator+=(StateMachineHelper::State&state);
	//删除状态
	FiniteStateMachine& operator-=(StateMachineHelper::State&state);
	//获取指定状态
	StateMachineHelper::State& operator[](const T_Tag&name);
	const StateMachineHelper::State& operator[](const T_Tag&name)const;
	//跳转到指定状态
	FiniteStateMachine& operator>>(const T_Tag&name);

protected:
	TripleMap<T_Tag, bool, StateMachineHelper::State> states;
	T_Tag defaultState;
	bool enabled;
};

} // namespace ArmyAnt

#endif // AA_STATE_MACHINE_HPP_2015_12_2