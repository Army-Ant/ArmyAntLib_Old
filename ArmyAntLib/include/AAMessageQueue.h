#ifndef AA_MESSAGE_QUEUE_H_2016_1_22
#define AA_MESSAGE_QUEUE_H_2016_1_22

/*	* @ author			: Jason
	* @ date			: 01/22/2016
	* @ nearly update	: 01/22/2015
	* @ small version	: 0.1
	* @ summary			: 消息队列
	* @ uncompleted		: all
	* @ untested		:
	* @ tested			:
	*/

#include <functional>
#include "AADefine.h"

namespace ArmyAnt {

typedef std::function<void(DWORD eventid, void*params)> EventCall;

class MessageQueue
{
public:
	MessageQueue(EventCall onevent);
	~MessageQueue();

public:
	bool RegisterEvent(DWORD eventid);
	bool UnRegisterEvent(DWORD eventid);
	bool IsEventRegistered(DWORD eventid);
	bool EnableEvent(DWORD eventid);
	bool DisableEvent(DWORD eventid);
	bool IsEventDisabled(DWORD eventid);
	bool DispatchEvent(DWORD eventid, void*params);

	AA_FORBID_ASSGN_OPR(MessageQueue);
	AA_FORBID_COPY_CTOR(MessageQueue);
};

} // namespace ArmyAnt

#endif // AA_MESSAGE_QUEUE_H_2016_1_22