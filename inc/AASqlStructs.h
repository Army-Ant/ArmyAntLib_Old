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

#ifndef AA_SQL_STRUCTS_H_2017_4_1
#define AA_SQL_STRUCTS_H_2017_4_1

#include "AAString.h"

namespace ArmyAnt
{

enum class SqlFieldType : uint8
{
    Null,

    MySql_CHAR,
    MySql_VARCHAR,
    MySql_TINYTEXT,
    MySql_TEXT,
    MySql_BLOB,
    MySql_MEDIUMTEXT,
    MySql_MEDIUMBLOB,
    MySql_LONGTEXT,
    MySql_LONGBLOB,
    MySql_ENUM,
    MySql_SET,
    MySql_TINYINT,
    MySql_SMALLINT,
    MySql_MEDIUMINT,
    MySql_INT,
    MySql_BIGINT,
    MySql_FLOAT,
    MySql_DOUBLE,
    MySql_DEMICAL,
    MySql_DATE,
    MySql_DATETIME,
    MySql_TIMESTAMP,
    MySql_TIME,
    MySql_YEAR,

    MsAccess_Currency,
    MsAccess_AutoNumber,
    MsAccess_YesNo,
    MsAccess_Hyperlink,
    MsAccess_Text,// = MySql_Varchar,
    MsAccess_Memo,// = MySql_Text,
    MsAccess_Byte,// = MySql_TinyInt,
    MsAccess_Integer,// = MySql_SmallInt,
    MsAccess_Long,// = MySql_Int,
    MsAccess_Single,// = MySql_Float,
    MsAccess_Double,// = MySql_Double,
    MsAccess_DateTime,// = MySql_DateTime,
    MsAccess_OleObject,// = MySql_LongBlob,
    MsAccess_LookupWizard,// = MySql_Enum,

    MsSqlServer_char,
    MsSqlServer_varchar,
    MsSqlServer_text,
    MsSqlServer_nchar,
    MsSqlServer_nvarchar,
    MsSqlServer_ntext,
    MsSqlServer_bit,
    MsSqlServer_binary,
    MsSqlServer_varbinary,
    MsSqlServer_image,
    MsSqlServer_tinyint,
    MsSqlServer_smallint,
    MsSqlServer_int,
    MsSqlServer_bigint,
    MsSqlServer_decimal,
    MsSqlServer_numeric,
    MsSqlServer_smallmoney,
    MsSqlServer_money,
    MsSqlServer_float,
    MsSqlServer_real,
    MsSqlServer_datetime,
    MsSqlServer_datetime2,
    MsSqlServer_smalldatetime,
    MsSqlServer_date,
    MsSqlServer_time,
    MsSqlServer_datetimeoffset,
    MsSqlServer_timestamp,
    MsSqlServer_sql_variant,
    MsSqlServer_uniqueidentifier,
    MsSqlServer_xml,
    MsSqlServer_cursor,
    MsSqlServer_table,

    MsExcel_Normal
};

enum class SqlClauseType
{
    Null,
    Where,
    OrderBy,
    Top
};

struct ARMYANTLIB_API SqlFieldHead
{
    uint32 length;
    String name;
    String defalutValue;
    String comment;
    SqlFieldType type;
    uint16 primaryKeyIndex;
    bool allowNull;
    bool autoIncrease;
};

class ARMYANTLIB_API SqlField
{
public:
    SqlField();
    SqlField(const String&value, const SqlFieldHead*head);
    ~SqlField();

public:
    bool setValue(const String&value);
    const String&getValue()const;
    const SqlFieldHead*getHead()const;

private:
    const SqlFieldHead* head;
    String value;
};

class ARMYANTLIB_API SqlRow
{
public:
    SqlRow(const SqlRow&copied);
    SqlRow(SqlRow&&moved);
    ~SqlRow();

public:
    uint32 size()const;
    const SqlField&operator[](int32 index);

private:
    friend class SqlClient;
    friend class SqlTable;
    SqlField* fields;
    uint32 length;
};

class ARMYANTLIB_API SqlColumn
{
public:
    SqlColumn(const SqlColumn&copied);
    SqlColumn(SqlColumn&&moved);
    ~SqlColumn();

public:
    uint32 size()const;
    const SqlFieldHead*getHead(uint32 index)const;
    const SqlField&operator[](int32 index)const;

private:
    friend class SqlClient;
    friend class SqlTable;
    SqlField* fields;
    uint32* indexes;
    uint32 length;
};

struct ARMYANTLIB_API SqlDatabaseInfo
{
    String name;
    String server;
    String charset;
    String sortRule;
};

struct ARMYANTLIB_API SqlTableInfo
{
    String tableName;
    String engine;
    String comment;
    SqlDatabaseInfo* parentDatabase;
};

class ARMYANTLIB_API SqlTable : protected SqlTableInfo 
{
public:
    SqlTable(const SqlTable&copied);
    SqlTable(SqlTable&&moved);
    ~SqlTable();

public:
    uint32 size()const;
    uint32 width()const;
    uint32 height()const;
    const SqlFieldHead*getHead(int32 index)const;
    SqlRow operator[](int32 index);
    const SqlField&operator()(int32 rowIndex, int32 colIndex);
    SqlColumn operator()(std::nullptr_t, int32 colIndex);

private:
    friend class SqlClient;
    uint32 _width;
    SqlFieldHead* heads;
    uint32 _height;
    SqlField** fields;
};

class ARMYANTLIB_API SqlClause
{
public:
    SqlClause(const String&str);
    ~SqlClause();

public:
    SqlClauseType type;
    String key;
    String value;
};

}

#endif // AA_SQL_STRUCTS_H_2017_4_1
