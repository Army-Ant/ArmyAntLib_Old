#include "main.h"

#define EXIT_TEST 0xffffffff

static ArmyAnt::FileStream*file = nullptr;

int UnitTest(const std::string&);

inline int Error(const std::string& errmsg, const char* errmsg2 = "")
{
	auto hd = GetStdHandle(STD_ERROR_HANDLE);
	SetConsoleTextAttribute(hd, 0x0064);
	std::cerr << errmsg << errmsg2 << std::endl;
	hd = GetStdHandle(STD_ERROR_HANDLE);
	SetConsoleTextAttribute(hd, 0x000F);
	return 0;
}

int main(int argc, char* argv[])
{
	std::string str;
	do
	{
		std::cin >> str;
	} while(UnitTest(str) != EXIT_TEST);
	
	return 0;
}

int UnitTest(const std::string& cmd)
{
	if(cmd == "exit")
		return EXIT_TEST;
	if(cmd == "create")
	{
		if(file != nullptr)
			return Error("The file stream has been created !");
		else
		{
			file = new ArmyAnt::FileStream();
			file->SetStreamMode(false);
			std::cout << "The file stream created successfully !" << std::endl;
		}
	}
	else if(cmd == "destroy")
	{
		if(file == nullptr)
			return Error("The file stream has not been created !");
		else
		{
			AA_SAFE_DEL(file);
			std::cout << "The file stream has been destroyed !" << std::endl;
		}
	}
	else if(cmd == "openfile")
	{
		if(file == nullptr)
			return Error("The file stream has not been created !");
		if(!file->Open("test.txt"))
			return Error("File open failed");
		else
			std::cout << "File open successful" << std::endl;
	}
	else if(cmd == "close")
	{
		if(file == nullptr)
			return Error("The file stream has not been created !");
		if(!file->Close())
			return Error("File close failed");
		else
			std::cout << "File close successful" << std::endl;
	}
	else if(cmd == "runread")
	{
		if(file == nullptr)
			return Error("The file stream has not been created !");
		if(!file->IsOpened(false))
			return Error("Please open the file before reading");
		if(!file->IsOpened())
			return Error("File stream disconnected !");
		char buf[1024] = "";
		if(0==file->Read(buf))
			return Error("Reading file failed");
		std::cout << "Read file successfully, its content is :" << std::endl;
		std::cout << buf << std::endl;
	}
	else if(cmd == "write")
	{
		if(file == nullptr)
			return Error("The file stream has not been created !");
		if(!file->IsOpened(false))
			return Error("Please open the file before reading");
		if(!file->IsOpened())
			return Error("File stream disconnected !");
		char buf[1024] = "";
		std::cin >> buf;
		if(0 == file->Write(buf))
			return Error("Writing file failed");
		std::cout << "Writing file successfully" << std::endl;
	}
	else if(cmd == "lineread")
	{
		if(file == nullptr)
			return Error("The file stream has not been created !");
		if(!file->IsOpened(false))
			return Error("Please open the file before reading");
		if(!file->IsOpened())
			return Error("File stream disconnected !");
		char buf[1024] = "";
		if(0 == file->Read(buf, BYTE('\n')))
			return Error("Reading file failed");
		std::cout << "Read file successfully, its content is :" << std::endl;
		std::cout << buf << std::endl;
	}
	else
	{
		Error("Wrong command word : ", cmd.c_str());
	}
	return 0;
}