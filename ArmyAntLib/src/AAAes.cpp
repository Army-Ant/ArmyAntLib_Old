/*  
 * Copyright (c) 2015 ArmyAnt
 * 版权所有 (c) 2015 ArmyAnt
 *
 * Licensed under the BSD License, Version 2.0 (the License); 
 * 本软件使用BSD协议保护, 协议版本:2.0
 * you may not use this file except in compliance with the License. 
 * 使用本开源代码文件的内容, 视为同意协议
 * You can read the license content in the file "ARMYANT.COPYRIGHT.BSD_LICENSE.MD" at the root of this project
 * 您可以在本项目的根目录找到名为"ARMYANT.COPYRIGHT.BSD_LICENSE.MD"的文件, 来阅读协议内容
 * You may also obtain a copy of the License at 
 * 您也可以在此处获得协议的副本:
 * 
 *     http://opensource.org/licenses/BSD-3-Clause
 * 
 * Unless required by applicable law or agreed to in writing, software distributed under the License is distributed on an AS IS BASIS, 
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied. 
 * 除非法律要求或者版权所有者书面同意,本软件在本协议基础上的发布没有任何形式的条件和担保,无论明示的或默许的.
 * See the License for the specific language governing permissions and limitations under the License. 
 * 请在特定限制或语言管理权限下阅读协议
 * This file is the internal source file of this project, is not contained by the closed source release part of this software
 * 本文件为内部源码文件, 不会包含在闭源发布的本软件中
 */

#include "../base/base.hpp"
#include "../include/AAAes.h"
#include "../include/AAClassPrivateHandle.hpp"
#include <boost/random.hpp>
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

	uint8 data[256] = {0};
	uint16 refCount = 1;
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
	boost::mt19937 gen;
	boost::random::uniform_smallint<uint32> r(0, 255);
	boost::variate_generator<boost::mt19937&, boost::uniform_smallint<uint32>>die(gen, r);

	//摇出第一个数
	uint8 start = uint8(die());
	//摇出剩余的数
	for(int i = 1; i < 256; i++)
	{
		uint8 c = uint8(die());
		while(c == start || data[c] > 0)
		{
			if(++c > 255)
				c = 0;
		}
		data[c] = uint8(i);
	}
}

