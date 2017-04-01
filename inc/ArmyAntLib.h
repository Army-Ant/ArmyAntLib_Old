/*
* Copyright (c) 2015 ArmyAnt
* 版权所有 (c) 2015 ArmyAnt
*
* Licensed under the BSD License, Version 2.0 (the License);
* 本软件使用BSD协议保护, 协议版本:2.0
* you may not use this file except in compliance with the License.
* 使用本开源代码文件的内容, 视为同意协议
* You can read the license content in the file "LICENSE" at the root of this project
* 您可以在本项目的根目录找到名为"LICENSE"的文件, 来阅读协议内容
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
*/

#ifndef ARMYANT_LIB_H_2016_3_19
#define ARMYANT_LIB_H_2016_3_19

#include "AADefine.h"
#include "AA_start.h"

#include <cstring>

namespace ArmyAnt {

namespace Infos {

// define the version class to get the library version
// 定义关于版本的结构，用于获取本库的版本
// TODO: 是否需要附加宏以支持编译时判断库版本？
union ARMYANTLIB_API Version
{
public:
	uint32 ver;
	struct VerChar
	{
		uint8 bigVer;
		uint8 smallVer;
		uint8 patchVer;
		uint8 testVer;

		VerChar(uint8 bigVer, uint8 smallVer, uint8 patchVer, uint8 testVer);
	}sver;

	Version(uint32 ver);
	Version(uint8 bigVer, uint8 smallVer, uint8 patchVer, uint8 testVer);

public:
	// The version of this library and other referenced libraries
	// 获取本库或者所引用的第三方库的版本号
	// Get this library's version without param
	// 若要获取本库版本号，请无参调用
	// Avaliable param values: boost python
	// 可选参数：boost, python
	static const Version GetVersion(const char* obj = nullptr);
};

// define the runtime enviroment infomation singleton class
// 定义该单例用于获取关于运行时环境的有关信息
class ARMYANTLIB_API Enviroment
{
public:
	enum class OS : int8
	{
		// Big class
		Unix = 0b00000000,
		Windows = 0b00000001,
		// Medium class
		// For Unix
		Linux = 0b00000010,
		BSD = 0b00000100,
		Solaris = 0b00000110,
		// For Windows
		WindowsPhone = 0b00000011,
		// Small class
		// For Linux
		Fedora = 0b00100010,
		Ubuntu = 0b00001010,
		YunOS = 0b00101010,
		Debian = 0b00010010,
		RedHat = 0b00110010,
		ChromeOS = 0b00011010,
		Android = 0b00111010,
		CentOS = 0b01000010,
		SuSE = 0b01001010,
		// For BSD
		FreeBSD = 0b00010100,
		OSX = 0b00001100,
		iOS = 0b00011100,
	};

	enum class BITS : int8
	{
		_8bits,
		_16bits,
		_32bits,
		_64bits,
		_128bits
	};

	enum class DevLanguage : int8
	{
		Unknown,
		Assembly_Intel,
		Assembly_AMD,
		Assembly_ARM,
		COBOL,
		Fortrain,
		Basic,
		C,
		SmartTalk,
		Matlab,
		Perl,
		Shell,
		CPlusPlus,
		VisualBasic,
		Batch,
		Java,
		Javascript,
		PHP,
		ObjectiveC,
		CSharp,
		Python,
		Lua,
		Ruby,
		Go,
		FSharp,
		Swift,
		ActionScript,
		Delphi,
		R,
		D,
		Groovy,
		Lisp,
		Scala,
		Ada
	};

	static OS GetOSType();
	static Version GetOSVersion();
	static BITS GetOSBits();
};

} // namespace Infos

namespace Utils {

// log utilities
// TODO: 应当专门建立Log类进行Log输出
namespace Log{
ARMYANTLIB_API void Log_Debug(const char* msg);
ARMYANTLIB_API void Log_Error(const char* msg);
}

// math utilities
// TODO: 在Math类工具完成时，应当将这些函数转移到Math模块
namespace Math{
ARMYANTLIB_API double GetRandom(double min, double max);
ARMYANTLIB_API bool GetRoll(double percent);
ARMYANTLIB_API uint32 GetMultiRoll(double percent);
}

// string utilities
// TODO: 应当构建专门的string类，并把这些工具也一并转移过去
namespace CString{
enum class Encoding {
	ANSI_C = 0,
	IBM_EBCDIC = 1,
	Unicode = 2,
	GBK = 4,
	Utf_7 = 6,
	Utf_8 = 10,
	Utf_16 = 2,
	Utf_32 = 14
};
ARMYANTLIB_API float isEncoding(Encoding encoding, char*str);
ARMYANTLIB_API bool convertEncoding(Encoding from, Encoding to, char*str);

template <class Type_Num = int> inline
ARMYANTLIB_API bool itoa(char*str, Type_Num num) {
	if (str == nullptr)
		return false;
	std::string ret = "";
	bool isNegative = num < 0;
	num = Fragment::abs(num);
	Type_Num afterPoint = Type_Num(num - uint64(num));
	Type_Num beforePoint = num - afterPoint;
	do{
		ret = (beforePoint % 10 + '0') + ret;
		beforePoint /= 10;
	} while (beforePoint != 0);
	if (num - 0.1f != num) {
		ret += ".";
		do {
			beforePoint *= 10;
			ret = ret + (char(afterPoint + '0'));
		} while (beforePoint != 0.0);
	}
	if (isNegative)
		ret = "-" + ret;
	strcpy(str, ret.c_str());
	return true;
}

ARMYANTLIB_API bool CleanStringSpaces(char*str);
inline std::string CleanStringSpaces(const std::string&str)
{
    if (str == "")
        return std::string(str);
    int first = 0;
    while (str[first] == ' ' || str[first] == '\n' || str[first] == '\r' || str[first] == '\t')
        ++first;
    int last = int(str.size()) - 1;
    while (str[last] == ' ' || str[last] == '\n' || str[last] == '\r' || str[last] == '\t' || str[last] == '\0')
        --last;
    if (first == 0 && last == str.size() - 1)
        return std::string(str);
    return str.substr(first, last - first + 1);
}


}

}

} // namespace ArmyAnt

#endif // ARMYANT_LIB_H_2016_3_19