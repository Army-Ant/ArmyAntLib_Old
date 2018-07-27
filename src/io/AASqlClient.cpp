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

#include "../../inc/AASqlClient.h"

namespace ArmyAnt {

    ISqlClient::ISqlClient() {
    }

    ISqlClient::~ISqlClient() {
    }

    SqlTable ISqlClient::getWholeTable(const String &dbName, const String &tableName) {
        return select(dbName, tableName);
    }

    SqlTable ISqlClient::getWholeView(const String &dbName, const String &tableName) {
        return select(dbName, tableName);
    }

    SqlTable
    ISqlClient::select(const String &dbName, const String &tableName, const SqlClause *clauses, int clausesNum) {
        return select("select * from " + dbName + '.' + tableName + organizeSqlClause(clauses, clausesNum));
    }

    SqlTable ISqlClient::select(const String &dbName, const String &tableName, const String *columnNames, int columnNum,
                                const SqlClause *clauses, int clausesNum) {
        String sql = "select ";
        if (columnNames != nullptr)
            for (int i = 0; i < columnNum; ++i) {
                sql += columnNames[i] + " , ";
            }
        return select(sql + "from " + dbName + '.' + tableName + organizeSqlClause(clauses, clausesNum));
    }

    bool ISqlClient::update(const String &dbName, const String &tableName, const SqlRow &updatedData,
                            const SqlClause *clauses, int clausesNum) {
        if (updatedData.size() <= 0)
            return false;
        String sql = "update " + dbName + '.' + tableName + " set ";
        for (uint32 i = 0; i < updatedData.size(); ++i) {
            sql += updatedData[i].getHead()->name + " = \"" + updatedData[i].getValue() + "\" ";
            if (i != updatedData.size() - 1)
                sql += ", ";
        }
        return execute(sql + organizeSqlClause(clauses, clausesNum));
    }

    bool ISqlClient::insertRow(const String &dbName, const String &tableName, const SqlRow &insertedData) {
        if (insertedData.size() <= 0)
            return false;
        String keys = "";
        String values = "";
        for (uint32 i = 0; i < insertedData.size(); ++i) {
            keys += insertedData[i].getHead()->name;
            values += insertedData[i].getValue();
            if (i != insertedData.size() - 1) {
                keys += ", ";
                values += ", ";
            }
        }

        return execute("insert into " + dbName + '.' + tableName + " ( " + keys + " ) values ( " + values + " )");
    }

    bool ISqlClient::insertColumn(const String &dbName, const String &tableName, const SqlFieldHead &columnHead) {
        return execute("alter table " + dbName + '.' + tableName + " add " + organizeColumnInfo(columnHead));
    }

    bool ISqlClient::insertColumn(const String &dbName, const String &tableName, const SqlColumn &column) {
        for (uint32 i = 0; i < column.size(); ++i) {
            if (!insertColumn(dbName, tableName, *(column.getHead(i))))
                return false;
        }
        return column.size() > 0;
    }

    bool ISqlClient::deleteRow(const String &dbName, const String &tableName, const SqlClause *where) {
        if (where != nullptr && where->type != SqlClauseType::Where)
            return false;
        return execute("delete from " + dbName + '.' + tableName + ' ' + organizeSqlClause(where, 1));
    }

    bool ISqlClient::deleteColumn(const String &dbName, const String &tableName, const String &columnName) {
        return execute("alter table " + dbName + '.' + tableName + " drop column " + columnName);
    }

    bool ISqlClient::createDatabase(const String &dbName) {
        return execute("create database "+dbName);
    }

    bool ISqlClient::deleteDatabase(const String &dbName) {
        return execute("drop database "+dbName);
    }

    bool ISqlClient::createTable(const String &dbName, const String &tableName, const SqlColumn&column, const SqlTableInfo*tableInfo) {
        if(column.size()<=0)
            return false;
        String sql = "create table " + dbName+'.'+tableName+" ( ";
        for(uint32 i=0;i<column.size();++i){
            sql += organizeColumnInfo(*(column[i].getHead()));
            if(i< column.size()-1)
                sql+=" , ";
        }
        return execute(sql + " )");
    }

    bool ISqlClient::deleteTable(const String &dbName, const String &tableName) {
        return execute("drop table "+dbName+'.'+tableName);
    }

    String ISqlClient::organizeColumnInfo(const SqlFieldHead &column) {
        // TODO: 应当扩展支持的更多属性
        return column.name + ' ' + SqlStructHelper::getDataTypeName(column.type) + (column.allowNull ? "" : " not null");
    }

    String ISqlClient::organizeSqlClause(const SqlClause *clauses, int clausesNum) {
        // TODO: 完善clause的结构然后补全此处
        String sql = "";

        return sql;
    }
}