bool ByteEncoder_Private::TurnToBack(bool withCheck/* = false*/)
{
	//存放反转后数据的临时数组
	uint8 tmp[256] = {0};
	if(withCheck)
	{
		//索引为0的数的值，将变为转化后值为0的索引
		uint8 zeropos = this->data[0];
		for(int i = 0; i < 256; i++)
		{
			//如果值为zeropos，则表明另一个索引不为0的数(i)占用该处，这不符合规则
			if(i > 0 && this->data[i] == zeropos)
				return false;
			//如果值不为0，则证明该处已被占用，这不符合规则
			if(tmp[this->data[i]] > 0)
				return false;
			tmp[this->data[i]] = uint8(i);
		}
	}
	else for(int i = 0; i < 256; i++)
	{
		//不检查，单纯转换数据，如果原S盒不符合规则，可能发生数据覆盖等问题
		tmp[this->data[i]] = uint8(i);
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
	AAAssert(byteEncoder_manager[value.handle] != nullptr);
	byteEncoder_manager[value.handle]->refCount++;
}


ByteEncoder::ByteEncoder(uint32 encoderHandle)
	:handle(encoderHandle)
{
	AAAssert(byteEncoder_manager[encoderHandle] != nullptr);
	byteEncoder_manager[encoderHandle]->refCount++;
}

ByteEncoder::~ByteEncoder()
{
	if(--byteEncoder_manager[handle]->refCount <= 0)
		byteEncoder_manager.ReleaseHandle(handle);
}


bool ByteEncoder::InputData(const uint8 elems[256], bool needCheck/* = false*/)
{
	AAAssert(elems != nullptr);
	auto hd = byteEncoder_manager[handle];
	if(needCheck)
	{
		//将元数据拷贝到临时区域，失败时将还原
		uint8 tmp[256];
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


bool ByteEncoder::InputBackData(const uint8 elems[256], bool needCheck/* = false*/)
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
	*const_cast<uint32*>(&this->handle) = another.handle;
	byteEncoder_manager[handle]->refCount++;
	return true;
}


bool ByteEncoder::GetData(uint8 elems[256]) const
{
	AAAssert(elems != nullptr);
	memcpy(elems, byteEncoder_manager[handle]->data, 256);
	return true;
}


bool ByteEncoder::GetBackData(uint8 elems[256]) const
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
	AAAssert(byteEncoder_manager[value.handle] != nullptr);
	AAAssert(CopiedFromAnother(value));
	return *this;
}

uint8& ByteEncoder::operator[](uint8 src)
{
	return byteEncoder_manager[handle]->data[src];
}

const uint8 ByteEncoder::operator[](uint8 src) const
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
	uint8 pwd[16] = {0};
	uint32 encoder = 0xffffffff;
	uint8 rectWidth = 4;
	uint16 refCount = 1;

public:
	~RoundSetting_Private();
	void ResetEncoder();
	inline bool CheckCanDo();

	inline bool ByteEncode(void* dest, const char*src, uint64 length);
	inline bool ByteDecode(void* dest, const char*src, uint64 length);
	static bool ByteEncode(uint32 encoder, void* dest, const char*src, uint64 length);
	static bool ByteDecode(uint32 encoder, void* dest, const char*src, uint64 length);

	inline bool LineMove(void*dest, const char*src, uint64 length);
	inline bool LineMoveBack(void*dest, const char*src, uint64 length);
	static bool LineMove(uint8 rectWidth, void*dest, const char*src, uint64 length, bool isBack = false);
	static bool RowMix(void*dest, const char*src, uint64 length, bool isBack = false);

	inline bool Lock(void*dest, const char*src, uint64 length);
	static bool Lock(void*dest, const char*src, uint64 length, uint8 pwd[16]);

public:
	inline static uint8 BinMul(uint8 x, uint8 y);
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
	return (*(uint64*)(pwd) != 0) && encoder < 0xffffffff;
}

bool RoundSetting_Private::ByteEncode(void* dest, const char*src, uint64 length)
{
	return ByteEncode(encoder, dest, src, length);
}

bool RoundSetting_Private::ByteDecode(void* dest, const char*src, uint64 length)
{
	return ByteDecode(encoder, dest, src, length);
}

bool RoundSetting_Private::RowMix(void*dest, const char*src, uint64 length, bool isBack/* = false*/)
{
	uint8*pdest = static_cast<uint8*>(dest);
	static uint8 len[4][4] = {2,3,1,1,1,2,3,1,1,1,2,3,3,1,1,2};
	static uint8 backLen[4][4] = {14,11,13,9,9,14,11,13,13,9,14,11,11,13,9,14};
	if(isBack)
	{
		memcpy(len, backLen, 16);
	}
	for(uint64 i = 0; i + 16 < length; i += 16)
	{
		for(uint8 j = 0; j < 4; j++)
		{
			for(uint8 k = 0; k < 4; k++)
			{
				pdest[i + j * 4 + k] = BinMul(src[i + j * 4], len[0][k]) ^ BinMul(src[i + j * 4 + 1], len[1][k]) ^ BinMul(src[i + j * 4 + 2], len[2][k]) ^ BinMul(src[i + j * 4 + 3], len[3][k]);
			}
		}
	}
	return true;
}


bool RoundSetting_Private::Lock(void*dest, const char*src, uint64 length)
{
	return Lock(dest, src, length, pwd);
}


bool RoundSetting_Private::Lock(void*dest, const char*src, uint64 length, uint8 pwd[16])
{
	uint8*pdest = static_cast<uint8*>(dest);
	for(uint64 i = 0; i + 16 < length; i += 16)
	{
		for(int j = 0; j < 16; j++)
		{
			pdest[i + j] = src[i + j] ^ pwd[j];
		}
	}
	return true;
}

uint8 RoundSetting_Private::BinMul(uint8 x, uint8 y)
{
	if(y % 2 == 0)
	{
		return uint8(x << (y / 2));
	}
	return x ^ uint8(x << (y / 2));
}

