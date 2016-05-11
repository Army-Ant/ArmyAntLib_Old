#include "main.h"
#include "constants.h"

inline bool DoStr(bool funcRes, const char* doMessage)
{
	if(funcRes)
		std::cout << doMessage << g_successfulStr << std::endl;
	else
	{
		SetConsoleTextAttribute(GetStdHandle(STD_ERROR_HANDLE), 0x0064);
		std::cerr << doMessage << g_failureStr << std::endl;
		std::cerr << "errno : " << errno << std::endl;
		_set_errno(0);
		SetConsoleTextAttribute(GetStdHandle(STD_ERROR_HANDLE), 0x000F);
	}
	return funcRes;
}

#define CHECK_EXIT_SUCCESS(funcRes,doMessage) do{if(!DoStr(funcRes,doMessage)) return;else break;}while(true)

int main(int argc, char* argv[])
{
	char choose = 0;
	SetConsoleTextAttribute(GetStdHandle(STD_ERROR_HANDLE), 0x000F);
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

void ExitTest()
{
}

void FileStreamTest()
{
	static File*file = nullptr;
	static const uint16 memTestLen = 2048;
	static uint8 memoryTest[memTestLen] = {0};
	static bool memInit = false;

	const uint16 bufLen = 2048;
	char buf[bufLen] = "";

	if(!memInit)
	{
		memInit = true;
		strcpy(reinterpret_cast<char*>(memoryTest), "I am a small sentence of memory test !\n\tPlease amazing me !");
	}

	file = new File();
	CHECK_EXIT_SUCCESS(file->SetStreamMode(false), "The file stream created");
	CHECK_EXIT_SUCCESS(!file->IsOpened(), "The stream dynamic checked");
	CHECK_EXIT_SUCCESS(!file->IsOpened(false), "The stream without dynamic checked");

	auto testfunc = [&]()
	{
		CHECK_EXIT_SUCCESS(file->IsOpened(), "The stream dynamic checked");
		CHECK_EXIT_SUCCESS(file->IsOpened(false), "The stream without dynamic checked");
		std::cout << "The length of the stream is " << file->GetLength() << std::endl;
		std::cout << "The source name of the stream is " << file->GetSourceName() << std::endl;
		std::cout << "The reading pointer of the stream is " << file->GetPos() << std::endl;
		CHECK_EXIT_SUCCESS(0 < file->Read(buf), "The stream read");
		std::cout << "Read context is :" << std::endl;
		std::cout << buf << std::endl;
		std::cout << "The reading pointer of the stream is " << file->GetPos() << std::endl;
		CHECK_EXIT_SUCCESS(file->MovePos(file->GetPos() + 1), "The stream pointer position move next");
		std::cout << "The reading pointer of the stream is " << file->GetPos() << std::endl;
		CHECK_EXIT_SUCCESS(file->MovePos(file->GetPos() - 1), "The stream pointer position move back");
		std::cout << "The reading pointer of the stream is " << file->GetPos() << std::endl;
		CHECK_EXIT_SUCCESS(file->MovePos(0), "The stream pointer position move to beginning position");
		std::cout << "The reading pointer of the stream is " << file->GetPos() << std::endl;
		switch(file->NowType())
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
		}
		ZeroMemory(buf, bufLen);
		CHECK_EXIT_SUCCESS(0 < file->Read(buf, uint8('\n')), "The stream line read");
		std::cout << "Read context is :" << std::endl;
		std::cout << buf << std::endl;
		std::cout << "The reading pointer of the stream is " << file->GetPos() << std::endl;
		ZeroMemory(buf, bufLen);
		strcpy(buf, "*** Writing Test ***");
		std::cout << "Writing context is :" << std::endl;
		std::cout << buf << std::endl;
		CHECK_EXIT_SUCCESS(0 < file->Write(buf), "The stream write");
		std::cout << "The reading pointer of the stream is " << file->GetPos() << std::endl;
		CHECK_EXIT_SUCCESS(file->MovePos(0), "The stream pointer position move to beginning position");
		std::cout << "The reading pointer of the stream is " << file->GetPos() << std::endl;
		ZeroMemory(buf, bufLen);
		CHECK_EXIT_SUCCESS(0 < file->Read(buf), "The stream read");
		std::cout << "Read context is :" << std::endl;
		std::cout << buf << std::endl;

		CHECK_EXIT_SUCCESS(file->Close(), "The stream closed");
		CHECK_EXIT_SUCCESS(!file->IsOpened(), "The stream dynamic checked");
		CHECK_EXIT_SUCCESS(!file->IsOpened(false), "The stream without dynamic checked");
	};

	//CHECK_EXIT_SUCCESS(file->Open("test.txt"), "The file 'test.txt' opened");					// disk file passed test
	//testfunc();
	//CHECK_EXIT_SUCCESS(file->Open(memoryTest, memTestLen - 1), "The memory opened");			// memory passed test
	//testfunc();
	CHECK_EXIT_SUCCESS(file->Open("jason_1", ""), "The pipe 'jason_1' opened");
	testfunc();
	CHECK_EXIT_SUCCESS(file->Open(1), "The com 1 opened");
	testfunc();
	//EXIT_SUCCESS(file->Open("test.txt"), "The network opened");
	//testfunc();

	CHECK_EXIT_SUCCESS(AA_SAFE_DEL(file) == nullptr, "The file stream destroyed");
}


void AESTest()
{/*
	static uint8 enc[16] = {'?','z','j','l','j',0xc,'y','1',1,'2',9,'0',1,'1',2,'!'};
	static auto parser = AES::Parser::GetQuickParser(enc);
	static File file;
	static bool isEncoded = false;
	if(cmd == "chbenc")
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
	}*/
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
	static TripleMap<int, float, std::string> map;
}

void TreeTest()
{
	static Tree<std::string> tr(&TreeNode<std::string>(std::string("root"), 0));
}

void DigraphTest()
{
}

void StateMachineTest()
{
}

void NeuronTest()
{/*
	static NeuronAlgorithm<> neuron([](double input) { return input * 2; }, 0.0);
	if(cmd == "input")
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
	}*/
}

