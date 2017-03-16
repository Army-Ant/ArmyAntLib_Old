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

#include "../inc/AAJson.h"
#include "../inc/ArmyAntLib.h"
#include "../inc/AAClassPrivateHandle.hpp"

#include <inttypes.h>

namespace ArmyAnt{
struct JO_Private{ JsonUnit* keys; JsonUnit* values; uint32 length; };
static ClassPrivateHandleManager < JsonObject, JO_Private > s_objDatas;

static const JsonException unabledFunction = JsonException("Cannot call this function!");
static const JsonException invalidNumber = JsonException("This is an invalid number value !");
}

static const auto AA_JSON_undefined = ([](){
	static const class : public ArmyAnt::JsonUnit{
		virtual int toJsonString(char*str)const override{
			if(str != nullptr){
				strcpy(str, "undefined");
			}
			return 10;
		}
		virtual bool fromJsonString(const char*)override{
			return true;
		}
		virtual ArmyAnt::EJsonValueType getType()const override{
			return ArmyAnt::EJsonValueType::Undefined;
		}
		virtual bool getBoolean()const override{
			throw ArmyAnt::unabledFunction;
		}
		virtual int32 getInteger()const override{
			throw ArmyAnt::unabledFunction;
		}
		virtual int64 getLong()const override{
			throw ArmyAnt::unabledFunction;
		}
		virtual double getDouble()const override{
			throw ArmyAnt::unabledFunction;
		}
		virtual const char* getString()const override{
			throw ArmyAnt::unabledFunction;
		}
		virtual JsonUnit* getChild(const char*) override{
			throw ArmyAnt::unabledFunction;
		}
		virtual const JsonUnit* getChild(const char*)const override{
			throw ArmyAnt::unabledFunction;
		}
		virtual JsonUnit* getChild(int32) override{
			throw ArmyAnt::unabledFunction;
		}
		virtual const JsonUnit* getChild(int32)const override{
			throw ArmyAnt::unabledFunction;
		}
	} ret;
	return ret;
}());

static const auto AA_JSON_null = [](){
	static const class : public ArmyAnt::JsonUnit{
		virtual int toJsonString(char*str)const override{
			if(str != nullptr){
				strcpy(str, "null");
			}
			return 5;
		}
		virtual bool fromJsonString(const char*)override{
			return true;
		}
		virtual ArmyAnt::EJsonValueType getType()const override{
			return ArmyAnt::EJsonValueType::Null;
		}
		virtual bool getBoolean()const override{
			throw ArmyAnt::unabledFunction;
		}
		virtual int32 getInteger()const override{
			throw ArmyAnt::unabledFunction;
		}
		virtual int64 getLong()const override{
			throw ArmyAnt::unabledFunction;
		}
		virtual double getDouble()const override{
			throw ArmyAnt::unabledFunction;
		}
		virtual const char* getString()const override{
			throw ArmyAnt::unabledFunction;
		}
		virtual JsonUnit* getChild(const char*) override{
			throw ArmyAnt::unabledFunction;
		}
		virtual const JsonUnit* getChild(const char*)const override{
			throw ArmyAnt::unabledFunction;
		}
		virtual JsonUnit* getChild(int32) override{
			throw ArmyAnt::unabledFunction;
		}
		virtual const JsonUnit* getChild(int32)const override{
			throw ArmyAnt::unabledFunction;
		}
	} ret;
	return ret;
}();

static const auto AA_JSON_true = [](){
	auto ret = ArmyAnt::JsonBoolean();
	ret.fromJsonString("true");
	return ret;
}();

static const auto AA_JSON_false = [](){
	auto ret = ArmyAnt::JsonBoolean();
	ret.fromJsonString("false");
	return ret;
}();

static const auto AA_JSON_nan = [](){
	static const class : public ArmyAnt::JsonNumeric{
		virtual int toJsonString(char*str)const override{
			if(str != nullptr){
				strcpy(str, "NaN");
			}
			return 5;
		}
		virtual int32 getInteger()const override{
			throw ArmyAnt::invalidNumber;
		}
		virtual int64 getLong()const override{
			throw ArmyAnt::invalidNumber;
		}
		virtual double getDouble()const override{
			throw ArmyAnt::invalidNumber;
		}
	}ret;
	return ret;
}();

static const auto AA_JSON_infinity = [](){
	static const class : public ArmyAnt::JsonNumeric{
		virtual int toJsonString(char*str)const override{
			if(str != nullptr){
				strcpy(str, "infinity");
			}
			return 5;
		}
		virtual int32 getInteger()const override{
			throw ArmyAnt::invalidNumber;
		}
		virtual int64 getLong()const override{
			throw ArmyAnt::invalidNumber;
		}
		virtual double getDouble()const override{
			throw ArmyAnt::invalidNumber;
		}
	}ret;
	return ret;
}();

