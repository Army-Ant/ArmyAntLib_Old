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

#ifndef AA_JSON_2017_3_9
#define AA_JSON_2017_3_9

#include "AADefine.h"
#include "AA_start.h"

namespace ArmyAnt{

enum class EJsonValueType : uint8{
	Undefined,
	Boolean,
	Numeric,
	String,
	Object,
	Null,
	Array
};

class ARMYANTLIB_API JsonUnit{
public:
	JsonUnit(){};
	virtual ~JsonUnit(){};

public:
	virtual uint32 toJsonString(char*str)const=0;
	virtual uint32 getJsonStringLength()const = 0;
	virtual bool fromJsonString(const char*str)=0;
	virtual EJsonValueType getType()const=0;
	/*virtual bool isObject()const final;
	virtual bool isDefined()const final;
	virtual bool lowEquals(const JsonUnit&value)const;
	virtual bool highEquals(const JsonUnit&value)const;

public:
	virtual bool operator ==(const JsonUnit&value)const;
	virtual bool operator !=(const JsonUnit&value)const;*/

public:
	static JsonUnit* create(const char*value);
	static bool release(JsonUnit*& ptr);

public:
	static JsonUnit* undefined;
	static JsonUnit* jsonNull;

private:
	bool isCreated = false;
};

class ARMYANTLIB_API JsonBoolean : public JsonUnit{
public:
	JsonBoolean();
	virtual ~JsonBoolean();

public:
	virtual uint32 toJsonString(char*str)const override;
	virtual uint32 getJsonStringLength()const override;
	virtual bool fromJsonString(const char*str)override;
	virtual EJsonValueType getType()const override{ return EJsonValueType::Boolean; };

public:
	bool getBoolean()const;

public:
	static JsonBoolean* true_;
	static JsonBoolean* false_;

private:
	bool value;
};

class ARMYANTLIB_API JsonNumeric : public JsonUnit{
public:
	JsonNumeric();
	virtual ~JsonNumeric();

public:
	virtual uint32 toJsonString(char*str)const override;
	virtual uint32 getJsonStringLength()const override;
	virtual bool fromJsonString(const char*str)override;
	virtual EJsonValueType getType()const override{ return EJsonValueType::Numeric; }

public:
	virtual int32 getInteger()const;
	virtual int64 getLong()const;
	virtual double getDouble()const;

public:
	static JsonNumeric* nan;
	static JsonNumeric* infinity;

private:
	union{
		int32 ivalue;
		int64 lvalue;
		double dvalue;
	} value;
	int8 whatvalue;  // 0 means no value, and 1-3 means the value type in union;
	int8 rightLength;
};

class ARMYANTLIB_API JsonString : public JsonUnit{
public:
	JsonString();
	virtual ~JsonString();

public:
	virtual uint32 toJsonString(char*str)const override;
	virtual uint32 getJsonStringLength()const override;
	virtual bool fromJsonString(const char*str)override;
	virtual EJsonValueType getType()const override{ return EJsonValueType::String; };

public:
	const char* getString()const;

private:
	char* value;
	uint32 length;
};

class ARMYANTLIB_API JsonObject : public JsonUnit{
public:
	JsonObject();
	virtual ~JsonObject();

public:
	virtual uint32 toJsonString(char*str)const override;
	virtual uint32 getJsonStringLength()const override;
	virtual bool fromJsonString(const char*str)override;
	virtual EJsonValueType getType()const override{ return EJsonValueType::Object; }

public:
	virtual JsonUnit* getChild(const char*key);
	virtual const JsonUnit* getChild(const char*key)const;
	virtual bool putChild(const char*key, JsonUnit*value);
	virtual bool removeChild(const char*key);

public:
	const uint32 handle;
};

class ARMYANTLIB_API JsonArray : public JsonObject{
public:
	JsonArray();
	virtual ~JsonArray();

public:
	virtual uint32 toJsonString(char*str)const override;
	virtual uint32 getJsonStringLength()const override;
	virtual bool fromJsonString(const char*str)override;
	virtual EJsonValueType getType()const override{ return EJsonValueType::Array; };

public:
	virtual JsonUnit* getChild(const char*key)override;
	virtual const JsonUnit* getChild(const char*key)const override;
	virtual bool putChild(const char*, JsonUnit*value)override;
	virtual bool removeChild(const char*key)override;

public:
	JsonUnit* getChild(int32 index);
	const JsonUnit* getChild(int32 index)const;
	int32 putChild(JsonUnit*value);
	bool insertChild(int32 index, JsonUnit*value);
	bool removeChild(int32 key);
};

class JsonException : public std::exception
{
public:
	JsonException(const char* msg)
#ifdef OS_WINDOWS
		:std::exception(msg) {}
#else
		: std::exception(), message(msg) {}
	virtual const char* what()const _GLIBCXX_USE_NOEXCEPT override { return this->message.c_str(); }
protected:
	std::string message;
#endif
};


}

#endif