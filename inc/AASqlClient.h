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

#ifndef AA_SQL_CLIENT_H_2017_4_1
#define AA_SQL_CLIENT_H_2017_4_1

#include "AASqlStructs.h"

namespace ArmyAnt
{

class ARMYANTLIB_API SqlClient
{
public:
    SqlClient();
    virtual ~SqlClient();

public:
    bool login(const String&serverHost);
    bool login(const String&serverAddress, const String&port);
    void logout();
    bool isLoggedIn();
    bool getDatabaseCount();
    bool getDatabaseList(SqlDatabaseInfo*&dbs, uint32 maxCount = 0);

public:
    bool getTablesCount(const String&dbName);
    bool getViewsCount(const String&dbName);
    bool getTableNameList(const String&dbName, SqlTableInfo*&tables, uint32 maxCount = 0);
    bool getViewNameList(const String&dbName, SqlTableInfo*&tables, uint32 maxCount = 0);
    SqlTable getWholeTable(const String&dbName, const String&tableName);
    SqlTable getWholeView(const String&dbName, const String&tableName);
    SqlTable getTableAllFields(const String&dbName, SqlTableInfo*&tables);

public:
    // select * from [tableName]
    SqlTable select(const String&dbName, const String&tableName, const SqlClause*clauses = nullptr, int clausesNum = 0);
    // select [columnNames] from [tableName]
    SqlTable select(const String&dbName, const String&tableName, const String*columnNames, int columnNum, const SqlClause*clauses = nullptr, int clausesNum = 0);
    // update [tableName] set [updatedData ( k=value , k=value ... )]
    bool update(const String&dbName, const String&tableName, const SqlRow&updatedData, const SqlClause*clauses = nullptr, int clausesNum = 0);
    // insert into [tableName] [insertedData (k , k , k ... ) values ( value , value , value ... )]
    bool insertRow(const String&dbName, const String&tableName, const SqlRow&insertedData);
    // alter table [tableName] add [columnHead name datatype (others)...]
    bool insertColumn(const String&dbName, const String&tableName, const SqlFieldHead&columnHead);
    bool insertColumn(const String&dbName, const String&tableName, const SqlColumn&column);
    // delete from [tableName]
    bool deleteRow(const String&dbName, const String&tableName, const SqlClause*where = nullptr);
    // alter table [tableName] drop column [columnName]
    bool deleteColumn(const String&dbName, const String&tableName, const String&columnName);

public:
    bool createDatabase(const String&dbName);
    bool deleteDatabase(const String&dbName);
    bool createTable(const String&dbName, const String&tableName);
    bool deleteTable(const String&dbName, const String&tableName);

public:
    SqlTable select(const String&sql);
    bool execute(const String&sql, String&result);

    AA_FORBID_ASSGN_OPR(SqlClient);
    AA_FORBID_COPY_CTOR(SqlClient);
};

}

#endif // AA_SQL_CLIENT_H_2017_4_1