namespace ArmyAnt{

const JsonUnit& JsonUnit::undefined = AA_JSON_undefined;
const JsonUnit& JsonUnit::jsonNull = AA_JSON_null;

JsonBoolean::JsonBoolean():value(false){

}

JsonBoolean::~JsonBoolean(){

}

int JsonBoolean::toJsonString(char*str) const{
	strcpy(str, value ? "true" : "false");
	return value ? 5 : 6;
}

bool JsonBoolean::fromJsonString(const char * str){
	char* strtmp = new char[strlen(str)];
	strcpy(strtmp, str);
	Utils::CString::CleanStringSpaces(strtmp);
	if(!strcmp(strtmp, "true"))
		value = true;
	else if(!strcmp(strtmp, "false"))
		value = false;
	else
		return false;
	return true;
}

bool JsonBoolean::getBoolean() const{
	return value;
}

int32 JsonBoolean::getInteger()const{
	throw unabledFunction;
}

int64 JsonBoolean::getLong()const{
	throw unabledFunction;
}

double JsonBoolean::getDouble()const{
	throw unabledFunction;
}

const char* JsonBoolean::getString()const{
	throw unabledFunction;
}

JsonUnit* JsonBoolean::getChild(const char*){
	throw unabledFunction;
}

const JsonUnit* JsonBoolean::getChild(const char*key) const{
	throw unabledFunction;
}

JsonUnit* JsonBoolean::getChild(int32){
	throw unabledFunction;
}

const JsonUnit* JsonBoolean::getChild(int32)const{
	throw unabledFunction;
}

const JsonBoolean& JsonBoolean::true_= AA_JSON_true;

const JsonBoolean& JsonBoolean::false_= AA_JSON_false;

JsonNumeric::JsonNumeric():whatvalue(0){
	value.dvalue = 0.0;
}

JsonNumeric::~JsonNumeric(){

}

int JsonNumeric::toJsonString(char*str) const{
	char tmpstr[64] = "";
	if(str == nullptr)
		str = tmpstr;
	const char* format = nullptr;
	switch(whatvalue){
		case 1:
			format = "%d";
			break;
		case 2:
			format = "%lld";
			break;
		case 3:
			format = "%f";
			break;
		default:
			return 0;
	}
	sprintf(str, "");
	return strlen(str);
}

bool JsonNumeric::fromJsonString(const char * str){
	char* strtmp = new char[strlen(str)];
	strcpy(strtmp, str);
	Utils::CString::CleanStringSpaces(strtmp);
	std::string num = strtmp;
	if(num.find('.') == num.npos){
		value.dvalue = atof(strtmp);
		whatvalue = 3;
	} else if(!strcmp(strtmp, "false")){
		value.lvalue = atoll(strtmp);
		if(value.lvalue <= AA_INT32_MAX){
			value.ivalue = int32(value.lvalue);
			whatvalue = 1;
		} else whatvalue = 2;
	}
	else
		return false;
	return true;
}

bool JsonNumeric::getBoolean() const{
	throw unabledFunction;
}

int32 JsonNumeric::getInteger()const{
	return value.ivalue;
}

int64 JsonNumeric::getLong()const{
	return value.lvalue;
}

double JsonNumeric::getDouble()const{
	return value.dvalue;
}

const char* JsonNumeric::getString()const{
	throw unabledFunction;
}

JsonUnit* JsonNumeric::getChild(const char*){
	throw unabledFunction;
}

const JsonUnit* JsonNumeric::getChild(const char*key) const{
	throw unabledFunction;
}

JsonUnit* JsonNumeric::getChild(int32){
	throw unabledFunction;
}

const JsonUnit* JsonNumeric::getChild(int32)const{
	throw unabledFunction;
}

const JsonNumeric& JsonNumeric::nan = AA_JSON_nan;

const JsonNumeric& JsonNumeric::infinity = AA_JSON_infinity;

JsonString::JsonString():value(nullptr),length(0){

}

JsonString::~JsonString(){
	if(value != nullptr)
		delete[] value;
}

int JsonString::toJsonString(char*str) const{
	if(value == nullptr)
		return 0;
	if(str != nullptr){
		str[0] = '"';
		if(length > 0)
			strcpy(str + 1, value);
		str[length + 1] = '"';
	}
	return length + 2;
}

bool JsonString::fromJsonString(const char*str){
	if(str == nullptr){
		if(value != nullptr)
			delete[] value;
		length = 0;
		return true;
	}
	char* tmp = new char[strlen(str)];
	strcpy(tmp, str);
	Utils::CString::CleanStringSpaces(tmp);
	std::string strstr = tmp;
	if(tmp[0] == '"'&&strstr[strstr.size() - 1] == '"'){
		if(value != nullptr)
			delete[] value;
		length = strstr.size() - 1;
		value = new char[length];
		value[length - 1] = '\0';
		memcpy(value, tmp + 1, length - 1);
		return true;
	}
	return false;
}

bool JsonString::getBoolean() const{
	throw unabledFunction;
}

int32 JsonString::getInteger()const{
	throw unabledFunction;
}

int64 JsonString::getLong()const{
	throw unabledFunction;
}

double JsonString::getDouble()const{
	throw unabledFunction;
}

const char* JsonString::getString()const{
	return value;
}

JsonUnit* JsonString::getChild(const char*key){
	throw unabledFunction;
}

const JsonUnit* JsonString::getChild(const char*key) const{
	throw unabledFunction;
}

JsonUnit* JsonString::getChild(int32 index){
	throw unabledFunction;
}

const JsonUnit* JsonString::getChild(int32 index) const{
	throw unabledFunction;
}

JsonObject::JsonObject():handle(s_objDatas.GetHandle(this)){

}

JsonObject::~JsonObject(){
	s_objDatas.ReleaseHandle(handle);
}

}