bool RoundSetting_Private::LineMove(uint8 rectWidth, void*dest, const char*src, uint64 length, bool isBack /*= false*/)
{
	auto GetRound = [=](uint8 line, uint8 num)->uint8
	{
		if(line + num >= rectWidth)
			return uint8(num + line - rectWidth);
		else
			return uint8(num + line);
	};
	auto GetBack = [=](uint8 line, uint8 num)->uint8
	{
		if(line + num < 0)
			return uint8(num - line + rectWidth);
		else
			return uint8(num - line);
	};
	uint8*pdest = static_cast<uint8*>(dest);
	uint64 nowPos = 0;
	for(nowPos = 0; nowPos + rectWidth*rectWidth < length; nowPos += rectWidth*rectWidth)
	{
		for(uint8 j = 0; j < rectWidth; j++)
		{
			for(uint8 k = 0; k < rectWidth; k++)
			{
				pdest[nowPos + j*rectWidth + k] = src[nowPos + j*rectWidth + isBack ? GetBack(j, k) : GetRound(j, k)];
			}
		}
	}
	return true;
}

bool RoundSetting_Private::LineMove(void*dest, const char*src, uint64 length)
{
	return LineMove(rectWidth, dest, src, length);
}

bool RoundSetting_Private::LineMoveBack(void*dest, const char*src, uint64 length)
{
	return LineMove(rectWidth, dest, src, length, true);
}

bool RoundSetting_Private::ByteEncode(uint32 encoder, void* dest, const char*src, uint64 length)
{
	auto bhd = byteEncoder_manager[encoder];
	uint8* pdest = static_cast<uint8*>(dest);
	for(uint64 i = 0; i < length; i++)
	{
		pdest[i] = bhd->data[src[i]];
	}
	return true;
}

bool RoundSetting_Private::ByteDecode(uint32 encoder, void* dest, const char*src, uint64 length)
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
	AAAssert(roundSetting_manager[setting.handle] != nullptr);
	roundSetting_manager[setting.handle]->refCount++;
}


RoundSetting::RoundSetting(uint32 settingHandle)
	:handle(settingHandle)
{
	AAAssert(roundSetting_manager[settingHandle] != nullptr);
	roundSetting_manager[settingHandle]->refCount++;
}

RoundSetting::~RoundSetting()
{
	if(--roundSetting_manager[handle]->refCount <= 0)
		roundSetting_manager.ReleaseHandle(handle);
}

bool RoundSetting::SetRoundPassword(const uint8 pwd[16])
{
	AAAssert(pwd != nullptr);
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

bool RoundSetting::SetLineMoving(uint8 rectWidth /*= 4*/)
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

uint8 RoundSetting::GetLineMoving() const
{
	return roundSetting_manager[handle]->rectWidth;
}

bool RoundSetting::Encode(void* dest, const char*src, uint64 length, bool withRowMix /*= true*/)
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

bool RoundSetting::Decode(void* dest, const char*src, uint64 length, bool withRowMix /*= true*/)
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
	std::vector<uint32> settings;
	void* data = nullptr;
	uint64 length = 0;
	uint8 fpwd[16] = {0};

	uint16 refCount = 1;

public:
	inline static uint32 GetGPwd(uint32 src, uint8 rank);
};

