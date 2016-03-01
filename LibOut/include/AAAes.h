#ifndef AA_AES_H_2015_12_8
#define AA_AES_H_2015_12_8

/*	* @ author			: Jason
	* @ date			: 12/08/2015
	* @ nearly update	: 12/08/2015
	* @ small version	: 0.1
	* @ summary			: AES数据加密转换器
	* @ uncompleted		: 均已完成
	* @ untested		: 编码然后反编码，无法回到原来内容，因此计算结果有误，但是不会crush了。秘钥扩展算法尚未验证正确性
							ByteEncoder单独输入数据并验证，能否顺利完成也尚未验证
	* @ tested			: 函数正确使用，数据和设置录入，转码方阵的验证和反转
	*/

#include "AADefine.h"
#include "AA_start.h"

namespace ArmyAnt {

namespace AES {

class RoundSetting;
class ByteEncoder;

class ARMYANTLIB_API Parser
{
public:
	Parser();
	Parser(const Parser&value);
	~Parser();

public:
	bool SetFirstlyPwd(uint8 pwd[16]);
	bool SetRounds(const RoundSetting settingArray[], int roundsCount);
	bool SetRound(uint8 round, const RoundSetting setting);
	bool SetData(void*data, uint64 length);

public:
	RoundSetting GetSetting(uint8 round)const;
	uint8 GetRoundCount()const;

public:
	bool Encode(void*dest, void*data = nullptr, uint64 length = 0);
	bool Decode(void*dest, void*data = nullptr, uint64 length = 0);

public:
	static bool GetExtendPwds(uint8 initPwd[16], uint8 gettedPwd[176]);
	static Parser GetQuickParser(uint8 initPwd[16], uint8 byteEncoder[256] = nullptr);

public:
	const uint32 handle;

	AA_FORBID_ASSGN_OPR(Parser);
};

class ARMYANTLIB_API RoundSetting
{
public:
	RoundSetting();
	RoundSetting(const RoundSetting&setting);
	RoundSetting(uint32 settingHandle);
	~RoundSetting();

public:
	bool SetRoundPassword(const uint8 pwd[16]);
	bool SetByteEncoder(const ByteEncoder bEncoder);
	bool SetLineMoving(uint8 rectWidth = 4);

public:
	ByteEncoder GetByteEncoder();
	const ByteEncoder GetByteEncoder()const;
	uint8 GetLineMoving()const;

public:
	bool Encode(void* dest, const char*src, uint64 length, bool withRowMix = true);
	bool Decode(void* dest, const char*src, uint64 length, bool withRowMix = true);

public:
	const uint32 handle;

	AA_FORBID_ASSGN_OPR(RoundSetting);
};

class ARMYANTLIB_API ByteEncoder
{
public:
	ByteEncoder();
	ByteEncoder(const ByteEncoder&value);
	ByteEncoder(uint32 encoderHandle);
	ByteEncoder&operator=(const ByteEncoder&value);
	~ByteEncoder();

public:
	bool InputData(const uint8 elems[256], bool needCheck = false);
	bool InputBackData(const uint8 elems[256], bool needCheck = false);
	bool CopiedFromAnother(const ByteEncoder another, bool needCheck = false);

public:
	bool GetData(uint8 elems[256])const;
	bool GetBackData(uint8 elems[256])const;
	ByteEncoder GetBack()const;

public:
	uint8&operator[](uint8 src);
	const uint8 operator[](uint8 src)const;
	ByteEncoder operator*()const;

public:
	static const ByteEncoder GetRandomEncoder();
	const uint32 handle;
};

}

}

#endif // AA_AES_H_2015_12_8