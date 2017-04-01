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

#ifndef AA_SQL_STRUCTS_H_2017_4_1
#define AA_SQL_STRUCTS_H_2017_4_1

#include "AA_start.h"

namespace ArmyAnt
{

enum class SqlFieldType
{
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

class ARMYANTLIB_API SqlField
{

};

}

#endif // AA_SQL_STRUCTS_H_2017_4_1
