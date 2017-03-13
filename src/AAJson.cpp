/*
* Copyright (c) 2015 ArmyAnt
* ��Ȩ���� (c) 2015 ArmyAnt
*
* Licensed under the BSD License, Version 2.0 (the License);
* �����ʹ��BSDЭ�鱣��, Э��汾:2.0
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
* ���Ƿ���Ҫ����߰�Ȩ����������ͬ��,������ڱ�Э������ϵķ���û���κ���ʽ�������͵���,������ʾ�Ļ�Ĭ���.
* See the License for the specific language governing permissions and limitations under the License.
* �����ض����ƻ����Թ���Ȩ�����Ķ�Э��
* This file is the internal source file of this project, is not contained by the closed source release part of this software
* ���ļ�Ϊ�ڲ�Դ���ļ�, ��������ڱ�Դ�����ı������
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