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
typedef std::function<bool(const char*thisState, DWORD delayTime, void*params)> StateUpdateFunc;

template <class T_Tag>
struct State
{
	T_Tag name;
	StateChangeFunc OnEnter = nullptr;
	StateChangeFunc OnLeave = nullptr;
	StateUpdateFunc OnUpdate = nullptr;
};

} // namespace ArmyAnt::StateMachineHelper

template <class T_Tag>
class FiniteStateMachine : private Digraph<T_Tag>
{
public:
	FiniteStateMachine();
	FiniteStateMachine(const FiniteStateMachine&value);
	FiniteStateMachine&operator=(const FiniteStateMachine&value);
	~FiniteStateMachine();

public:
	bool InsertState(const StateMachineHelper::State<T_Tag>&state, bool isDefaultState = false);
	bool DeleteState(const T_Tag&name);
	bool IsStateExist(const T_Tag&name)const;
	const char* GetAllStates()const;

	bool GoToState();
	bool GoToState(const T_Tag&name);
	bool AbortToState(const T_Tag&name, StateMachineHelper::StateChangeFunc dealFunc = nullptr);
	const char* GetCurrentState()const;
	const char* GetDefaultState()const;
	bool SetDefaultState(const T_Tag&name);
	bool EnableState(const T_Tag&name);
	bool IsStateEnable(const T_Tag&name)const;

	bool Start();
	bool Start(const T_Tag&name);
	bool Pause();
	bool Resume();
	bool IsRunning()const;

public:
	FiniteStateMachine& operator+=(StateMachineHelper::State<T_Tag>&state);
	FiniteStateMachine& operator-=(StateMachineHelper::State<T_Tag>&state);
	StateMachineHelper::State& operator[](const T_Tag&name);
	const StateMachineHelper::State& operator[](const T_Tag&name)const;
	FiniteStateMachine& operator>>(const T_Tag&name);

};

} // namespace ArmyAnt

#endif // AA_STATE_MACHINE_HPP_2015_12_2