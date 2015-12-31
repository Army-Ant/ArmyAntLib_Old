#include "../include/AAAes.h"
#include "../include/AAClassPrivateHandle.hpp"
#include <ctime>
#include <cstdlib>
#include <memory.h>

namespace ArmyAnt {

namespace AES {

class ByteEncoder_Private;
class RoundSetting_Private;
class Parser_Private;

static ClassPrivateHandleManager<ByteEncoder, ByteEncoder_Private> byteEncoder_manager;
static ClassPrivateHandleManager<RoundSetting, RoundSetting_Private> roundSetting_manager;
static ClassPrivateHandleManager<Parser, Parser_Private> parserManager;

/***************** Code : ByteEncoder *******************************************************************/

class ByteEncoder_Private
{
public:
	ByteEncoder_Private();
	~ByteEncoder_Private();

public:
	//生成一个随机的S盒子
	void MakeRandomSBox();
	//转化为反盒子
	bool TurnToBack(bool withCheck = false);
	//输出一个带有反盒子的新内部类，该类不被管理器所管理
	ByteEncoder_Private GetBackDatas();
	//验证当前的盒子是否为一一映射
	bool CheckObayRule();

	BYTE data[256] = {0};
	WORD refCount = 1;
};

ByteEncoder_Private::ByteEncoder_Private()
{
}

ByteEncoder_Private::~ByteEncoder_Private()
{
}

void ByteEncoder_Private::MakeRandomSBox()
{
	//清空数据
	memset(data, 0, 256);
	//重置随机种子
	srand(int(time(nullptr)));
	//摇出第一个数
	BYTE start = rand() % 256;
	//摇出剩余的数
	for(int i = 1; i < 256; i++)
	{
		if(i % 16 == 0)
			srand(int(time(nullptr)));
		BYTE c = rand() % 256;
		while(c == start || data[c] > 0)
		{
			if(++c > 255)
				c = 0;
		}
		data[c] = BYTE(i);
	}
}

bool ByteEncoder_Private::TurnToBack(bool withCheck/* = false*/)
{
	//存放反转后数据的临时数组
	BYTE tmp[256] = {0};
	if(withCheck)
	{
		//索引为0的数的值，将变为转化后值为0的索引
		BYTE zeropos = this->data[0];
		for(int i = 0; i < 256; i++)
		{
			//如果值为zeropos，则表明另一个索引不为0的数(i)占用该处，这不符合规则
			if(i > 0 && this->data[i] == zeropos)
				return false;
			//如果值不为0，则证明该处已被占用，这不符合规则
			if(tmp[this->data[i]] > 0)
				return false;
			tmp[this->data[i]] = BYTE(i);
		}
	}
	else for(int i = 0; i < 256; i++)
	{
		//不检查，单纯转换数据，如果原S盒不符合规则，可能发生数据覆盖等问题
		tmp[this->data[i]] = i;
	}
	//更新数据
	memcpy(this->data, tmp, 256);
	return true;
}


ByteEncoder_Private ByteEncoder_Private::GetBackDatas()
{
	ByteEncoder_Private ret;
	memcpy(&ret, this, sizeof(ByteEncoder_Private));
	ret.TurnToBack();
	return ret;
}

bool ByteEncoder_Private::CheckObayRule()
{
	//通过生成反转盒是否成功，来判断元数据是否符合规则
	auto ret = new ByteEncoder_Private();
	memcpy(ret, this, sizeof(ByteEncoder_Private));
	auto res = ret->TurnToBack(true);
	delete ret;
	return res;
}

ByteEncoder::ByteEncoder()
	:handle(byteEncoder_manager.GetHandle(this))
{
}


ByteEncoder::ByteEncoder(const ByteEncoder&value)
	: handle(value.handle)
{
	Assert(byteEncoder_manager[value.handle] != nullptr);
	byteEncoder_manager[value.handle]->refCount++;
}


ByteEncoder::ByteEncoder(DWORD encoderHandle)
	:handle(encoderHandle)
{
	Assert(byteEncoder_manager[encoderHandle] != nullptr);
	byteEncoder_manager[encoderHandle]->refCount++;
}

ByteEncoder::~ByteEncoder()
{
	if(--byteEncoder_manager[handle]->refCount <= 0)
		byteEncoder_manager.ReleaseHandle(handle);
}


bool ByteEncoder::InputData(const BYTE elems[256], bool needCheck/* = false*/)
{
	Assert(elems != nullptr);
	auto hd = byteEncoder_manager[handle];
	if(needCheck)
	{
		//将元数据拷贝到临时区域，失败时将还原
		BYTE tmp[256];
		memcpy(tmp, hd->data, 256);
		memcpy(hd->data, elems, 256);
		//验证是否符合规则
		if(hd->CheckObayRule())
			return true;
		memcpy(hd->data, tmp, 256);
		return false;
	}
	else
	{
		//不验证，仅输入数据
		memcpy(hd->data, elems, 256);
	}
	return true;
}


bool ByteEncoder::InputBackData(const BYTE elems[256], bool needCheck/* = false*/)
{
	//输入数据，然后求反
	if(!InputData(elems, needCheck))
		return false;
	return byteEncoder_manager[handle]->TurnToBack();
}


bool ByteEncoder::CopiedFromAnother(const ByteEncoder another, bool needCheck /*= false*/)
{
	//找不到元数据
	if(byteEncoder_manager[another.handle] == nullptr)
		return false;
	//要求检查，而元数据不符合规则
	if(needCheck&&!byteEncoder_manager[another.handle]->CheckObayRule())
		return false;
	//解除原来的本数据类，引用计数器-1
	if(--byteEncoder_manager[handle]->refCount <= 0)
		byteEncoder_manager.ReleaseHandle(handle);
	//绑定目标数据类的句柄，引用计数器+1
	*(DWORD*)(&this->handle) = another.handle;
	byteEncoder_manager[handle]->refCount++;
	return true;
}


bool ByteEncoder::GetData(BYTE elems[256]) const
{
	Assert(elems != nullptr);
	memcpy(elems, byteEncoder_manager[handle]->data, 256);
	return true;
}


bool ByteEncoder::GetBackData(BYTE elems[256]) const
{
	ByteEncoder_Private tmp;
	memcpy(&tmp, byteEncoder_manager[handle], sizeof(ByteEncoder_Private));
	tmp.TurnToBack();
	memcpy(elems, tmp.data, 256);
	return true;
}


ByteEncoder ByteEncoder::GetBack() const
{
	ByteEncoder ret;
	memcpy(byteEncoder_manager[ret.handle]->data, byteEncoder_manager[handle]->data, 256);
	byteEncoder_manager[ret.handle]->TurnToBack();
	return ret;
}

ByteEncoder& ByteEncoder::operator= (const ByteEncoder&value)
{
	Assert(byteEncoder_manager[value.handle] != nullptr);
	Assert(CopiedFromAnother(value));
	return *this;
}

BYTE& ByteEncoder::operator[](BYTE src)
{
	return byteEncoder_manager[handle]->data[src];
}

const BYTE ByteEncoder::operator[](BYTE src) const
{
	return byteEncoder_manager[handle]->data[src];
}

ByteEncoder ByteEncoder::operator*() const
{
	return GetBack();
}

const ByteEncoder ByteEncoder::GetRandomEncoder()
{
	ByteEncoder ret;
	byteEncoder_manager[ret.handle]->MakeRandomSBox();
	return ret;
}

/***************** Code : RoundSetting ******************************************************************/

class RoundSetting_Private
{
public:
	BYTE pwd[16] = {0};
	DWORD encoder = 0xffffffff;
	BYTE rectWidth = 4;
	WORD refCount = 1;

public:
	~RoundSetting_Private();
	void ResetEncoder();
	inline bool CheckCanDo();

