#ifndef AA_AES_H_2015_12_8
#define AA_AES_H_2015_12_8

/*	* @ author			: Jason
	* @ date			: 12/08/2015
	* @ nearly update	: 12/08/2015
	* @ small version	: 0.1
	* @ summary			: AES���ݼ���ת����
	* @ uncompleted		: all
	* @ untested		:
	* @ tested			:
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
	~Parser();

public:
	bool SetEncoder(const RoundSetting*settingArray, int roundsCount);
	bool SetData(void*data, LWORD length);
	bool SetRound(BYTE round, const RoundSetting setting);

public:
	RoundSetting GetSetting(BYTE round)const;
	BYTE GetRoundCount()const;

public:
	bool Encode(void*dest, void*data = nullptr, LWORD length = 0);
	bool Decode(void*dest, void*data = nullptr, LWORD length = 0);

public:
	const DWORD handle;
};

class ARMYANTLIB_API RoundSetting
{
public:
	RoundSetting();
	~RoundSetting();

public:
	bool SetRoundPassword(const BYTE pwd[16]);
	bool SetByteEncoder(const ByteEncoder bEncoder);
	bool SetLineMoving(BYTE rectWidth = 4);

public:
	ByteEncoder* GetByteEncoder();
	const ByteEncoder* GetByteEncoder()const;
	BYTE GetLineMoving()const;

public:
	const DWORD handle;
};

class ARMYANTLIB_API ByteEncoder
{
public:
	ByteEncoder();
	ByteEncoder&operator=(const ByteEncoder&value);
	~ByteEncoder();

public:
	bool InputData(const BYTE elems[256]);
	bool InputBackData(const BYTE elems[256]);
	bool CopiedFromAnother(const ByteEncoder another);

public:
	bool GetData(BYTE elems[256])const;
	bool GetBackData(BYTE elems[256])const;
	ByteEncoder GetBack()const;

public:
	BYTE&operator[](BYTE src);
	const BYTE operator[](BYTE src)const;
	ByteEncoder operator*()const;

public:
	static const ByteEncoder&GetDefaultEncoder();
	const DWORD handle;
};

}

}

#endif // AA_AES_H_2015_12_8