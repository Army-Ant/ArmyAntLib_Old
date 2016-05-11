/*	*
	* Copyright (c) 2015 ArmyAnt
	* ��Ȩ���� (c) 2015 ArmyAnt
	*
	* Licensed under the BSD License, Version 2.0 (the License);
	* �����ʹ��BSDЭ�鱣��, Э��汾:2.0
	* you may not use this file except in compliance with the License.
	* ʹ�ñ���Դ�����ļ�������, ��Ϊͬ��Э��
	* You can read the license content in the file "ARMYANT.COPYRIGHT.BSD_LICENSE.MD" at the root of this project
	* �������ڱ���Ŀ�ĸ�Ŀ¼�ҵ���Ϊ"ARMYANT.COPYRIGHT.BSD_LICENSE.MD"���ļ�, ���Ķ�Э������
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

#include "../include/AAIStream_Memory.h"
#include "AAIStream_Private"

namespace ArmyAnt {

class IStream_Memory_Private : public IStream_Private
{
public:
	IStream_Memory_Private() {}
	~IStream_Memory_Private() {}

public:
	void* mem = nullptr;
	uint64 len = 0;
	uint64 pos = 0;
	bool needFree = false;
};

Memory::Memory()
	:StaticStream(IStream_Private::handleManager.GetHandle(this, new IStream_Memory_Private()))
{
}

Memory::~Memory()
{
}

bool Memory::Open(const char * src)
{
	// TODO: Fill the memory string openning function
	return false;
}

bool Memory::Open(uint32 len)
{
	auto hd = static_cast<IStream_Memory_Private*>(IStream_Private::handleManager[handle]);
	if(len <= 0)
		return false;
	hd->mem = malloc(len);
	if(hd->mem == nullptr)
		return false;
	hd->len = len;
	hd->needFree = true;
	return true;
}

bool Memory::Open(mac_uint memaddr, uint64 len)
{
	auto hd = static_cast<IStream_Memory_Private*>(IStream_Private::handleManager[handle]);
	//typeû�����ã�˵��������δ�ر�
	if(hd->mem != nullptr)
		return false;
	AAAssert(memaddr != 0, false);
	//�����ڴ��ַ
	hd->mem = reinterpret_cast<void*>(memaddr);
	//�����ڴ��ܷ��д
	try
	{
		uint8 a = (static_cast<uint8*>(hd->mem))[0];
		char*p = static_cast<char*>(hd->mem);
		p[0] = 1;
		p[0] = 2;
		p[0] = a;
		a = (static_cast<uint8*>(hd->mem))[len - 1];
		p[len - 1] = 1;
		p[len - 1] = 2;
		p[len - 1] = a;
	}
	//������ܶ�д����ȡ���򿪸���
	catch(std::exception&)
	{
		hd->mem = nullptr;
		return false;
	}
	hd->len = len;
	return true;
}

bool Memory::Open(void* memaddr, uint64 len)
{
	return Open(reinterpret_cast<mac_uint>(memaddr), len);
}

bool Memory::Close()
{
	auto hd = static_cast<IStream_Memory_Private*>(IStream_Private::handleManager[handle]);
	if(hd->needFree)
		free(hd->mem);
	hd->mem = nullptr;
	hd->len = 0;
	hd->needFree = false;
	return true;
}

bool Memory::IsOpened(bool)
{
	auto hd = static_cast<IStream_Memory_Private*>(IStream_Private::handleManager[handle]);
	return hd->mem != nullptr && hd->len > 0;
}

uint64 Memory::GetLength() const
{
	return static_cast<IStream_Memory_Private*>(IStream_Private::handleManager[handle])->len;
}

uint64 Memory::GetPos() const
{
	return static_cast<IStream_Memory_Private*>(IStream_Private::handleManager[handle])->pos;
}

bool Memory::IsEndPos() const
{
	auto hd = static_cast<IStream_Memory_Private*>(IStream_Private::handleManager[handle]);
	return hd->pos == hd->len && hd->len > 0;
}

bool Memory::MovePos(uint64 pos)
{
	auto hd = static_cast<IStream_Memory_Private*>(IStream_Private::handleManager[handle]);
	if(hd->len <= 0)
		return false;
	if(hd->pos > hd->len)
		hd->pos = hd->len;
	else
		hd->pos = pos;
	return true;
}

const char * Memory::GetSourceName() const
{
	static bool lock = false;
	static char name[16] = "";
	if(lock)
		return nullptr;
	lock = true;
	auto hd = static_cast<IStream_Memory_Private*>(IStream_Private::handleManager[handle]);
	//�����ڴ��ַ�����ȵ���Ϣ
#ifdef _32BIT
	sprintf(name, "%X", hd->mem);
#else
	sprintf(name, "%X%X", uint32(reinterpret_cast<mac_uint>(hd->mem) / AA_UINT32_MAX), uint32(reinterpret_cast<mac_uint>(hd->mem) % AA_UINT32_MAX));
#endif
	lock = false;
	return name;
}

void * Memory::GetMemory()
{
	return static_cast<IStream_Memory_Private*>(IStream_Private::handleManager[handle])->mem;
}

const void * Memory::GetMemory() const
{
	return const_cast<Memory*>(this)->GetMemory();
}

uint64 Memory::Read(void * buffer, uint32 len, uint64 pos)
{
	AAAssert(buffer != nullptr, uint64(0));
	auto hd = static_cast<IStream_Memory_Private*>(IStream_Private::handleManager[handle]);
	bool isCurPos = false;
	if(pos == AA_UINT64_MAX)
	{
		isCurPos = true;
		pos = hd->pos;
	}
	if(pos >= hd->len)
		return false;
	//�ڴ濽��
	uint64 reallen = Fragment::min(hd->len - pos, len);
	memcpy(static_cast<char*>(buffer), static_cast<char*>(hd->mem) + pos, uint32(reallen));
	if(isCurPos)
		hd->pos += reallen;
	return reallen;
}

uint64 Memory::Read(void * buffer, uint8 endtag, uint64 maxlen)
{
	AAAssert(buffer != nullptr, uint64(0));
	auto hd = static_cast<IStream_Memory_Private*>(IStream_Private::handleManager[handle]);
	//���ֶ�ȡ
	for(auto nowPos = hd->pos; ; nowPos++)
	{
		if(nowPos < hd->len && static_cast<uint8*>(hd->mem)[nowPos] == endtag || nowPos - hd->pos == maxlen)
		{
			auto alllen = uint64(nowPos - hd->pos);
			memcpy(static_cast<char*>(buffer), static_cast<char*>(hd->mem) + hd->pos, alllen);
			hd->pos = nowPos;
			return alllen;
		}
	}
}

uint64 Memory::Write(void * buffer, uint64 len)
{
	AAAssert(buffer != nullptr, uint64(0));
	auto hd = static_cast<IStream_Memory_Private*>(IStream_Private::handleManager[handle]);
	//���len����û�д��룬��д�ڴ浽����ֱ������0�����൱��д���ַ�������
	if(len == 0)
		while(static_cast<uint8*>(buffer)[len] != 0)
			len++;

	uint64 writeLen = 0;
	writeLen = uint64(Fragment::min(len, hd->len - hd->pos));
	memcpy(static_cast<uint8*>(hd->mem) + hd->pos, buffer, writeLen);
	hd->pos += writeLen;
	return writeLen;
}

bool Memory::IsEmpty() const
{
	return const_cast<Memory*>(this)->IsOpened();
}

}