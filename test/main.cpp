#include "main.h"

using namespace ArmyAnt;

void test(int argc, char**argv, char**env_vars);

int main(int argc, char**argv, char**env_vars)
{
	test(argc, argv, env_vars);
	getchar();
	getchar();
	return 0;
}

void test(int argc, char ** argv, char ** env_vars)
{
	auto st = new File();
	st->Open("./testJson.json");
	char buf[32768] = "";
	st->Read(buf);
	std::cout << "file read ok" << std::endl;
	JsonUnit*j = JsonUnit::create(buf);
	std::cout << "parsed ok, type:" << uint32(uint8(j->getType())) << std::endl;
	j->toJsonString(buf);
	std::cout << buf << std::endl;
}
