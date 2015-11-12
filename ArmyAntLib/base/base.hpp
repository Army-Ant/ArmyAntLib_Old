#ifndef BASE_HPP_2015_11_11
#define BASE_HPP_2015_11_11

#include "../include/AADefine.h"

namespace ArmyAnt {

namespace Infos {

union Version
{
public:
	DWORD ver;
	struct VerChar
	{
		WORD bigVer;
		WORD smallVer;
		WORD patchVer;
		WORD testVer;

		VerChar(WORD bigVer, WORD smallVer, WORD patchVer, WORD testVer)
			:bigVer(bigVer), smallVer(smallVer), patchVer(patchVer), testVer(testVer)
		{
		}
	}sver;

	Version(DWORD ver)
		:ver(ver)
	{
	}
	Version(WORD bigVer, WORD smallVer, WORD patchVer, WORD testVer)
		:sver(bigVer, smallVer, patchVer, testVer)
	{
	}
};

//The version of our library
static const Version version = Version(0, 0, 0, 1);

//The version of boost library we used
static const Version boostVer = Version(1, 59, 0, 0);

}

} // namespace ArmyAnt

#endif // BASE_HPP_2015_11_11
