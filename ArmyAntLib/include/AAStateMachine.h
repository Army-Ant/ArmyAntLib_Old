#ifndef AA_STATE_MACHINE_H_2015_12_2
#define AA_STATE_MACHINE_H_2015_12_2

/*	* @ author			: Jason
	* @ date			: 12/02/2015
	* @ nearly update	: 12/02/2015
	* @ small version	: 0.1
	* @ summary			: ×´Ì¬»ú
	* @ uncompleted		: all
	* @ untested		: 
	* @ tested			: 
*/

#include "AADefine.h"
#include "AA_start.h"

namespace ArmyAnt {

class ARMYANTLIB_API StateMachine
{
public:
	StateMachine();
	StateMachine(const StateMachine&value);
	StateMachine&operator=(const StateMachine&value);
	~StateMachine();

public:
	bool InsertState();
	bool DeleteState();
	bool IsStateExist()const;
	bool GetAllStates()const;
	bool GetCurrentState()const;
	bool GoToState();
	bool AbortToState();
	bool GetDefaultState()const;
	bool SetDefaultState();
	bool EnableState();
	bool IsStateEnable()const;
	bool Pause();
	bool Resume();
	bool IsRunning()const;
};

}

#endif // AA_STATE_MACHINE_H_2015_12_2