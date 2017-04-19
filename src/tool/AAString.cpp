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
* This file is the internal source file of this project, is not contained by the closed source release part of this software
* 本文件为内部源码文件, 不会包含在闭源发布的本软件中
*/

#include "../../inc/AAString.h"
#include "../../inc/AAClassPrivateHandle.hpp"
#include <sstream>

namespace ArmyAnt
{

static ClassPrivateHandleManager<String, std::string> sg_manager;

String::String(const char * value)
{
    sg_manager.GetHandle(this, new std::string(value));
}

String::String(char c)
{
    sg_manager.GetHandle(this, new std::string(c + std::string()));
}

String::String(int32 num)
{
    sg_manager.GetHandle(this, new std::string(static_cast<std::stringstream*>(&(std::stringstream() << num))->str()));
}

String::String(const int64 & num)
{
    sg_manager.GetHandle(this, new std::string(static_cast<std::stringstream*>(&(std::stringstream() << num))->str()));
}

String::String(double num, int32 behindFloat)
{
    if (behindFloat >= 0)
    {
        int64 powed = int64(pow(10, behindFloat));
        num -= num - double(int64(num*powed)) / powed;
    }
    sg_manager.GetHandle(this, new std::string(static_cast<std::stringstream*>(&(std::stringstream() << num))->str()));

}

String::String(const String & value)
{
    sg_manager.GetHandle(this, new std::string(*(sg_manager[&value])));
}

String::String(String && _moved)
{
    auto ret = sg_manager.handleMap.find(&_moved);
    sg_manager.handleMap.insert(std::make_pair(this, ret->second));
    sg_manager.handleMap.erase(ret);
}

String::~String()
{
    if (sg_manager[this] != nullptr)
        sg_manager.ReleaseHandle(this);
}

bool String::empty() const
{
    return sg_manager[this]->empty();
}

const char * String::c_str() const
{
    return sg_manager[this]->c_str();
}

uint64 String::size() const
{
    return sg_manager[this]->size();
}

bool String::isNumeric() const
{
    auto ret = (*sg_manager[this]);
    if (atof(ret.c_str()) == 0.0)
        for (size_t i = 0; i < ret.size(); ++i)
        {
            if (ret[i] != ' ' && ret[i] != '0' && ret[i] != '.')
                return false;
        }
    return true;
}

int32 String::toInteger() const
{
    return atoi(sg_manager[this]->c_str());
}

int64 String::toLong() const
{
    return atoll(sg_manager[this]->c_str());
}

double String::toDemical() const
{
    return atof(sg_manager[this]->c_str());
}

String & String::operator=(const String & value)
{
    *(sg_manager[this]) = value.c_str();
    return *this;
}

String & String::operator=(const char * value)
{
    *(sg_manager[this]) = value;
    return *this;
}

String & String::operator=(char c)
{
    *(sg_manager[this]) = String() + c;
    return *this;
}

String & String::operator=(int64 value)
{
    std::ostringstream ss;
    ss << value;
    *(sg_manager[this]) += ss.str();
    return *this;
}

String & String::operator=(double value)
{
    std::ostringstream ss;
    ss << value;
    *(sg_manager[this]) += ss.str();
    return *this;
}

bool String::operator==(const String & value) const
{
    return *(sg_manager[this]) == *(sg_manager[&value]);
}

bool String::operator!=(const String & value) const
{
    return !operator==(value);
}

bool String::operator==(const char * value) const
{
    return *(sg_manager[this]) == value;
}

bool String::operator!=(const char * value) const
{
    return !operator==(value);
}

char String::operator[](int64 index) const
{
    if (index < 0)
        index += sg_manager[this]->size();
    return (*(sg_manager[this]))[index];
}

String::operator bool() const
{
    return empty();
}

bool String::operator!() const
{
    return operator bool();
}

String String::operator+(const String & value) const
{
    return String((*(sg_manager[this]) + *(sg_manager[&value])).c_str());
}

String String::operator+(const char * value) const
{
    return String((*(sg_manager[this]) + value).c_str());
}

String String::operator+(char c) const
{
    return String((*(sg_manager[this]) + c).c_str());
}

String String::operator+(int64 value) const
{
    std::ostringstream ss;
    ss << sg_manager[this];
    ss << value;
    return String(ss.str().c_str());
}

String String::operator+(double value) const
{
    std::ostringstream ss;
    ss << sg_manager[this];
    ss << value;
    return String(ss.str().c_str());
}

String & String::operator+=(const String & value)
{
    *(sg_manager[this]) += *(sg_manager[&value]);
    return *this;
}

String & String::operator+=(const char * value)
{
    *(sg_manager[this]) += value;
    return *this;
}

String & String::operator+=(char c)
{
    *(sg_manager[this]) += c;
    return *this;
}

String & String::operator+=(int64 value)
{
    std::ostringstream ss;
    ss << value;
    *(sg_manager[this]) += ss.str();
    return *this;
}

String & String::operator+=(double value)
{
    std::ostringstream ss;
    ss << value;
    *(sg_manager[this]) += ss.str();
    return *this;
}

}