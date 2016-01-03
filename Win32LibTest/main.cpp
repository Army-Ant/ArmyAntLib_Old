#include "main.h"
using namespace ArmyAnt::Fragment;

static const int s_exitCode = 0xffffffff;

int FileStreamTest(const std::string&);
int AESTest(const std::string&);

inline int Error(const std::string& errmsg, const char* errmsg2 = "")
{
	SetConsoleTextAttribute(GetStdHandle(STD_ERROR_HANDLE), 0x0064);
	std::cerr << errmsg << errmsg2 << std::endl;
	std::cerr << "errno : " << errno << std::endl;
	_set_errno(0);
	SetConsoleTextAttribute(GetStdHandle(STD_ERROR_HANDLE), 0x000F);
	return 0;
}

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

int FileStreamTest(const std::string& cmd)
{
	static ArmyAnt::FileStream*file = nullptr;
	static BYTE memoryTest[2048] = {0};
	static bool memInit = false;
	if(!memInit)
	{
		memInit = true;
		strcpy(reinterpret_cast<char*>(memoryTest), "I am a small sentence of memory test !\n\tPlease amazing me !");
	}

	if(cmd == "exit")
		return s_exitCode;
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
			SafeDel(file);
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
	else if(cmd == "openmem")
	{
		if(file == nullptr)
			return Error("The file stream has not been created !");
		if(!file->Open(memoryTest,2048))
			return Error("Memory open failed");
		else
			std::cout << "Memory open successful" << std::endl;
	}
	else if(cmd == "openpipe")
	{
		if(file == nullptr)
			return Error("The file stream has not been created !");
		if(!file->Open("jason_1", ""))
			return Error("Pipe open failed");
		else
			std::cout << "Pipe open successful" << std::endl;
	}
	else if(cmd == "opencom")
	{
		if(file == nullptr)
			return Error("The file stream has not been created !");
		if(!file->Open(1))
			return Error("COM open failed");
		else
			std::cout << "COM open successful" << std::endl;
	}
	else if(cmd == "opennet")
	{
		if(file == nullptr)
			return Error("The file stream has not been created !");
		return Error("The network connection functions have not been created !");
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
		char buf[2048] = "";
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
	else if(cmd == "isopened")
	{
		if(file == nullptr)
			return Error("The file stream has not been created !");
		if(!file->IsOpened(false))
			std::cout << "The stream has not been opened." << std::endl;
		else switch(file->NowType())
		{
			case ArmyAnt::StreamType::File:
				std::cout << "The stream type is diskfile." << std::endl;
				break;
			case ArmyAnt::StreamType::Memory:
				std::cout << "The stream type is memory." << std::endl;
				break;
			case ArmyAnt::StreamType::NamePipe:
				std::cout << "The stream type is name pipe." << std::endl;
				break;
			case ArmyAnt::StreamType::ComData:
				std::cout << "The stream type is COM." << std::endl;
				break;
			case ArmyAnt::StreamType::Network:
				std::cout << "The stream type is network." << std::endl;
				break;
			default:
				Error("The file stream is opened with unknown type!");
				break;
		}
	}
	else if(cmd == "getlength")
	{
		if(file == nullptr)
			return Error("The file stream has not been created !");
		if(!file->IsOpened(false))
			return Error("Please open the file before reading");
		std::cout << "The length of the stream is " << file->GetLength() << std::endl;
	}
	else if(cmd == "getpos")
	{
		if(file == nullptr)
			return Error("The file stream has not been created !");
		if(!file->IsOpened(false))
			return Error("Please open the file before reading");
		std::cout << "The reading pointer of the stream is " << file->GetPos() << std::endl;
	}
	else if(cmd == "setposnext")
	{
		if(file == nullptr)
			return Error("The file stream has not been created !");
		if(!file->IsOpened(false))
			return Error("Please open the file before reading");
		if(!file->MovePos(file->GetPos()+1))
			return Error("Move the stream reading pointer failed!");
		std::cout << "Move reading pointer to next byte successful !" << std::endl;
	}
	else if(cmd == "getname")
	{
		if(file == nullptr)
			return Error("The file stream has not been created !");
		if(!file->IsOpened(false))
			return Error("Please open the file before reading");
		std::cout << "The source name of the stream is " << file->GetSourceName() << std::endl;
	}
	else
	{
		Error("Wrong command word : ", cmd.c_str());
	}
	return 0;
}


int AESTest(const std::string&cmd)
{
	static BYTE enc[16] = {'?','z','j','l','j',0xc,'y','1',1,'2',9,'0',1,'1',2,'!'};
	static auto parser = ArmyAnt::AES::Parser::GetQuickParser(enc);
	static ArmyAnt::FileStream file;
	static bool isEncoded = false;
	if(cmd == "exit")
		return s_exitCode;
	else if(cmd == "chbenc")
	{
		static BYTE tst[256] = {0};
		for(int i = 0; i < 256; i++)
		{
			tst[i] = BYTE(i);
		}
		ArmyAnt::AES::ByteEncoder tstecd;
		if(!tstecd.InputData(tst, true))
			return Error("Check failed !");
		std::cout << "Check passed !" << std::endl;
	}
	else if(cmd == "saveBencoder")
	{
		file.SetStreamMode(false, false);
		BYTE datas[256] = {0};
		if(!parser.GetSetting(0).GetByteEncoder().GetData(datas))
			return Error("Get the encoder error !");
		if(!file.Open("byteEncoder.txt"))
			return Error("Open the encoder data saving file failed");
		if(0 >= file.Write(datas, 256))
		{
			file.Close();
			return Error("Write the encoder data to file failed");
		}
		file.Close();
		std::cout << "The byte encoder data has been saved into file !" << std::endl;
	}
	else if(cmd == "saveBdecoder")
	{
		file.SetStreamMode(false, false);
		BYTE datas[256] = {0};
		if(!parser.GetSetting(0).GetByteEncoder().GetBackData(datas))
			return Error("Get the decoder error !");
		if(!file.Open("byteDecoder.txt"))
			return Error("Open the decoder data saving file failed");
		if(0 >= file.Write(datas, 256))
		{
			file.Close();
			return Error("Write the decoder data to file failed");
		}
		file.Close();
		std::cout << "The byte decoder data has been saved into file !" << std::endl;
	}
	else if(cmd == "insertdata")
	{
		file.SetStreamMode(true, false);
		if(!file.Open("test.txt"))
			return Error("Open the data file failed");
		BYTE datas[128] = {0};
		if(0 >= file.Read(datas, DWORD(128)))
		{
			file.Close();
			return Error("Read the data file failed");
		}
		file.Close();
		if(!parser.SetData(datas, 128))
			return Error("Copy the data failed");
		std::cout << "Insert the data successful !" << std::endl;
		isEncoded = false;
	}
	else if(cmd == "encode")
	{
		if(isEncoded)
			return Error("The data has been encoded !");
		file.SetStreamMode(false, false);
		BYTE ret[128] = {0};
		if(!parser.Encode(ret))
			return Error("Encode the data failed");
		std::cout << "Encode the data successful !" << std::endl;
		if(!file.Open("encode.txt"))
			return Error("Open the save file failed");
		if(0 >= file.Write(ret, 128))
		{
			file.Close();
			return Error("Write the encoded data to file failed");
		}
		file.Close();
		std::cout << "The encoded data has been saved into file !" << std::endl;
		if(!parser.SetData(ret, 128))
			return Error("Set the encoded data failed");
		isEncoded = true;
	}
	else if(cmd == "decode")
	{
		if(!isEncoded)
			return Error("The data has not been encoded !");
		file.SetStreamMode(false, false);
		BYTE ret[128] = {0};
		if(!parser.Decode(ret))
			return Error("Decode the data failed");
		std::cout << "Decode the data successful !" << std::endl;
		if(!file.Open("decode.txt"))
			return Error("Open the save file failed");
		if(0 >= file.Write(ret, 128))
		{
			file.Close();
			return Error("Write the decode data to file failed");
		}
		file.Close();
		std::cout << "The decode data has been saved into file !" << std::endl;
		if(!parser.SetData(ret, 128))
			return Error("Set the decoded data failed");
		isEncoded = false;
	}
	else
	{
		Error("Wrong command word : ", cmd.c_str());
	}
	return 0;
}