	bool ByteEncode(void* dest, const char*src, LWORD length);
	bool ByteDecode(void* dest, const char*src, LWORD length);
	static bool ByteEncode(DWORD encoder, void* dest, const char*src, LWORD length);
	static bool ByteDecode(DWORD encoder, void* dest, const char*src, LWORD length);

	bool LineMove(void*dest, const char*src, LWORD length);
	bool LineMoveBack(void*dest, const char*src, LWORD length);
	static bool LineMove(BYTE rectWidth, void*dest, const char*src, LWORD length, bool isBack = false);
	static bool RowMix(void*dest, const char*src, LWORD length, bool isBack = false);

	bool Lock(void*dest, const char*src, LWORD length);
	static bool Lock(void*dest, const char*src, LWORD length, BYTE pwd[16]);

public:
	inline static BYTE BinMul(BYTE x, BYTE y);
};

RoundSetting_Private::~RoundSetting_Private()
{
	ResetEncoder();
}

void RoundSetting_Private::ResetEncoder()
{
	if(encoder < 0xffffffff)
	{
		if(--byteEncoder_manager[encoder]->refCount <= 0)
			byteEncoder_manager.ReleaseHandle(encoder);
	}
	encoder = 0xffffffff;
}

bool RoundSetting_Private::CheckCanDo()
{
	return (*(LWORD*)(pwd) != 0) && encoder < 0xffffffff;
}

bool RoundSetting_Private::ByteEncode(void* dest, const char*src, LWORD length)
{
	return ByteEncode(encoder, dest, src, length);
}

bool RoundSetting_Private::ByteDecode(void* dest, const char*src, LWORD length)
{
	return ByteDecode(encoder, dest, src, length);
}

bool RoundSetting_Private::RowMix(void*dest, const char*src, LWORD length, bool isBack/* = false*/)
{
	BYTE*pdest = reinterpret_cast<BYTE*>(dest);
	static BYTE len[4][4] = {2,3,1,1,1,2,3,1,1,1,2,3,3,1,1,2};
	static BYTE backLen[4][4] = {14,11,13,9,9,14,11,13,13,9,14,11,11,13,9,14};
	if(isBack)
	{
		memcpy(len, backLen, 16);
	}
	for(LWORD i = 0; i + 16 < length; i += 16)
	{
		for(BYTE j = 0; j < 4; j++)
		{
			for(BYTE k = 0; k < 4; k++)
			{
				pdest[i + j * 4 + k] = BinMul(src[i + j * 4], len[0][k]) ^ BinMul(src[i + j * 4 + 1], len[1][k]) ^ BinMul(src[i + j * 4 + 2], len[2][k]) ^ BinMul(src[i + j * 4 + 3], len[3][k]);
			}
		}
	}
	return true;
}


bool RoundSetting_Private::Lock(void*dest, const char*src, LWORD length)
{
	return Lock(dest, src, length, pwd);
}


bool RoundSetting_Private::Lock(void*dest, const char*src, LWORD length, BYTE pwd[16])
{
	BYTE*pdest = reinterpret_cast<BYTE*>(dest);
	for(LWORD i = 0; i + 16 < length; i += 16)
	{
		for(int j = 0; j < 16; j++)
		{
			pdest[i + j] = src[i + j] ^ pwd[j];
		}
	}
	return true;
}

BYTE RoundSetting_Private::BinMul(BYTE x, BYTE y)
{
	if(y % 2 == 0)
	{
		return BYTE(x << (y / 2));
	}
	return x ^ BYTE(x << (y / 2));
}

bool RoundSetting_Private::LineMove(BYTE rectWidth, void*dest, const char*src, LWORD length, bool isBack /*= false*/)
{
	auto GetRound = [=](BYTE line, BYTE num)->BYTE
	{
		if(line + num >= rectWidth)
			return BYTE(num + line - rectWidth);
		else
			return BYTE(num + line);
	};
	auto GetBack = [=](BYTE line, BYTE num)->BYTE
	{
		if(line + num < 0)
			return BYTE(num - line + rectWidth);
		else
			return BYTE(num - line);
	};
	BYTE*pdest = reinterpret_cast<BYTE*>(dest);
	LWORD nowPos = 0;
	for(nowPos = 0; nowPos + rectWidth*rectWidth < length; nowPos += rectWidth*rectWidth)
	{
		for(BYTE j = 0; j < rectWidth; j++)
		{
			for(BYTE k = 0; k < rectWidth; k++)
			{
				pdest[nowPos + j*rectWidth + k] = src[nowPos + j*rectWidth + isBack ? GetBack(j, k) : GetRound(j, k)];
			}
		}
	}
	return true;
}

bool RoundSetting_Private::LineMove(void*dest, const char*src, LWORD length)
{
	return LineMove(rectWidth, dest, src, length);
}

bool RoundSetting_Private::LineMoveBack(void*dest, const char*src, LWORD length)
{
	return LineMove(rectWidth, dest, src, length, true);
}

bool RoundSetting_Private::ByteEncode(DWORD encoder, void* dest, const char*src, LWORD length)
{
	auto bhd = byteEncoder_manager[encoder];
	BYTE* pdest = reinterpret_cast<BYTE*>(dest);
	for(LWORD i = 0; i < length; i++)
	{
		pdest[i] = bhd->data[src[i]];
	}
	return true;
}

bool RoundSetting_Private::ByteDecode(DWORD encoder, void* dest, const char*src, LWORD length)
{
	auto bhd = byteEncoder_manager.GetHandle(nullptr);
	memcpy(byteEncoder_manager[bhd]->data, byteEncoder_manager[encoder]->data, 256);
	byteEncoder_manager[bhd]->TurnToBack();
	bool ret = ByteEncode(bhd, dest, src, length);
	byteEncoder_manager.ReleaseHandle(bhd);
	return ret;
}

RoundSetting::RoundSetting()
	:handle(roundSetting_manager.GetHandle(this))
{

}

RoundSetting::RoundSetting(const RoundSetting&setting)
	: handle(setting.handle)
{
	Assert(roundSetting_manager[setting.handle] != nullptr);
	roundSetting_manager[setting.handle]->refCount++;
}


RoundSetting::RoundSetting(DWORD settingHandle)
	:handle(settingHandle)
{
	Assert(roundSetting_manager[settingHandle] != nullptr);
	roundSetting_manager[settingHandle]->refCount++;
}

RoundSetting::~RoundSetting()
{
	if(--roundSetting_manager[handle]->refCount <= 0)
		roundSetting_manager.ReleaseHandle(handle);
}

bool RoundSetting::SetRoundPassword(const BYTE pwd[16])
{
	Assert(pwd != nullptr);
	memcpy(roundSetting_manager[handle]->pwd, pwd, 16);
	return true;
}

bool RoundSetting::SetByteEncoder(const ByteEncoder bEncoder)
{
	if(!byteEncoder_manager[bEncoder.handle]->CheckObayRule())
		return false;
	auto hd = roundSetting_manager[handle];
	hd->ResetEncoder();
	hd->encoder = bEncoder.handle;
	byteEncoder_manager[bEncoder.handle]->refCount++;
	return true;
}

bool RoundSetting::SetLineMoving(BYTE rectWidth /*= 4*/)
{
	if(rectWidth < 4)
		return false;
	roundSetting_manager[handle]->rectWidth = rectWidth;
	return true;
}

ByteEncoder RoundSetting::GetByteEncoder()
{
	auto ret = ByteEncoder(roundSetting_manager[handle]->encoder);
	return ret;
}


const ByteEncoder RoundSetting::GetByteEncoder() const
{
	auto ret = ByteEncoder(roundSetting_manager[handle]->encoder);
	return ret;
}

BYTE RoundSetting::GetLineMoving() const
{
	return roundSetting_manager[handle]->rectWidth;
}

bool RoundSetting::Encode(void* dest, const char*src, LWORD length, bool withRowMix /*= true*/)
{
	auto hd = roundSetting_manager[handle];
	if(dest == nullptr || src == nullptr || length < hd->rectWidth*hd->rectWidth)
		return false;
	if(!hd->ByteEncode(dest, src, length))
		return false;
	if(!hd->LineMove(dest, src, length))
		return false;
	if(withRowMix&&!hd->RowMix(dest, src, length))
		return false;
	return hd->Lock(dest, src, length);
}

bool RoundSetting::Decode(void* dest, const char*src, LWORD length, bool withRowMix /*= true*/)
{
	auto hd = roundSetting_manager[handle];
	if(dest == nullptr || src == nullptr || length < 16)
		return false;
	if(!hd->Lock(dest, src, length))
		return false;
	if(!withRowMix&&!hd->RowMix(dest, src, length, true))
		return false;
	if(!hd->LineMoveBack(dest, src, length))
		return false;
	return hd->ByteDecode(dest, src, length);
}

/********************* Code : Parser ********************************************************************/

class Parser_Private
{
public:
	std::vector<DWORD> settings;
	void* data = nullptr;
	LWORD length = 0;
	BYTE fpwd[16] = {0};