uint32 Parser_Private::GetGPwd(uint32 src, uint8 rank)
{
	AAAssert(rank > 3 && rank < 44);
	if(src >> 31 > 0)
		src = (src << 1) + 1;
	else src = src << 1;
	uint8 tmp[4] = {0};
	memcpy(tmp, &src, 4);
	static uint8 len[4][4] = {2,3,1,1,1,2,3,1,1,1,2,3,3,1,1,2};
	for(uint8 k = 0; k < 4; k++)
	{
		tmp[k] = RoundSetting_Private::BinMul(uint8(src / 65536 / 256), len[0][k]) ^ RoundSetting_Private::BinMul(uint8(src / 65536 % 256), len[1][k]) ^ RoundSetting_Private::BinMul(uint8(src / 256 % 65536), len[2][k]) ^ RoundSetting_Private::BinMul(uint8(src % 256), len[3][k]);
	}
	src = tmp[0] * 65536 * 256 + tmp[1] * 65536 + tmp[2] * 256 + tmp[3];
	static uint8 RC[] = {0, 1, 2, 4, 8, 16, 32, 64, 128, 127, 54};
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


bool Parser::SetFirstlyPwd(uint8 pwd[16])
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


bool Parser::SetRound(uint8 round, const RoundSetting setting)
{
	if(0 >= roundSetting_manager[parserManager[handle]->settings[round]]->refCount--)
		roundSetting_manager.ReleaseHandle(parserManager[handle]->settings[round]);
	parserManager[handle]->settings[round] = setting.handle;
	roundSetting_manager[parserManager[handle]->settings[round]]->refCount++;
	return true;
}


bool Parser::SetData(void*data, uint64 length)
{
	auto hd = parserManager[handle];
	hd->data = data;
	hd->length = length;
	return true;
}


RoundSetting Parser::GetSetting(uint8 round) const
{
	return RoundSetting(parserManager[handle]->settings[round]);
}


uint8 Parser::GetRoundCount() const
{
	return uint8(parserManager[handle]->settings.size());
}


bool Parser::Encode(void*dest, void*data /*= nullptr*/, uint64 length /*= 0*/)
{
	auto hd = parserManager[handle];
	if(!RoundSetting_Private::Lock(dest, static_cast<char*>(data), length, hd->fpwd))
		return false;
	int rounds = GetRoundCount();
	if(data == nullptr)
		data = hd->data;
	if(length == 0)
		length = hd->length;
	for(int i = 0; i < rounds - 1; i++)
	{
		if(!RoundSetting(hd->settings[i]).Encode(dest, static_cast<char*>(data), length))
			return false;
	}
	return RoundSetting(hd->settings[rounds - 1]).Encode(dest, static_cast<char*>(data), length, false);
}


bool Parser::Decode(void*dest, void*data /*= nullptr*/, uint64 length /*= 0*/)
{
	auto hd = parserManager[handle];
	auto rounds = GetRoundCount();
	if(data == nullptr)
		data = hd->data;
	if(length == 0)
		length = hd->length;
	if(!RoundSetting(hd->settings[rounds - 1]).Decode(dest, static_cast<char*>(data), length, false))
		return false;
	for(int i = rounds - 2; i >= 0; i--)
	{
		if(!RoundSetting(hd->settings[i]).Decode(dest, static_cast<char*>(data), length))
			return false;
	}
	return RoundSetting_Private::Lock(dest, static_cast<char*>(data), length, hd->fpwd);
}


bool Parser::GetExtendPwds(uint8 initPwd[16], uint8 gettedPwd[176])
{
	uint32 passwords[44];
	for(int i = 0; i < 4; i++)
	{
		passwords[i] = initPwd[i] * 65536 * 256 + initPwd[i + 4] * 65536 + initPwd[i + 8] * 256 + initPwd[i + 12];
	}
	for(uint8 i = 4; i < 44; i++)
	{
		if(i % 4 == 0)
			passwords[i] = passwords[i - 4] ^ Parser_Private::GetGPwd(passwords[uint8(i - 1)], i);
		else
			passwords[i] = passwords[i - 4] ^ passwords[i - 1];
	}
	memcpy(gettedPwd, passwords, 176);
	return true;
}


Parser Parser::GetQuickParser(uint8 initPwd[16], uint8 byteEncoder[256] /*= nullptr*/)
{
	Parser ret;
	uint8 pwds[176] = {0};
	AAAssert(GetExtendPwds(initPwd, pwds));
	AAAssert(ret.SetFirstlyPwd(pwds));
	RoundSetting setting[10];
	ByteEncoder bencoder;
	if(byteEncoder == nullptr)
		bencoder = ByteEncoder::GetRandomEncoder();
	else
		AAAssert(bencoder.InputData(byteEncoder, true));
	for(int i = 0; i < 10; i++)
	{
		AAAssert(setting[i].SetByteEncoder(bencoder));
		AAAssert(setting[i].SetRoundPassword(pwds + 16 + 16 * i));
	}
	AAAssert(ret.SetRounds(setting, 10));
	return ret;
	//这里返回时会不会导致数据被销毁？需要谨慎定义赋值运算符和拷贝构造函数
}

}

}