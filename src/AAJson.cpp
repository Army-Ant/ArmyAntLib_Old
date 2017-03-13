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


static const ArmyAnt::JsonException unabledFunction = ArmyAnt::JsonException("Cannot call this function!");

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
		virtual ArmyAnt::EJsonValueType getType()const{
			return ArmyAnt::EJsonValueType::Undefined;
		}
		virtual bool getBoolean()const{
			throw unabledFunction;
		}
		virtual int32 getInteger()const{
			throw unabledFunction;
		}
		virtual uint32 getUnsignedInteger()const{
			throw unabledFunction;
		}
		virtual int64 getLong()const{
			throw unabledFunction;
		}
		virtual uint64 getUnsignedLong()const{
			throw unabledFunction;
		}
		virtual double getDouble()const{
			throw unabledFunction;
		}
		virtual const char* getString()const{
			throw unabledFunction;
		}
		virtual JsonUnit* getChild(const char*){
			throw unabledFunction;
		}
		virtual JsonUnit* getChild(int32){
			throw unabledFunction;
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
		virtual ArmyAnt::EJsonValueType getType()const{
			return ArmyAnt::EJsonValueType::Null;
		}
		virtual bool getBoolean()const{
			throw unabledFunction;
		}
		virtual int32 getInteger()const{
			throw unabledFunction;
		}
		virtual uint32 getUnsignedInteger()const{
			throw unabledFunction;
		}
		virtual int64 getLong()const{
			throw unabledFunction;
		}
		virtual uint64 getUnsignedLong()const{
			throw unabledFunction;
		}
		virtual double getDouble()const{
			throw unabledFunction;
		}
		virtual const char* getString()const{
			throw unabledFunction;
		}
		virtual JsonUnit* getChild(const char*){
			return nullptr;
		}
		virtual JsonUnit* getChild(int32){
			throw unabledFunction;
		}
	} ret;
	return ret;
}();

namespace ArmyAnt{

const ArmyAnt::JsonUnit& ArmyAnt::JsonUnit::undefined = AA_JSON_undefined;
const ArmyAnt::JsonUnit& ArmyAnt::JsonUnit::jsonNull = AA_JSON_null;

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

}