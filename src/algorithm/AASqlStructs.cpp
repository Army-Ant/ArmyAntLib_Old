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

#include "../../inc/AASqlStructs.h"

namespace ArmyAnt
{
SqlField::SqlField()
    :head(nullptr), value("")
{
}
SqlField::SqlField(const String & value, const SqlFieldHead * head)
    :head(head), value(value)
{
}

SqlField::~SqlField()
{
}

bool SqlField::setValue(const String & value)
{
    this->value = value;
    return true;
}

const String & SqlField::getValue() const
{
    return value;
}

const SqlFieldHead * SqlField::getHead() const
{
    return head;
}

SqlRow::SqlRow(const SqlRow & copied)
    :length(copied.length), fields(nullptr)
{
    if (length <= 0)
        return;
    fields = new SqlField[length];
    for (uint32 i = 0; i < length; ++i)
    {
        fields[i] = copied.fields[i];
    }
}

SqlRow::SqlRow(SqlRow && moved)
    :length(moved.length), fields(moved.fields)
{
    moved.length = 0;
    moved.fields = nullptr;
}

SqlRow::~SqlRow()
{
    Fragment::AA_SAFE_DELALL(fields);
}

uint32 SqlRow::size() const
{
    return length;
}

const SqlField & SqlRow::operator[](uint32 index)
{
    if (index < 0)
        index += length;
    if (index >= length || index < 0)
        throw nullptr;
    return fields[index];
}

SqlColumn::SqlColumn(const SqlColumn & copied)
    :fields(nullptr), indexes(nullptr), length(copied.length)
{
    if (length <= 0)
        return;
    fields = new SqlField[length];
    indexes = new uint32[length];
    for (uint32 i = 0; i < length; ++i)
    {
        fields[i] = copied.fields[i];
        indexes[i] = copied.indexes[i];
    }
}

SqlColumn::SqlColumn(SqlColumn && moved)
    :fields(moved.fields), indexes(moved.indexes), length(moved.length)
{
    moved.fields = nullptr;
    moved.length = 0;
    moved.indexes = nullptr;
}

SqlColumn::~SqlColumn()
{
    Fragment::AA_SAFE_DELALL(indexes);
    Fragment::AA_SAFE_DELALL(fields);
}

uint32 SqlColumn::size() const
{
    return length;
}

const SqlFieldHead * SqlColumn::getHead(uint32 index) const
{
    return operator[](index).getHead();
}

const SqlField & SqlColumn::operator[](uint32 index) const
{
    if (index < 0)
        index += length;
    if (index >= length || index < 0)
        throw nullptr;
    return fields[index];
}

SqlTable::SqlTable(const SqlTable & copied)
    :_width(copied._width), _height(copied._height), heads(nullptr), fields(nullptr)
{
    if (_width > 0)
    {
        heads = new SqlFieldHead[_width];
        for (uint32 i = 0; i < _width; ++i)
        {
            heads[i] = copied.heads[i];
        }
        if (_height > 0)
        {
            fields = new SqlField*[_height];
            for (uint32 i = 0; i < _height; ++i)
            {
                fields[i] = new SqlField[_width];
                for (uint32 n = 0; n < _width; ++n)
                {
                    fields[i][n] = copied.fields[i][n];
                }
            }
        }
    }
}

SqlTable::SqlTable(SqlTable && moved)
    :_width(moved._width), _height(moved._height), heads(moved.heads), fields(moved.fields)
{
    moved.heads = nullptr;
    moved.fields = nullptr;
    moved._width = 0;
    moved._height = 0;
}

SqlTable::~SqlTable()
{
    Fragment::AA_SAFE_DELALL(heads);
    for (uint32 i = 0; i < _height; ++i)
    {
        Fragment::AA_SAFE_DELALL(fields[i]);
    }
    Fragment::AA_SAFE_DELALL(fields);
}

uint32 SqlTable::size() const
{
    return _width*_height;
}

uint32 SqlTable::width() const
{
    return _width;
}

uint32 SqlTable::height() const
{
    return _height;
}

const SqlFieldHead * SqlTable::getHead(uint32 index) const
{
    if (index < 0)
        index += _width;
    if (index >= _width || index < 0)
        throw nullptr;
    return heads + index;
}

SqlRow SqlTable::operator[](uint32 index)
{
    if (index < 0)
        index += _height;
    if (index >= _height || index < 0 || _width <= 0)
        throw nullptr;
    char tmp[sizeof(SqlRow)] = "";
    SqlRow ret = *reinterpret_cast<SqlRow*>(tmp);
    ret.length = _width;
    ret.fields = new SqlField[_width];
    for (uint32 i = 0; i < _width; ++i)
    {
        ret.fields[i] = fields[index][i];
    }
    return ret;
}

const SqlField & SqlTable::operator()(uint32 rowIndex, uint32 colIndex)
{
    if (rowIndex < 0)
        rowIndex += _height;
    if (colIndex < 0)
        colIndex += _width;
    if (rowIndex >= _height || rowIndex < 0 || colIndex >= _width || colIndex < 0)
        throw nullptr;
    return fields[rowIndex][colIndex];
}

SqlColumn SqlTable::operator()(std::nullptr_t, uint32 colIndex)
{
    if (colIndex < 0)
        colIndex += _width;
    if (colIndex >= _width || colIndex < 0 || _height <= 0)
        throw nullptr;
    char tmp[sizeof(SqlColumn)] = "";
    SqlColumn ret = *reinterpret_cast<SqlColumn*>(tmp);
    ret.length = _height;
    ret.fields = new SqlField[_height];
    ret.indexes = new uint32[_height];
    for (uint32 i = 0; i < _height; ++i)
    {
        ret.fields[i] = fields[i][colIndex];
        ret.indexes[i] = i;
    }
    return ret;
}

}