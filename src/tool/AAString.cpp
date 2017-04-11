/*
* Copyright (c) 2015 ArmyAnt
* ��Ȩ���� (c) 2015 ArmyAnt
*
* Licensed under the BSD License, Version 2.0 (the License);
* ������ʹ��BSDЭ�鱣��, Э��汾:2.0
* you may not use this file except in compliance with the License.
* ʹ�ñ���Դ�����ļ�������, ��Ϊͬ��Э��
* You can read the license content in the file "LICENSE" at the root of this project
* �������ڱ���Ŀ�ĸ�Ŀ¼�ҵ���Ϊ"LICENSE"���ļ�, ���Ķ�Э������
* You may also obtain a copy of the License at
* ��Ҳ�����ڴ˴����Э��ĸ���:
*
*     http://opensource.org/licenses/BSD-3-Clause
*
* Unless required by applicable law or agreed to in writing, software distributed under the License is distributed on an AS IS BASIS,
* WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
* ���Ƿ���Ҫ����߰�Ȩ����������ͬ��,�������ڱ�Э������ϵķ���û���κ���ʽ�������͵���,������ʾ�Ļ�Ĭ����.
* See the License for the specific language governing permissions and limitations under the License.
* �����ض����ƻ����Թ���Ȩ�����Ķ�Э��
* This file is the internal source file of this project, is not contained by the closed source release part of this software
* ���ļ�Ϊ�ڲ�Դ���ļ�, ��������ڱ�Դ�����ı�������
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

String::String(mac_int num)
{
    sg_manager.GetHandle(this, new std::string(static_cast<std::stringstream*>(&(std::stringstream()<< num))->str()));
}

String::String(float num)
{
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
    *(sg_manager[this]) = std::string() + c;
    return *this;
}

String & String::operator=(int16 value)
{
    std::ostringstream ss;
    ss << value;
    *(sg_manager[this]) += ss.str();
    return *this;
}

String & String::operator=(int32 value)
{
    std::ostringstream ss;
    ss << value;
    *(sg_manager[this]) += ss.str();
    return *this;
}

String & String::operator=(const int64 & value)
{
    std::ostringstream ss;
    ss << value;
    *(sg_manager[this]) += ss.str();
    return *this;
}

String & String::operator=(float value)
{
    std::ostringstream ss;
    ss << value;
    *(sg_manager[this]) += ss.str();
    return *this;
}

String & String::operator=(const double & value)
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

char String::operator[](mac_int index) const
{
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

String String::operator+(int16 value) const
{
    std::ostringstream ss;
    ss << sg_manager[this];
    ss << value;
    return String(ss.str().c_str());
}

String String::operator+(int32 value) const
{
    std::ostringstream ss;
    ss << sg_manager[this];
    ss << value;
    return String(ss.str().c_str());
}

String String::operator+(const int64 & value) const
{
    std::ostringstream ss;
    ss << sg_manager[this];
    ss << value;
    return String(ss.str().c_str());
}

String String::operator+(float value) const
{
    std::ostringstream ss;
    ss << sg_manager[this];
    ss << value;
    return String(ss.str().c_str());
}

String String::operator+(const double & value) const
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

String & String::operator+=(int16 value)
{
    std::ostringstream ss;
    ss << value;
    *(sg_manager[this]) += ss.str();
    return *this;
}

String & String::operator+=(int32 value)
{
    std::ostringstream ss;
    ss << value;
    *(sg_manager[this]) += ss.str();
    return *this;
}

String & String::operator+=(const int64 & value)
{
    std::ostringstream ss;
    ss << value;
    *(sg_manager[this]) += ss.str();
    return *this;
}

String & String::operator+=(float value)
{
    std::ostringstream ss;
    ss << value;
    *(sg_manager[this]) += ss.str();
    return *this;
}

String & String::operator+=(const double & value)
{
    std::ostringstream ss;
    ss << value;
    *(sg_manager[this]) += ss.str();
    return *this;
}

}