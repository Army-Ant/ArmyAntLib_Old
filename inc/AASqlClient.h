/*	*
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
    */

#ifndef AA_SQL_CLIENT_H_2017_4_1
#define AA_SQL_CLIENT_H_2017_4_1

#include "AASqlStructs.h"

namespace ArmyAnt
{

class ARMYANTLIB_API ISqlClient
{
public:
    ISqlClient();
    virtual ~ISqlClient();

public:
    virtual bool connect(const String&serverHost)=0;
    virtual bool connect(const String&serverAddress, const String&port) = 0;
    virtual void disconnect() = 0;
    virtual bool isConnection() = 0;
    virtual bool getDatabaseCount();
    virtual bool getDatabaseList(SqlDatabaseInfo*&dbs, uint32 maxCount = 0);

public:
    virtual bool getTablesCount(const String&dbName);
    virtual bool getViewsCount(const String&dbName);
    virtual bool getTableNameList(const String&dbName, SqlTableInfo*&tables, uint32 maxCount = 0);
    virtual bool getViewNameList(const String&dbName, SqlTableInfo*&tables, uint32 maxCount = 0);
    virtual SqlTable getWholeTable(const String&dbName, const String&tableName);
    virtual SqlTable getWholeView(const String&dbName, const String&tableName);
    virtual SqlTable getTableAllFields(const String&dbName, SqlTableInfo*&tables);

public:
    // select * from [tableName]
    virtual SqlTable select(const String&dbName, const String&tableName, const SqlClause*clauses = nullptr, int clausesNum = 0);
    // select [columnNames] from [tableName]
    virtual SqlTable select(const String&dbName, const String&tableName, const String*columnNames, int columnNum, const SqlClause*clauses = nullptr, int clausesNum = 0);
    // update [tableName] set [updatedData ( k=value , k=value ... )]
    virtual bool update(const String&dbName, const String&tableName, const SqlRow&updatedData, const SqlClause*clauses = nullptr, int clausesNum = 0);
    // insert into [tableName] [insertedData (k , k , k ... ) values ( value , value , value ... )]
    virtual bool insertRow(const String&dbName, const String&tableName, const SqlRow&insertedData);
    // alter table [tableName] add [columnHead name datatype (others)...]
    virtual bool insertColumn(const String&dbName, const String&tableName, const SqlFieldHead&columnHead);
    virtual bool insertColumn(const String&dbName, const String&tableName, const SqlColumn&column);
    // delete from [tableName]
    virtual bool deleteRow(const String&dbName, const String&tableName, const SqlClause*where = nullptr);
    // alter table [tableName] drop column [columnName]
    virtual bool deleteColumn(const String&dbName, const String&tableName, const String&columnName);

public:
    virtual bool createDatabase(const String&dbName);
    virtual bool deleteDatabase(const String&dbName);
    virtual bool createTable(const String&dbName, const String&tableName);
    virtual bool deleteTable(const String&dbName, const String&tableName);

public:
    virtual SqlTable select(const String&sql) = 0;
    virtual bool execute(const String&sql, String&result) = 0;

    AA_FORBID_ASSGN_OPR(ISqlClient);
    AA_FORBID_COPY_CTOR(ISqlClient);
};

}

#endif // AA_SQL_CLIENT_H_2017_4_1