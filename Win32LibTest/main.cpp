#include "main.h"

static const int s_exitCode = 0xffffffff;

int FileStreamTest(const std::string&);
int AESTest(const std::string&);
int BinaryTest(const std::string&);
int SocketTest(const std::string&);
int ConfigurationTest(const std::string&);
int MessageQueueTest(const std::string&);

int TripleMapTest(const std::string&);
int TreeTest(const std::string&);
int DigraphTest(const std::string&);
int StateMachineTest(const std::string&);
int NeuronTest(const std::string&);

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
	char choose = 0;
	SetConsoleTextAttribute(GetStdHandle(STD_ERROR_HANDLE), 0x000F);
	std::cout << "Welcome to the ArmAntLib Test for Windows platform" << std::endl;
	std::cout << "欢迎使用ArmyAntLib的Windows平台测试器" << std::endl << std::endl;
	std::cout << "Please choose your test unit:" << std::endl;
	std::cout << "请选择您要测试的单元:" << std::endl;
	std::cout << "1. FileStream" << std::endl;
	std::cout << "2. AES" << std::endl;
	std::cout << "3. Binary" << std::endl;
	std::cout << "4. Socket" << std::endl;
	std::cout << "5. Configuration" << std::endl;
	std::cout << "6. MessageQueue" << std::endl;
	std::cout << "7. TripleMap" << std::endl;
	std::cout << "8. Tree" << std::endl;
	std::cout << "9. Digraph" << std::endl;
	std::cout << "0. StateMachine" << std::endl;
	std::cout << "-. Neuron" << std::endl;
	std::cout << "Please enter key to choose:";
	std::cin >> choose;
	int(*func)(const std::string&cmd);
	switch(choose)
	{
		case '1':
			func = FileStreamTest;
			break;
		case '2':
			func = AESTest;
			break;
		case '3':
			func = BinaryTest;
			break;
		case '4':
			func = SocketTest;
			break;
		case '5':
			func = ConfigurationTest;
			break;
		case '6':
			func = MessageQueueTest;
			break;
		case '7':
			func = TripleMapTest;
			break;
		case '8':
			func = TreeTest;
			break;
		case '9':
			func = DigraphTest;
			break;
		case '0':
			func = StateMachineTest;
			break;
		case '-':
			func = NeuronTest;
			break;
	}
	do
	{
		std::cin >> str;
	} while(func(str) != s_exitCode);
	
	return 0;
}

int FileStreamTest(const std::string& cmd)
{
	static FileStream*file = nullptr;
	static uint8 memoryTest[2048] = {0};
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
			file = new FileStream();
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
		if(0 == file->Read(buf, uint8('\n')))
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
			case StreamType::File:
				std::cout << "The stream type is diskfile." << std::endl;
				break;
			case StreamType::Memory:
				std::cout << "The stream type is memory." << std::endl;
				break;
			case StreamType::NamePipe:
				std::cout << "The stream type is name pipe." << std::endl;
				break;
			case StreamType::ComData:
				std::cout << "The stream type is COM." << std::endl;
				break;
			case StreamType::Network:
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
	static uint8 enc[16] = {'?','z','j','l','j',0xc,'y','1',1,'2',9,'0',1,'1',2,'!'};
	static auto parser = AES::Parser::GetQuickParser(enc);
	static FileStream file;
	static bool isEncoded = false;
	if(cmd == "exit")
		return s_exitCode;
	else if(cmd == "chbenc")
	{
		static uint8 tst[256] = {0};
		for(int i = 0; i < 256; i++)
		{
			tst[i] = uint8(i);
		}
		AES::ByteEncoder tstecd;
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
		if(0 >= file.Read(datas, uint32(128)))
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

int BinaryTest(const std::string&cmd)
{
	if(cmd == "exit")
		return s_exitCode;
	else if(cmd == "")
	{

	}
	else
	{
		Error("Wrong command word : ", cmd.c_str());
	}
	return 0;
}

int SocketTest(const std::string&cmd)
{
	if(cmd == "exit")
		return s_exitCode;
	else if(cmd == "")
	{

	}
	else
	{
		Error("Wrong command word : ", cmd.c_str());
	}
	return 0;
}

int ConfigurationTest(const std::string&cmd)
{
	if(cmd == "exit")
		return s_exitCode;
	else if(cmd == "")
	{

	}
	else
	{
		Error("Wrong command word : ", cmd.c_str());
	}
	return 0;
}


int MessageQueueTest(const std::string&cmd)
{
	if(cmd == "exit")
		return s_exitCode;
	else if(cmd == "")
	{

	}
	else
	{
		Error("Wrong command word : ", cmd.c_str());
	}
	return 0;
}

int TripleMapTest(const std::string&cmd)
{
	static TripleMap<int, float, std::string> map;
	if(cmd == "exit")
		return s_exitCode;
	else if(cmd == "compareself")
	{
		auto tmp = map;
		if(tmp.Equals(map))
			std::cout << "Comparation excuted successful !";
		else return Error("Compare with itself returns false !");
	}
	else
	{
		Error("Wrong command word : ", cmd.c_str());
	}
	return 0;
}

int TreeTest(const std::string&cmd)
{
	static Tree<std::string> tr(&TreeNode<std::string>(std::string("root"), 0));
	if(cmd == "exit")
		return s_exitCode;
	else if(cmd == "")
	{

	}
	else
	{
		Error("Wrong command word : ", cmd.c_str());
	}
	return 0;
}

int DigraphTest(const std::string&cmd)
{
	if(cmd == "exit")
		return s_exitCode;
	else if(cmd == "")
	{

	}
	else
	{
		Error("Wrong command word : ", cmd.c_str());
	}
	return 0;
}

int StateMachineTest(const std::string&cmd)
{
	if(cmd == "exit")
		return s_exitCode;
	else if(cmd == "")
	{

	}
	else
	{
		Error("Wrong command word : ", cmd.c_str());
	}
	return 0;
}

int NeuronTest(const std::string&cmd)
{
	static NeuronAlgorithm<> neuron([](double input) { return input * 2; }, 0.0);
	if(cmd == "exit")
		return s_exitCode;
	else if(cmd == "input")
	{
		if(!neuron.JoinActive(2, 3))
			Error("Join activation failed !");
		else
			std::cout << "OK!" << std::endl;
	}
	else if(cmd == "getin")
	{
		std::cout << "Active total is " << neuron.GetAllActive() << std::endl;
	}
	else if(cmd == "getout")
	{
		std::cout << "Output total is " << neuron.GetOutput() << std::endl;
	}
	else if(cmd == "setliner")
	{
		if(!neuron.SetActivationFunction(neuron.GetLinerFunc(2, 4)))
			Error("Set Liner activation function failed !");
		else
			std::cout << "Set OK!" << std::endl;
	}
	else if(cmd == "setramp")
	{
		if(!neuron.SetActivationFunction(neuron.GetRampFunc(2, 4)))
			Error("Set Ramp activation function failed !");
		else
			std::cout << "Set OK!" << std::endl;
	}
	else
	{
		Error("Wrong command word : ", cmd.c_str());
	}
	return 0;
}

