#ifndef AA_STATE_MACHINE_HPP_2015_12_2
#define AA_STATE_MACHINE_HPP_2015_12_2

/*	* @ author			: Jason
	* @ date			: 12/02/2015
	* @ nearly update	: 12/02/2015
	* @ small version	: 0.1
	* @ summary			: 状态机
	* @ uncompleted		: 
	* @ untested		: all
	* @ tested			: 
*/

#include <functional>
#include "AADigraph.hpp"
#include "AATripleMap.hpp"

namespace ArmyAnt {

template <class T_Tag>
struct StateValue
{
	typedef std::function<bool(T_Tag lastState, T_Tag nextState, void*params)> StateChangeFunc;
	typedef std::function<bool(T_Tag thisState, DWORD eventId, void*params)>StateEventFunc;
	bool enabled = true;
	StateChangeFunc OnEnter = nullptr;
	StateChangeFunc OnLeave = nullptr;
	TripleMap<DWORD, bool, StateEventFunc> OnUpdate;
};

// 同步状态机, 不具有独自的线程, 采用被动事件触发的方式, defaultAllow表示新建的状态是否默认允许与已存在的所有状态互转
template <class T_Tag, bool defaultAllow = true>
class FiniteStateMachine : private Digraph<StateValue<T_Tag>, T_Tag>
{
	typedef GraphNode<StateValue<T_Tag>, T_Tag> State;

public:
	//默认构造函数,创建一个空的同步状态机,状态机初始为不可用状态,需手动激活
	FiniteStateMachine();
	//拷贝自另一个状态机
	FiniteStateMachine(const FiniteStateMachine&value);
	//从另一个状态机拷贝数据
	FiniteStateMachine&operator=(const FiniteStateMachine&value);
	//析构函数
	virtual ~FiniteStateMachine();

public:
	//添加一个状态
	bool InsertState(const State&state, bool isAllowAll = defaultAllow, bool isDefaultState = false);
	//删除一个状态
	bool DeleteState(const T_Tag&name);
	//判断是否存在指定名称的状态
	bool IsStateExist(const T_Tag&name)const;
	//获取所有状态的名称
	DWORD GetAllStates(T_Tag* dest = nullptr)const;

	//跳转到默认状态,跳转被禁止或状态机不可用则返回false
	bool GoToState();
	//跳转到允许跳转到的指定状态,跳转被禁止、状态机或者目标状态不可用则返回false
	bool GoToState(const T_Tag&name);
	//中断当前状态并立即变换到指定状态
	bool AbortToState(const T_Tag&name, typename StateValue<T_Tag>::StateChangeFunc dealFunc = nullptr);

	//添加一条允许跳转的路线
	bool AllowGo(T_Tag src, T_Tag dst);
	//禁用一条跳转路线
	bool ForbidGo(T_Tag src, T_Tag dst);
	//查看跳转路线是否可用
	bool IsAllowed(T_Tag src, T_Tag dst)const;
	//查看目前状态是否可跳至指定状态
	bool IsAllowed(T_Tag dst)const;
	//查看指定状态可跳转到的所有目标状态
	DWORD GetAllAllowedOut(T_Tag src, T_Tag*dst)const;
	//查看指定状态可由哪些状态跳转至
	DWORD GetAllAllowedIn(T_Tag dst, T_Tag*src)const;

