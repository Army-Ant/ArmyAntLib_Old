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

#include "../../inc/AAJson.h"
#include "../../inc/ArmyAntLib.h"
#include "../../inc/AAClassPrivateHandle.hpp"
#include "../../inc/AAString.h"

#include <inttypes.h>
#include <vector>
#include <map>
#include <boost/lexical_cast.hpp>

namespace ArmyAnt {

static const char* sg_spaceCleans[] = { "\r","\n"," " };
static const JsonException sg_invalidNumber("This is an invalid number value !");
static const JsonException sg_wrongFormat("");

union JO_Private {
	std::map<String, JsonUnit*>* children;
	std::vector<JsonUnit*>* children_array;

public:
	JO_Private() :children(nullptr){
	}

	~JO_Private() {}

	static std::pair<String, String> cutKeyValue(String str) {
		str.clearBothSides(sg_spaceCleans, 3);
		char isSingleKey = str[0];
		if (str[0] != '"' && str[0] != '\'')
			throw sg_wrongFormat;
		String key = "";
		size_t count = 1;
		while (count < str.size()) {
			if (str[count] == isSingleKey)
				break;
			else
				key += str[count++];
		}
        str.clearBothSides(sg_spaceCleans, 3);
        str.subString(int(count + 1));
		if (str[0] != ':')
			throw sg_wrongFormat;
        str.subString(1);
        str.clearBothSides(sg_spaceCleans, 3);
		return std::make_pair(key, str);
	}

	static std::vector<String> CutByComma(const String&value) {
		String str = value;
        str.clearBothSides(sg_spaceCleans, 3);
        std::vector<String> ret;
		String tmp = "";
		bool isInSingleString = false;
		bool isInDoubleString = false;
		int deepInArray = 0;
		int deepInObject = 0;
		for (int32 i = 0; i < str.size(); i++) {
			if (str[i] == '\'' && !isInDoubleString) {
				if (isInSingleString) {
					if (i == 0 || str[i - 1] != '\\')
						isInSingleString = false;
				} else
					isInSingleString = true;
			} else if (str[i] == '"' && !isInSingleString) {
				if (isInDoubleString) {
					if (i == 0 || str[i - 1] != '\\')
						isInDoubleString = false;
				} else
					isInDoubleString = true;
			} else if (str[i] == '[' && !isInSingleString && !isInDoubleString)
				++deepInArray;
			else if (str[i] == '{' && !isInSingleString && !isInDoubleString)
				++deepInObject;
			else if (str[i] == ']' && !isInSingleString && !isInDoubleString)
				--deepInArray;
			else if (str[i] == '}' && !isInSingleString && !isInDoubleString)
				--deepInObject;
			if (deepInArray < 0 || deepInObject < 0)
				throw sg_wrongFormat;
			if (deepInArray == 0 && deepInObject == 0 && !isInSingleString && !isInDoubleString && str[i] == ',') {
				ret.push_back(tmp);
				tmp = "";
                str.clearBothSides(sg_spaceCleans, 3);
                str.subString(int(i + 1));
                i = -1;
			} else
				tmp += str[i];
		}
		ret.push_back(tmp);
		return ret;
	}
};
static ClassPrivateHandleManager < JsonObject, JO_Private > s_objDatas;
JsonUnit * JsonUnit::create(const char * value) {
	JsonUnit* i = new JsonObject();
	if (i->fromJsonString(value)) {
		i->isCreated = true;
		return i;
	}
	delete i;
	i = new JsonArray();
	if (i->fromJsonString(value)) {
		i->isCreated = true;
		return i;
	}
	delete i;
	i = new JsonString();
	if (i->fromJsonString(value)) {
		i->isCreated = true;
		return i;
	}
	delete i;
	i = new JsonBoolean();
	if (i->fromJsonString(value)) {
		i->isCreated = true;
		return i;
	}
    String cst = value;
    cst.clearBothSides(sg_spaceCleans, 3);
    if (cst == "null")
		return JsonObject::jsonNull;
	if (cst == "undefined")
		return JsonObject::undefined;
	if (cst == "NaN")
		return JsonNumeric::nan;
	if (cst == "infinity")
		return JsonNumeric::infinity;
	delete i;
	i = new JsonNumeric();
	if (i->fromJsonString(value)) {
		i->isCreated = true;
		return i;
	}
	delete i;
	return nullptr;
}

bool JsonUnit::release(JsonUnit* & ptr) {
	if (ptr == nullptr || !ptr->isCreated)
		return false;
	delete ptr;
	ptr = nullptr;
	return true;
}

}

