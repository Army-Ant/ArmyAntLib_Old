#include "main.h"
#include "constants.h"

int main(int argc, char* argv[])
{
	char choose = 0;
	for(int i = 0; g_welcomeStr[i] != nullptr; i++)
	{
		std::cout << g_welcomeStr[i] << std::endl;
	}
	for(int i = 0; g_moduleList[i].name != nullptr; i++)
	{
		std::cout << g_moduleList[i].keyCode << "." << g_moduleList[i].name << std::endl;
	}
	std::cout << g_beforeChoose;
	while(true)
	{
		std::cin >> choose;
		for(int i = 0; g_moduleList[i].callback != nullptr; i++)
		{
			if(g_moduleList[i].keyCode == choose)
			{
				g_moduleList[i].callback();
				std::cout << "Test Over ! Press Enter to exit";
				std::cin >> argv[0];
				return 0;
			}
		}
		std::cout << g_chooseError;
	}
	return -1;
}

void ExitTest(){}

void FileStreamTest()
{

}

void MemoryStreamTest()
{

}

void ComStreamTest()
{

}

void PipeStreamTest()
{

}

void NetworkStreamTest()
{

}

void AESTest()
{

}

void BinaryTest()
{

}

void SocketTest()
{

}

void ConfigurationTest()
{

}

void MessageQueueTest()
{

}

void TripleMapTest()
{

}

void TreeTest()
{

}

void DigraphTest()
{

}

void StateMachineTest()
{

}

void NeuronTest()
{

}
