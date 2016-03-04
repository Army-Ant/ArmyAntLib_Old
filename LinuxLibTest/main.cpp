#include "main.h"
using namespace ArmyAnt::Fragment;

static const int s_exitCode = 0xffffffff;

int FileStreamTest(const std::string&);
int AESTest(const std::string&);

int TripleMapTest(const std::string&);


int main(int argc, char* argv[])
{
	std::string str;
	auto func = AESTest;
	do
	{
		std::cin >> str;
	} while(func(str) != s_exitCode);
	
	return 0;
}