static auto AA_JSON_undefined = ([]() {
	static class : public ArmyAnt::JsonUnit {
		virtual uint64 toJsonString(char*str)const override {
			if (str != nullptr) {
				strcpy(str, "undefined");
			}
			return 10;
		}
		virtual bool fromJsonString(const char*)override {
			return true;
		}
		virtual uint64 getJsonStringLength()const override {
			return 10;
		}
		virtual ArmyAnt::EJsonValueType getType()const override {
			return ArmyAnt::EJsonValueType::Undefined;
		}
        virtual ArmyAnt::String toJsonString()const override
        {
            return "undefined";
        }
	} ret;
	return ret;
}());

static auto AA_JSON_null = []() {
	static class : public ArmyAnt::JsonUnit {
		virtual uint64 toJsonString(char*str)const override {
			if (str != nullptr) {
				strcpy(str, "null");
			}
			return 5;
		}
		virtual uint64 getJsonStringLength()const override {
			return 5;
		}
		virtual bool fromJsonString(const char*)override {
			return true;
		}
		virtual ArmyAnt::EJsonValueType getType()const override {
			return ArmyAnt::EJsonValueType::Null;
		}
        virtual ArmyAnt::String toJsonString()const override
        {
            return "null";
        }
    } ret;
	return ret;
}();

static auto AA_JSON_true = []() {
	auto ret = ArmyAnt::JsonBoolean();
	ret.fromJsonString("true");
	return ret;
}();

static auto AA_JSON_false = []() {
	auto ret = ArmyAnt::JsonBoolean();
	ret.fromJsonString("false");
	return ret;
}();

static auto AA_JSON_nan = []() {
	static class : public ArmyAnt::JsonNumeric {
		virtual uint64 toJsonString(char*str)const override {
			if (str != nullptr) {
				strcpy(str, "NaN");
			}
			return 5;
		}
		virtual uint64 getJsonStringLength()const override
		{
			return 4;
		}
		virtual int32 getInteger()const override {
			throw ArmyAnt::sg_invalidNumber;
		}
		virtual int64 getLong()const override {
			throw ArmyAnt::sg_invalidNumber;
		}
		virtual double getDouble()const override {
			throw ArmyAnt::sg_invalidNumber;
		}
        virtual ArmyAnt::String toJsonString()const override
        {
            return "NaN";
        }
    }ret;
	return ret;
}();

static auto AA_JSON_infinity = []() {
	static class : public ArmyAnt::JsonNumeric {
		virtual uint64 toJsonString(char*str)const override {
			if (str != nullptr) {
				strcpy(str, "infinity");
			}
			return 5;
		}
		virtual uint64 getJsonStringLength()const override
		{
			return 9;
		}
		virtual int32 getInteger()const override {
			throw ArmyAnt::sg_invalidNumber;
		}
		virtual int64 getLong()const override {
			throw ArmyAnt::sg_invalidNumber;
		}
		virtual double getDouble()const override {
			throw ArmyAnt::sg_invalidNumber;
		}
        virtual ArmyAnt::String toJsonString()const override
        {
            return "infinity";
        }
    }ret;
	return ret;
}();

