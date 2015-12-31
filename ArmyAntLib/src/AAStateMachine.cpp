#include "../include/AAStateMachine.h"
#include "../include/AAClassPrivateHandle.hpp"
#include <list>

namespace ArmyAnt {

class StateMachine_Private
{
public:
	StateMachine_Private();
	~StateMachine_Private();

	std::list<StateMachineHelper::State> states;
};

static ClassPrivateHandleManager<FiniteStateMachine, StateMachine_Private> manager;



}