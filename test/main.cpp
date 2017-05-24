#include "main.h"
#include <map>

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
	st->Open(argv[1]);
	char buf[32768] = "";
	st->Read(buf);
	std::cout << "file read ok" << std::endl;
	JsonUnit*j = JsonUnit::create(buf);
	std::cout << "parsed ok, type:" << uint32(uint8(j->getType())) << std::endl;
	j->toJsonString(buf);
	std::cout << buf << std::endl;
}



auto gt_macMapTest = [](){
    std::map<int, const char*> intMap;
    if(intMap.find(1) == intMap.end())
        intMap.insert(std::make_pair(1,"the first one"));
    intMap.insert(std::make_pair(2,"the second one"));
    std::map<const char*, const char*> ptrMap;
    if(ptrMap.find("1") == ptrMap.end())
        ptrMap.insert(std::make_pair("1", "the first one"));
    ptrMap.insert(std::make_pair("2", "the second one"));
    return true;
}();