namespace ArmyAnt {

JsonUnit* JsonUnit::undefined = &AA_JSON_undefined;
JsonUnit* JsonUnit::jsonNull = &AA_JSON_null;

JsonBoolean::JsonBoolean() :value(false) {

}

JsonBoolean::~JsonBoolean() {

}

uint64 JsonBoolean::toJsonString(char*str) const {
	strcpy(str, value ? "true" : "false");
	return value ? 5 : 6;
}

String JsonBoolean::toJsonString() const
{
    return value ? "true" : "false";
}

uint64 JsonBoolean::getJsonStringLength() const {
	return value ? 5 : 6;
}

bool JsonBoolean::fromJsonString(const char * str) {
    String strtmp = str;
    strtmp.clearBothSides(sg_spaceCleans, 3);
	if (strtmp == "true")
		value = true;
	else if (strtmp == "false")
		value = false;
	else
		return false;
	return true;
}

bool JsonBoolean::getBoolean() const {
	return value;
}

JsonBoolean* JsonBoolean::true_ = &AA_JSON_true;

JsonBoolean* JsonBoolean::false_ = &AA_JSON_false;

JsonNumeric::JsonNumeric() :whatvalue(0) ,rightLength(1){
	value.dvalue = 0.0;
}

JsonNumeric::~JsonNumeric() {

}

uint64 JsonNumeric::toJsonString(char*str) const {
	char tmpstr[64] = "";
	if (str == nullptr)
		str = tmpstr;
	switch (whatvalue) {
		case 1:
			sprintf(str, "%d", value.ivalue);
			break;
		case 2:
			sprintf(str, "%lld", value.lvalue);
			break;
		case 3:
			sprintf(tmpstr, "%%.%df", rightLength);
			sprintf(str, tmpstr, value.dvalue);
			break;
		default:
			return 0;
	}
	return strlen(str);
}

String JsonNumeric::toJsonString() const
{
    switch (whatvalue)
    {
        case 1:
            return value.ivalue;
        case 2:
            return value.lvalue;
        case 3:
            return String(value.dvalue, rightLength);
        default:
            return nullptr;
    }
}

uint64 JsonNumeric::getJsonStringLength() const {
	switch (whatvalue) {
		case 1:
			return String(value.ivalue).size() + 1;
		case 2:
			return String(value.lvalue).size() + 1;
		case 3:
			return String(int64(value.dvalue)).size() + 1 + rightLength + 1;
		default:
			return 0;
	}
}

bool JsonNumeric::fromJsonString(const char * str)
{
    String strtmp = str;
    strtmp.clearBothSides(sg_spaceCleans, 3);
    if (strtmp.isFloat())
    {
        value.dvalue = strtmp.toDemical();
        whatvalue = 3;
    }
    else
    {
        value.lvalue = strtmp.toLong();
        if (value.lvalue <= AA_INT32_MAX)
        {
            value.ivalue = int32(value.lvalue);
            whatvalue = 1;
        }
        else whatvalue = 2;
    }
    return true;
}

int32 JsonNumeric::getInteger()const {
	return value.ivalue;
}

int64 JsonNumeric::getLong()const {
	return value.lvalue;
}

double JsonNumeric::getDouble()const {
	return value.dvalue;
}

JsonNumeric* JsonNumeric::nan = &AA_JSON_nan;

JsonNumeric* JsonNumeric::infinity = &AA_JSON_infinity;

JsonString::JsonString() :value() {

}

JsonString::~JsonString() {
}

uint64 JsonString::toJsonString(char*str) const {
	if (str != nullptr) 
		strcpy(str, ('"'+value+'"').c_str());
	return value.size() + 3;
}

String JsonString::toJsonString() const
{
    return '"' + value + '"';
}

uint64 JsonString::getJsonStringLength() const {
	return value.size() + 3;
}

bool JsonString::fromJsonString(const char*str) {
    value = str;
    return true;
}

const char* JsonString::getString()const {
	return value.c_str();
}

JsonObject::JsonObject() {
    s_objDatas.GetHandle(this);
	if(this->getType() == EJsonValueType::Object)
		s_objDatas[this]->children = new std::map<String, JsonUnit*>();
	else
		s_objDatas[this]->children_array = new std::vector<JsonUnit*>();
}

JsonObject::~JsonObject() {
	auto hd = s_objDatas[this];
	if (this->getType() == EJsonValueType::Object)
	{
		for (auto i = hd->children->begin(); i != hd->children->end(); ++i)
		{
			JsonUnit::release(i->second);
		}
		delete hd->children;
	}
	else
	{
		for (auto i = hd->children_array->begin(); i != hd->children_array->end(); ++i)
		{
			JsonUnit::release(*i);
		}
		delete hd->children_array;
	}
    delete s_objDatas. ReleaseHandle(this);
}

uint64 JsonObject::toJsonString(char * str) const {
	if (str == nullptr)
		return 0;
    auto ret = toJsonString();
	strcpy(str, ret.c_str());
	return ret.size();
}

String JsonObject::toJsonString() const
{
    auto hd = s_objDatas[this];
    String ret = "{";
    for (auto i = hd->children->begin(); ;)
    {
        ret += '"' + i->first + '"' + ':';
        if (i->second->getJsonStringLength() > 0)
        {
            ret += i->second->toJsonString();
        }
        ++i;
        if (i != hd->children->end())
            ret += ",";
        else break;
    }
    ret += "}";
    return ret;
}

uint64 JsonObject::getJsonStringLength() const {
	auto hd = s_objDatas[this];
	uint64 length = 3;
	for (auto i = hd->children->begin(); i != hd->children->end(); ++i) {
		length += 3 + i->first.size() + i->second->getJsonStringLength();
	}
	return length;
}

bool JsonObject::fromJsonString(const char * str)
{
    String stdstr = str;
    stdstr.clearBothSides(sg_spaceCleans, 3);
    if (stdstr[-1] != '\0')
        stdstr += '\0';
    if (stdstr[0] != '{' || stdstr[-2] != '}')
        return false;
    if (!stdstr.subString(1, -3))
        return false;
    stdstr += '\0';
    if (!stdstr.clearBothSides(sg_spaceCleans, 3))
        return false;
    auto hd = s_objDatas[this];
    hd->children->clear();
    if (stdstr != "")
        try
    {
        auto res = JO_Private::CutByComma(stdstr);
        for (size_t i = 0; i < res.size(); i++)
        {
            auto ins = JO_Private::cutKeyValue(res[i]);
            hd->children->insert(std::make_pair(ins.first, JsonUnit::create(ins.second.c_str())));
        }
    }
    catch (JsonException)
    {
        return false;
    }
    return true;
}

JsonUnit * JsonObject::getChild(const char*key) {
	auto hd = s_objDatas[this];
	auto ret = hd->children->find(key);
	if (ret == hd->children->end())
		return nullptr;
	else return ret->second;
}

const JsonUnit * JsonObject::getChild(const char * key) const {
	return const_cast<JsonObject*>(this)->getChild(key);
}

bool JsonObject::putChild(const char * key, JsonUnit * value) {
	auto hd = s_objDatas[this];
	auto ret = hd->children->find(key);
	if (ret != hd->children->end())
		return false;
	hd->children->insert(std::make_pair(String(key), value));
	return true;
}

bool JsonObject::removeChild(const char * key) {
	auto hd = s_objDatas[this];
	auto ret = hd->children->find(key);
	if (ret == hd->children->end())
		return false;
	JsonUnit::release(ret->second);
	hd->children->erase(ret);
	return true;
}

JsonArray::JsonArray() : JsonObject() {
}

JsonArray::~JsonArray() {
}

uint64 JsonArray::toJsonString(char * str) const {
    auto ret = toJsonString();
	strcpy(str, ret.c_str());
	return ret.size();
}

String JsonArray::toJsonString() const
{
    auto hd = s_objDatas[this];
    String ret = "[";
    for (size_t i = 0;; ++i)
    {
        ret += (*(hd->children_array))[i]->toJsonString();
        if (i < hd->children_array->size() - 1)
        {
            ret += ",";
        }
        else
        {
            ret += "]";
            break;
        }
    }
    return ret;
}

uint64 JsonArray::getJsonStringLength() const {
	auto hd = s_objDatas[this];
	uint64 length = 2;
	for (auto i = hd->children_array->begin(); i != hd->children_array->end(); ++i) {
		length += (*i)->getJsonStringLength();
	}
	return length;
}

bool JsonArray::fromJsonString(const char * str)
{
    String realValue = str;
    realValue.clearBothSides(sg_spaceCleans, 3);
    if (realValue[realValue.size() - 1] != '\0')
        realValue += '\0';
    if (realValue[0] != '[' || realValue[realValue.size() - 2] != ']')
    {
        return false;
    }
    if(!realValue.subString(1, realValue.size() - 3))
        realValue.clearBothSides(sg_spaceCleans, 3);
    if (realValue != "")
        try
    {
        auto res = JO_Private::CutByComma(realValue);
        auto hd = s_objDatas[this];
        hd->children_array->clear();
        for (size_t i = 0; i < res.size(); i++)
        {
            hd->children_array->push_back(JsonUnit::create(res[i].c_str()));
        }
    }
    catch (JsonException)
    {
        return false;
    }
    return true;
}

JsonUnit * JsonArray::getChild(const char * key) {
	try {
		int k = boost::lexical_cast<int>(String(key));
		return getChild(k);
	} catch (boost::bad_lexical_cast) {
		return nullptr;
	}
}

const JsonUnit * JsonArray::getChild(const char * key) const {
	return const_cast<JsonArray*>(this)->getChild(key);
}

bool JsonArray::putChild(const char *, JsonUnit * value) {
	return putChild(value);
}

bool JsonArray::removeChild(const char * key) {
	try {
		int k = boost::lexical_cast<int>(String(key));
		return removeChild(k);
	} catch (boost::bad_lexical_cast) {
		return false;
	}
}

JsonUnit * JsonArray::getChild(int32 index) {
	auto&hd = s_objDatas[this]->children_array;
    int32 size = int32(hd->size());
	if (index < 0)
		index = size + index;
	if (index < 0 || index >= size)
		return nullptr;
	return hd->at(index);
}

const JsonUnit * JsonArray::getChild(int32 index) const {
	return const_cast<JsonArray*>(this)->getChild(index);
}

int32 JsonArray::putChild(JsonUnit * value) {
	auto&hd = s_objDatas[this]->children_array;
	hd->push_back(value);
	return hd->size();
}

bool JsonArray::insertChild(int32 index, JsonUnit * value) {
	auto&hd = s_objDatas[this]->children_array;
	auto size = int32(hd->size());
	if (index < 0)
		index = size + index;
	if (index < 0 || index >= size)
		return false;;
	hd->insert(hd->begin() + index, value);
	return true;
}

bool JsonArray::removeChild(int32 key) {
	auto&hd = s_objDatas[this]->children_array;
	auto size = int32(hd->size());
	if (key < 0)
		key = size + key;
	if (key < 0 || key >= size)
		return false;
	hd->erase(hd->begin() + key);
	return true;
}

}
