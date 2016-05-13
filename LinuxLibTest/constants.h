#ifndef CONSTANTS_H_2016_5_9
#define CONSTANTS_H_2016_5_9

#include <functional>

typedef std::function<void()> TestFunc;

struct ModuleList
{
	char keyCode;
	const char* name;
	TestFunc callback;
};

void ExitTest();

void FileStreamTest();
void MemoryStreamTest();
void ComStreamTest();
void PipeStreamTest();
void NetworkStreamTest();
void AESTest();
void BinaryTest();
void SocketTest();
void ConfigurationTest();
void MessageQueueTest();

void TripleMapTest();
void TreeTest();
void DigraphTest();
void StateMachineTest();
void NeuronTest();

const char* g_welcomeStr[] = {
	"Welcome to the ArmAntLib Test for Windows platform",
	"欢迎使用ArmyAntLib的Windows平台测试器",
	"",
	"Please choose your test unit:",
	"请选择您要测试的单元:",
	nullptr
};

const ModuleList g_moduleList[] = {
	{ '1',"FileStream",FileStreamTest },
	{ '2',"MemoryStream",MemoryStreamTest },
	{ '3',"ComStream",ComStreamTest },
	{ '4',"PipeStream",PipeStreamTest },
	{ '5',"NetworkStream",NetworkStreamTest },
	{ '6',"AES",AESTest },
	{ '7',"Binary",BinaryTest },
	{ '8',"Socket",SocketTest },
	{ '9',"Configuration",ConfigurationTest },
	{ '0',"MessageQueue",MessageQueueTest },
	{ '-',"TripleMap",TripleMapTest },
	{ '=',"Tree",TreeTest },
	{ 'q',"Digraph",DigraphTest },
	{ 'w',"StateMachine",StateMachineTest },
	{ 'e',"Neuron",NeuronTest },

	{ '`',"ExitTest",ExitTest },
	{ 0,nullptr,nullptr }
};

const char* g_beforeChoose = "Please enter key to choose:";

const char* g_chooseError = "Choosed key error ! Please retry :";

const char* g_successfulStr = " OK!";
const char* g_failureStr = " failed!";



#endif // CONSTANTS_H_2016_5_9
