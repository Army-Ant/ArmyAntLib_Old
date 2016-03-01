#ifndef BASE_HPP_2015_11_11
#define BASE_HPP_2015_11_11

#include "../include/AADefine.h"

namespace ArmyAnt {

namespace Infos {

union Version
{
public:
	uint32 ver;
	struct VerChar
	{
		uint16 bigVer;
		uint16 smallVer;
		uint16 patchVer;
		uint16 testVer;

		VerChar(uint16 bigVer, uint16 smallVer, uint16 patchVer, uint16 testVer)
			:bigVer(bigVer), smallVer(smallVer), patchVer(patchVer), testVer(testVer)
		{
		}
	}sver;

	Version(uint32 ver)
		:ver(ver)
	{
	}
	Version(uint16 bigVer, uint16 smallVer, uint16 patchVer, uint16 testVer)
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