	//获取当前激活的状态
	const T_Tag& GetCurrentState()const;
	//获取默认状态
	const T_Tag& GetDefaultState()const;
	//更改默认状态
	bool SetDefaultState(const T_Tag&name);
	//启用或禁用状态
	bool EnableState(const T_Tag&name, bool enable);
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
	//获取指定状态
	State& operator[](const T_Tag&name);
	const State& operator[](const T_Tag&name)const;
	//跳转到指定状态
	FiniteStateMachine& operator>>(const T_Tag&name);

protected:
	State * defaultState = nullptr;
	State * currState = nullptr;
	bool enabled = false;
};


/******************* Source Code : FiniteStateMachine ***********************************************/


template<class T_Tag, bool defaultAllow>
FiniteStateMachine<T_Tag, defaultAllow>::FiniteStateMachine()
	:Digraph()
{
}

template<class T_Tag, bool defaultAllow>
FiniteStateMachine<T_Tag, defaultAllow>::FiniteStateMachine(const FiniteStateMachine & value)
	: Digraph(), enabled(value.enabled)
{
	for(auto i = value.nodes.Begin(); i != value.nodes.End(); ++i)
		nodes.Insert(i);
	defaultState = GetChild(value.defaultState->tag);
	currState = GetChild(value.currState->tag);
}

template<class T_Tag, bool defaultAllow>
FiniteStateMachine<T_Tag, defaultAllow> & FiniteStateMachine<T_Tag, defaultAllow>::operator=(const FiniteStateMachine & value)
{
	for(auto i = value.nodes.Begin(); i != value.nodes.End(); ++i)
		nodes.Insert(i);
	defaultState = GetChild(value.defaultState->tag);
	currState = GetChild(value.currState->tag);
	return *this;
}

template<class T_Tag, bool defaultAllow>
FiniteStateMachine<T_Tag, defaultAllow>::~FiniteStateMachine()
{
}

template<class T_Tag, bool defaultAllow>
bool FiniteStateMachine<T_Tag, defaultAllow>::InsertState(const State & state, bool isAllowAll/* = defaultAllow*/, bool isDefaultState/* = false*/)
{
	if(GetChild(state.tag) != nullptr)
		return false;
	AddNode(state);
	if(isDefaultState)
		defaultState = state.tag;
	if(isAllowAll)
	{
		for(auto i = nodes.begin(); i != nodes.end(); ++i)
			if(!LinkNode(state.tag, i->tag) || !LinkNode(i->tag.state.tag))
				return false;
	}
	return true;
}

template<class T_Tag, bool defaultAllow>
bool FiniteStateMachine<T_Tag, defaultAllow>::DeleteState(const T_Tag & name)
{
	if(name == defaultState || name == currState)
		return false;
	for(auto i = nodes.begin(); i != nodes.end(); ++i)
		DelinkNode(i->tag.name);
	return RemoveNode(name);
}

template<class T_Tag, bool defaultAllow>
bool FiniteStateMachine<T_Tag, defaultAllow>::IsStateExist(const T_Tag & name) const
{
	return GetChild(name) != nullptr;
}

template<class T_Tag, bool defaultAllow>
DWORD FiniteStateMachine<T_Tag, defaultAllow>::GetAllStates(T_Tag* dest) const
{
	int n = 0;
	for(auto i = nodes.begin(); i != states.end(); ++i)
	{
		dest[n++] = i->tag;
	}
	return nodes.size();
}

template<class T_Tag, bool defaultAllow>
bool FiniteStateMachine<T_Tag, defaultAllow>::GoToState()
{
	return GoToState(defaultState);
}

template<class T_Tag, bool defaultAllow>
bool FiniteStateMachine<T_Tag, defaultAllow>::GoToState(const T_Tag & name)
{
	//检查跳转是否被允许
	if(!IsAllowed(dest))
		return false;
	//检测状态机是否可用,目标状态是否存在,及是否可用
	auto next = GetChild(name);
	if(!enabled || next == nullptr || !currState->value->enabled || !next->value->enabled)
		return false;
	//调用当前状态离开事件
	if(currState->value->OnLeave != nullptr && !curr->value->OnLeave(currState, name, this))
		return false;
	//调用目标状态开始事件
	if(next->value->OnEnter != nullptr && !next->value->OnEnter(currState, name, this))
		return false;
	//修改状态
	currState = name;
	return true;
}

template<class T_Tag, bool defaultAllow>
bool FiniteStateMachine<T_Tag, defaultAllow>::AbortToState(const T_Tag & name, typename StateValue<T_Tag>::StateChangeFunc dealFunc)
{
	//检测状态机是否可用,目标状态是否存在,及是否可用
	auto next = states.Find(name);
	if(!enabled || next == nullptr || !currState->value->enabled || !next->value->enabled)
		return false;
	//调用强制离开的处理事件
	if(dealFunc != nullptr && !dealFunc(currState, name, this))
		return false;
	//调用目标状态开始事件
	if(next->value->OnEnter != nullptr && !next->value->OnEnter(currState, name, this))
		return false;
	//修改状态
	currState = name;
	return true;
}

template<class T_Tag, bool defaultAllow>
bool FiniteStateMachine<T_Tag, defaultAllow>::AllowGo(T_Tag src, T_Tag dst)
{
	return LinkNode(src, dst);
}

template<class T_Tag, bool defaultAllow>
bool FiniteStateMachine<T_Tag, defaultAllow>::ForbidGo(T_Tag src, T_Tag dst)
{
	return DelinkNode(src, dst);
}

template<class T_Tag, bool defaultAllow>
bool FiniteStateMachine<T_Tag, defaultAllow>::IsAllowed(T_Tag src, T_Tag dst) const
{
	return IsLinkedTo(src,dst);
}

template<class T_Tag, bool defaultAllow>
bool FiniteStateMachine<T_Tag, defaultAllow>::IsAllowed(T_Tag dst) const
{
	return IsAllowed(currState->tag, dst);
}

template<class T_Tag, bool defaultAllow>
DWORD FiniteStateMachine<T_Tag, defaultAllow>::GetAllAllowedOut(T_Tag src, T_Tag * dst) const
{
	auto target = GetChild(src);
	if(target == nullptr)
		return 0;
	auto sz = target->GetAllLinkedOut();
	if(dst != nullptr)
	{
		auto ret = new GraphLine<T_Val, T_Tag, T_Weight>*[sz];
		for(int i = 0; i < sz; i++)
		{
			dst[i] = ret[i]->GetEndNode()->tag;
		}
	}
	return sz;
}

template<class T_Tag, bool defaultAllow>
DWORD FiniteStateMachine<T_Tag, defaultAllow>::GetAllAllowedIn(T_Tag dst, T_Tag * src) const
{
	auto target = GetChild(src);
	if(target == nullptr)
		return 0;
	auto sz = target->GetAllLinkedIn();
	if(dst != nullptr)
	{
		auto ret = new GraphLine<T_Val, T_Tag, T_Weight>*[sz];
		for(int i = 0; i < sz; i++)
		{
			dst[i] = ret[i]->GetEndNode()->tag;
		}
	}
	return sz;
}

template<class T_Tag, bool defaultAllow>
const T_Tag& FiniteStateMachine<T_Tag, defaultAllow>::GetCurrentState() const
{
	return currState->tag;
}

template<class T_Tag, bool defaultAllow>
const T_Tag & FiniteStateMachine<T_Tag, defaultAllow>::GetDefaultState() const
{
	return defaultState->tag;
}

template<class T_Tag, bool defaultAllow>
bool FiniteStateMachine<T_Tag, defaultAllow>::SetDefaultState(const T_Tag & name)
{
	if(GetChild(name) == nullptr)
		return false;
	defaultState = GetChild(name);
	return true;
}

template<class T_Tag, bool defaultAllow>
bool FiniteStateMachine<T_Tag, defaultAllow>::EnableState(const T_Tag & name, bool enable)
{
	auto target = GetChild(name);
	if(target == nullptr)
		return false;
	target->value->enabled = enable;
	return true;
}

template<class T_Tag, bool defaultAllow>
bool FiniteStateMachine<T_Tag, defaultAllow>::IsStateEnable(const T_Tag & name) const
{
	auto target = GetChild(name);
	Assert(target == nullptr);
	return target->value->enabled;
}

template<class T_Tag, bool defaultAllow>
bool FiniteStateMachine<T_Tag, defaultAllow>::Enable()
{
	if(GetChild(currState) == nullptr)
		return Enable(defaultState->tag);
	return Enable(currState->tag);
}

template<class T_Tag, bool defaultAllow>
bool FiniteStateMachine<T_Tag, defaultAllow>::Enable(const T_Tag & name)
{
	if(GetChild(name)== nullptr || GetChild(defaultState) == nullptr)
		return false;
	currState = GetChild(name);
	enabled = true;
	return true;
}

template<class T_Tag, bool defaultAllow>
bool FiniteStateMachine<T_Tag, defaultAllow>::Disable()
{
	enabled = false;
	return true;
}

template<class T_Tag, bool defaultAllow>
bool FiniteStateMachine<T_Tag, defaultAllow>::IsEnabled() const
{
	return enabled;
}

template<class T_Tag, bool defaultAllow>
void FiniteStateMachine<T_Tag, defaultAllow>::DispatchEvent(DWORD eventId)
{
	DispatchEvent<std::nullptr_t>(eventId, nullptr);
}

template<class T_Tag, bool defaultAllow>
template<class T_Param>
void FiniteStateMachine<T_Tag, defaultAllow>::DispatchEvent(DWORD eventId, T_Param * params)
{
	if(!enabled)
		return;
	auto now = currState->value->OnUpdate;
	auto func = now.Find(eventId);
	if(func != now.End())
		func(currState->tag, eventId, params);
}

template<class T_Tag, bool defaultAllow>
typename FiniteStateMachine<T_Tag, defaultAllow>::State & FiniteStateMachine<T_Tag, defaultAllow>::operator[](const T_Tag & name)
{
	auto ret = GetChild(name);
	Assert(ret != nullptr);
	return ret->third;
}

template<class T_Tag, bool defaultAllow>
const typename FiniteStateMachine<T_Tag, defaultAllow>::State & FiniteStateMachine<T_Tag, defaultAllow>::operator[](const T_Tag & name) const
{
	return const_cast(this)->operator [](name);
}

template<class T_Tag, bool defaultAllow>
FiniteStateMachine<T_Tag, defaultAllow> & FiniteStateMachine<T_Tag, defaultAllow>::operator>>(const T_Tag & name)
{
	Assert(GoToState(name));
	return *this;
}

} // namespace ArmyAnt

#endif // AA_STATE_MACHINE_HPP_2015_12_2