	WORD refCount = 1;

public:
	inline static DWORD GetGPwd(DWORD src, BYTE rank);
};

DWORD Parser_Private::GetGPwd(DWORD src, BYTE rank)
{
	Assert(rank > 3 && rank < 44);
	if(src >> 31 > 0)
		src = (src << 1) + 1;
	else src = src << 1;
	BYTE tmp[4] = {0};
	memcpy(tmp, &src, 4);
	static BYTE len[4][4] = {2,3,1,1,1,2,3,1,1,1,2,3,3,1,1,2};
	for(BYTE k = 0; k < 4; k++)
	{
		tmp[k] = RoundSetting_Private::BinMul(BYTE(src / 65536 / 256), len[0][k]) ^ RoundSetting_Private::BinMul(BYTE(src / 65536 % 256), len[1][k]) ^ RoundSetting_Private::BinMul(BYTE(src / 256 % 65536), len[2][k]) ^ RoundSetting_Private::BinMul(BYTE(src % 256), len[3][k]);
	}
	src = tmp[0] * 65536 * 256 + tmp[1] * 65536 + tmp[2] * 256 + tmp[3];
	static BYTE RC[] = {0, 1, 2, 4, 8, 16, 32, 64, 128, 127, 54};
	return src ^ (RC[rank / 4]);
}

Parser::Parser()
	:handle(parserManager.GetHandle(this))
{
}


Parser::Parser(const Parser&value)
	: handle(value.handle)
{
	parserManager[handle]->refCount++;
}

Parser::~Parser()
{
	if(--parserManager[handle]->refCount <= 0)
		parserManager.ReleaseHandle(handle);
}


bool Parser::SetFirstlyPwd(BYTE pwd[16])
{
	memcpy(parserManager[handle]->fpwd, pwd, 16);
	return true;
}

bool Parser::SetRounds(const RoundSetting settingArray[], int roundsCount)
{
	auto hd = parserManager[handle];
	for(int i = 0; i < roundsCount; i++)
	{
		if(roundSetting_manager[settingArray[i].handle] != nullptr)
		{
			roundSetting_manager[settingArray[i].handle]->refCount++;
			hd->settings.push_back(settingArray[i].handle);
		}
	}
	return true;
}


bool Parser::SetRound(BYTE round, const RoundSetting setting)
{
	if(0 >= roundSetting_manager[parserManager[handle]->settings[round]]->refCount--)
		roundSetting_manager.ReleaseHandle(parserManager[handle]->settings[round]);
	parserManager[handle]->settings[round] = setting.handle;
	roundSetting_manager[parserManager[handle]->settings[round]]->refCount++;
	return true;
}


bool Parser::SetData(void*data, LWORD length)
{
	auto hd = parserManager[handle];
	hd->data = data;
	hd->length = length;
	return true;
}


RoundSetting Parser::GetSetting(BYTE round) const
{
	return RoundSetting(parserManager[handle]->settings[round]);
}


BYTE Parser::GetRoundCount() const
{
	return BYTE(parserManager[handle]->settings.size());
}


bool Parser::Encode(void*dest, void*data /*= nullptr*/, LWORD length /*= 0*/)
{
	auto hd = parserManager[handle];
	if(!RoundSetting_Private::Lock(dest, reinterpret_cast<char*>(data), length, hd->fpwd))
		return false;
	int rounds = GetRoundCount();
	if(data == nullptr)
		data = hd->data;
	if(length == 0)
		length = hd->length;
	for(int i = 0; i < rounds - 1; i++)
	{
		if(!RoundSetting(hd->settings[i]).Encode(dest, reinterpret_cast<char*>(data), length))
			return false;
	}
	return RoundSetting(hd->settings[rounds - 1]).Encode(dest, reinterpret_cast<char*>(data), length, false);
}


bool Parser::Decode(void*dest, void*data /*= nullptr*/, LWORD length /*= 0*/)
{
	auto hd = parserManager[handle];
	auto rounds = GetRoundCount();
	if(data == nullptr)
		data = hd->data;
	if(length == 0)
		length = hd->length;
	if(!RoundSetting(hd->settings[rounds - 1]).Decode(dest, reinterpret_cast<char*>(data), length, false))
		return false;
	for(int i = rounds - 2; i >= 0; i--)
	{
		if(!RoundSetting(hd->settings[i]).Decode(dest, reinterpret_cast<char*>(data), length))
			return false;
	}
	return RoundSetting_Private::Lock(dest, reinterpret_cast<char*>(data), length, hd->fpwd);
}


bool Parser::GetExtendPwds(BYTE initPwd[16], BYTE gettedPwd[176])
{
	DWORD passwords[44];
	for(int i = 0; i < 4; i++)
	{
		passwords[i] = initPwd[i] * 65536 * 256 + initPwd[i + 4] * 65536 + initPwd[i + 8] * 256 + initPwd[i + 12];
	}
	for(BYTE i = 4; i < 44; i++)
	{
		if(i % 4 == 0)
			passwords[i] = passwords[i - 4] ^ Parser_Private::GetGPwd(passwords[BYTE(i - 1)], i);
		else
			passwords[i] = passwords[i - 4] ^ passwords[i - 1];
	}
	memcpy(gettedPwd, passwords, 176);
	return true;
}


Parser Parser::GetQuickParser(BYTE initPwd[16], BYTE byteEncoder[256] /*= nullptr*/)
{
	Parser ret;
	BYTE pwds[176] = {0};
	Assert(GetExtendPwds(initPwd, pwds));
	Assert(ret.SetFirstlyPwd(pwds));
	RoundSetting setting[10];
	ByteEncoder bencoder;
	if(byteEncoder == nullptr)
		bencoder = ByteEncoder::GetRandomEncoder();
	else
		Assert(bencoder.InputData(byteEncoder, true));
	for(int i = 0; i < 10; i++)
	{
		Assert(setting[i].SetByteEncoder(bencoder));
		Assert(setting[i].SetRoundPassword(pwds + 16 + 16 * i));
	}
	Assert(ret.SetRounds(setting, 10));
	return ret;
	//这里返回时会不会导致数据被销毁？需要谨慎定义赋值运算符和拷贝构造函数
}

}

}