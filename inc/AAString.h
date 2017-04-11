/*	*
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

#ifndef AA_STRING_H_2017_4_5
#define AA_STRING_H_2017_4_5

#include "AA_start.h"
#include "AADefine.h"
#include <iostream>

namespace ArmyAnt
{

enum class Encoding
{
    ANSI,
    EBCDIC,
    UTF8,
    UTF16,
    UTF32,
    UTF7
};

class ARMYANTLIB_API String
{
public:
    String(const char*value = nullptr);
    String(char c);
    String(mac_int num);
    String(float num);
    String(const String&value);
    String(String&&_moved);
    ~String();

public:
    bool empty()const;
    const char* c_str()const;
    uint64 size()const;
    bool isNumeric()const;
    int32 toInteger()const;
    int64 toLong()const;
    double toDemical()const;
    Encoding getEncoding()const;

public:
    bool encode(Encoding encode);
    void clear();
    String& upsideDown();
    uint64 copyTo(char*dest, uint64 maxLength = 0);

    bool clearFront(char c);
    bool clearFront(const String&value);
    bool clearFront(const char*value);
    bool clearFront(const char**value, uint32 length);

    bool clearBack(char c);
    bool clearBack(const String&value);
    bool clearBack(const char*value);
    bool clearBack(const char**value, uint32 length);

    bool clearBothSides(char c);
    bool clearBothSides(const String&value);
    bool clearBothSides(const char*value);
    bool clearBothSides(const char**value, uint32 length);

    bool replace(char src, char tar);
    bool replace(char src, const String&tar);
    bool replace(char src, const char*tar);
    bool replace(const String&src, char tar);
    bool replace(const String&src, const String&tar);
    bool replace(const String&src, const char*tar);
    bool replace(const char*src, char tar);
    bool replace(const char*src, const String&tar);
    bool replace(const char*src, const char*tar);

    bool subString(int start);
    bool subString(int start, int end);
    bool subString(int start, char endc);
    bool subString(int start, const char* endstr);
    bool subString(int start, const String& endstr);
    bool subString(char start);
    bool subString(char start, int end);
    bool subString(char start, char endc);
    bool subString(char start, const char* endstr);
    bool subString(char start, const String& endstr);
    bool subString(const char* start);
    bool subString(const char* start, int end);
    bool subString(const char* start, char endc);
    bool subString(const char* start, const char* endstr);
    bool subString(const char* start, const String& endstr);
    bool subString(const String& start);
    bool subString(const String& start, int end);
    bool subString(const String& start, char endc);
    bool subString(const String& start, const char* endstr);
    bool subString(const String& start, const String& endstr);

public:
    // overloaded operators
    String& operator=(const String&value);
    String& operator=(const char*value);
    String& operator=(char c);
    String& operator=(int16 value);
    String& operator=(int32 value);
    String& operator=(const int64& value);
    String& operator=(float value);
    String& operator=(const double& value);
    bool operator==(const String&value)const;
    bool operator!=(const String&value)const;
    bool operator==(const char*value)const;
    bool operator!=(const char*value)const;
    char operator[](mac_int index)const;
    operator bool()const;
    bool operator!()const;
    String operator+(const String&value)const;
    String operator+(const char*value)const;
    String operator+(char c)const;
    String operator+(int16 value)const;
    String operator+(int32 value)const;
    String operator+(const int64& value)const;
    String operator+(float value)const;
    String operator+(const double& value)const;
    String& operator+=(const String&value);
    String& operator+=(const char*value);
    String& operator+=(char c);
    String& operator+=(int16 value);
    String& operator+=(int32 value);
    String& operator+=(const int64& value);
    String& operator+=(float value);
    String& operator+=(const double& value);
    String operator-(int tailLength)const;
    String operator-(char c)const;
    String operator-(const String&value)const;
    String operator-(const char*value)const;
    String& operator-=(int tailLength);

public:
    static Encoding getEncoding(char*str);
    static bool encode(Encoding from, Encoding to, char*str);

    template <class Type_Num = int> 
    static inline bool itoa(char*str, Type_Num num);
    static bool isStringEmpty(const char*str);
    static bool isStringNumeric(const char*str);
    static int32 toInteger(const char*str);
    static int32 toDouble(const char*str);

    [[deprecated]]
    static inline bool cleanStringSpaces(char*str)
    {
        if (str == nullptr)
            return false;
        int first = 0;
        while (str[first] == ' ' || str[first] == '\n' || str[first] == '\r' || str[first] == '\t')
            ++first;
        int last = strlen(str);
        while (str[last] == ' ' || str[last] == '\n' || str[last] == '\r' || str[last] == '\t')
            --last;
        for (int i = first; i < last; ++i)
            str[i - first] = str[i];
        str[last] = '\0';
        return true;
    }
    [[deprecated]]
    static inline std::string cleanStringSpaces(const std::string&str)
    {
        if (str == "")
            return std::string(str);
        int first = 0;
        while (str[first] == ' ' || str[first] == '\n' || str[first] == '\r' || str[first] == '\t')
            ++first;
        int last = int(str.size()) - 1;
        while (str[last] == ' ' || str[last] == '\n' || str[last] == '\r' || str[last] == '\t' || str[last] == '\0')
            --last;
        if (first == 0 && last == int(str.size()) - 1)
            return std::string(str);
        return str.substr(first, last - first + 1);
    }

    static bool clearFront(char*str, char c);
    static bool clearFront(char*str, const String&value);
    static bool clearFront(char*str, const char*value);
    static bool clearFront(char*str, const char**value, uint32 length);

    static bool clearBack(char*str, char c);
    static bool clearBack(char*str, const String&value);
    static bool clearBack(char*str, const char*value);
    static bool clearBack(char*str, const char**value, uint32 length);
 
    static bool clearBothSides(char*str, char c);
    static bool clearBothSides(char*str, const String&value);
    static bool clearBothSides(char*str, const char*value);
    static bool clearBothSides(char*str, const char**value, uint32 length);

    static bool replace(char*str, char src, char tar);
    static bool replace(char*str, char src, const String&tar);
    static bool replace(char*str, char src, const char*tar);
    static bool replace(char*str, const String&src, char tar);
    static bool replace(char*str, const String&src, const String&tar);
    static bool replace(char*str, const String&src, const char*tar);
    static bool replace(char*str, const char*src, char tar);
    static bool replace(char*str, const char*src, const String&tar);
    static bool replace(char*str, const char*src, const char*tar);
    static bool upsideDown(char*str);
    static bool upsideDown(char*dest, const char*src);

    static bool subString(char*str, int start);
    static bool subString(char*str, int start, int end);
    static bool subString(char*str, int start, char endc);
    static bool subString(char*str, int start, const char* endstr);
    static bool subString(char*str, int start, const String& endstr);
    static bool subString(char*str, char start);
    static bool subString(char*str, char start, int end);
    static bool subString(char*str, char start, char endc);
    static bool subString(char*str, char start, const char* endstr);
    static bool subString(char*str, char start, const String& endstr);
    static bool subString(char*str, const char* start);
    static bool subString(char*str, const char* start, int end);
    static bool subString(char*str, const char* start, char endc);
    static bool subString(char*str, const char* start, const char* endstr);
    static bool subString(char*str, const char* start, const String& endstr);
    static bool subString(char*str, const String& start);
    static bool subString(char*str, const String& start, int end);
    static bool subString(char*str, const String& start, char endc);
    static bool subString(char*str, const String& start, const char* endstr);
    static bool subString(char*str, const String& start, const String& endstr);

public:
    // friend operators
    friend String operator+(const char*value, const String&str);
    friend String operator+(char c, const String&str);
    friend String operator+(int16 value, const String&str);
    friend String operator+(int32 value, const String&str);
    friend String operator+(const int64& value, const String&str);
    friend String operator+(float value, const String&str);
    friend String operator+(const double& value, const String&str);
    friend String operator-(int tailLength, const String&str);
    friend bool operator==(const char*cstr, const String&str);
    friend bool operator!=(const char*cstr, const String&str);
    friend inline bool operator<<(std::iostream&stream, const String&str);

    // right referenced this value operators
    friend String operator+(String&&temp, const String&value);
    friend String operator+(String&&temp, const char*value);
    friend String operator+(String&&temp, char c);
    friend String operator+(String&&temp, int16 value);
    friend String operator+(String&&temp, int32 value);
    friend String operator+(String&&temp, const int64& value);
    friend String operator+(String&&temp, float value);
    friend String operator+(String&&temp, const double& value);
    friend String operator-(String&&temp, int tailLength);
    friend String operator-(String&&temp, char c);
    friend String operator-(String&&temp, const String&value);
    friend String operator-(String&&temp, const char*value);
};


template<class Type_Num>
inline bool String::itoa(char * str, Type_Num num)
{
    if (str == nullptr)
        return false;
    String ret = "";
    bool isNegative = num < 0;
    num = Fragment::abs(num);
    Type_Num afterPoint = Type_Num(num - uint64(num));
    Type_Num beforePoint = num - afterPoint;
    do
    {
        ret = (beforePoint % 10 + '0') + ret;
        beforePoint /= 10;
    }
    while (beforePoint != 0);
    if (num - 0.1f != num)
    {
        ret += ".";
        do
        {
            beforePoint *= 10;
            ret = ret + (char(afterPoint + '0'));
        }
        while (beforePoint != 0.0);
    }
    if (isNegative)
        ret = "-" + ret;
    strcpy(str, ret.c_str());
    return true;
}

}

#endif // AA_STRING_H_2017_4_5
