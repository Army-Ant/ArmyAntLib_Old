#ifndef AA_FILE_H_2015_11_11
#define AA_FILE_H_2015_11_11

#include <cstdio>
#include "AADefine.h"
#include "AA_start.h"

namespace ArmyAnt {

enum class StreamType
{
	None,
	File,
	Memory,
	NamePipe,
	ComData,
	Network		//����ͨ�Ź�����δ����
};

class ARMYANTLIB_API FileStream
{
public:
	FileStream();
	~FileStream();

public:
	/*	* @ summary : �趨���Ĵ򿪹���
		* @ param = "nocreate" : ���˲���Ϊtrue�������������ļ����ļ�������ʱ���ʧ��
		* @ param = "noexist" : ���˲���Ϊtrue���������ļ��Ѵ��ڣ��ļ��Ѵ���ʱ���ʧ��
		*/
	bool SetStreamMode(bool nocreate = true, bool noexist = false);

	/*	* @ summary : �򿪴����ļ�
		* @ param = "filepath" : Ҫ�򿪵��ļ�·��
		*/
	bool Open(const char* filepath);

	/*	* @ summary : ���ڴ��ַ���ݴ��ڴ�����ڴ�
		* @ param = "memaddr" : Ҫ�ڴ��ַ���
		* @ param = "len" : �ɶ�д���ڴ���ܴ�С
		*/
	bool Open(DWORD memaddr, fpos_t len);

	/*	* @ summary : ���ڴ�ָ����ڴ�����ڴ�
		* @ param = "memaddr" : Ҫ�ڴ���ʼָ��
		* @ param = "len" : �ɶ�д���ڴ���ܴ�С
		*/
	bool Open(BYTE* memaddr, fpos_t len);

	/*	* @ summary : �������ܵ�
		* @ param = "pipename" : �ܵ������Զ���
		* @ param = "pipePath" : �ܵ�·������Ϊ��
		* @ param = "pipeServer" : �ܵ����ڻ�����ͨ��Ϊ������Ĭ�ϣ�
	*/
	bool Open(const char* pipename, const char*pipePath, const char*pipeServer = ".");

	/*	* @ summary : �򿪴���
		* @ param = "comNum" : �������
	*/
	bool Open(BYTE comNum);

	//��ָ������������ͨ�ţ���δʵ�֣�
	bool Open(const char* netAddr, BYTE protocol);
	//��ָ��IP�Ͷ˿ڵ�����ͨ�ţ���δʵ�֣�
	bool Open(DWORD netIp, WORD port, BYTE protocol);

	/*	* @ summary : �������ܵ�
		*/
	bool Close();

	/*	* @ summary : �������Ƿ����
		* @ param = "dynamicCheck" : �Ƿ����ʵʱ��飬���ò���ΪĬ�ϻ���trueʱ���ڷ�����״̬�£������Զ�ȡ��������״̬�£�������pingĿ���ַ
		*/
	bool IsOpened(bool dynamicCheck = true) ;

	/*	* @ summary : ���鵱ǰ��������
		* @ return : ������������
		*/
	StreamType NowType() const;

	/*	* @ summary : ������ĳ���
		*/
	fpos_t GetLength() const;

	/*	* @ summary : ��鵱ǰ��дָ���λ��
		*/
	fpos_t GetPos() const;

	/*	* @ summary : ��дָ���Ƿ��ѵ���ĩβ
		*/
	bool IsEndPos() const;

	/*	* @ summary : ����дָ���ƶ���ָ��λ��
		* @ param = "pos" : ������ͷ����Ҫ�ƶ�����λ�á��˲���Ĭ��ֵΪ�ƶ�����β��
		*/
	bool MovePos(fpos_t pos = FILE_LONG_POS_END) const;

	/*	* @ summary : ��ȡ��Դ���ļ����������ļ�ָ��·�����ƣ����ڹܵ����ǹܵ�ȫ�������ڴ������Ǵ������������ڴ�͹����ڴ棬�����ڴ��ַ�ţ��������磬��������������ip��ַ�Ͷ˿�
		*/
	const char* GetSourceName() const;

	/*	* @ summary : ��ȡ���е�����
		* @ param = "buffer" : Ҫ�����ݱ��浽��λ��
		* @ param = "len" : Ҫ��ȡ����󳤶�
		* @ param = "pos" : Ҫ��ȡ�Ŀ�ʼλ�ã������˲�����ӵ�ǰλ�þ͵ض�ȡ
		* @ return : ��ȡ����ʵ�ʳ��ȣ����Ϊ0�����ܷ����˴���
		*/
	DWORD Read(void*buffer, DWORD len = FILE_SHORT_POS_END, fpos_t pos = FILE_LONG_POS_END);

	/*	* @ summary : ��ȡ���е�����
		* @ param = "buffer" : Ҫ�����ݱ��浽��λ��
		* @ param = "endtag" : ��ȡ����ֵ���ֽ�����ʱ��ֹͣ
		* @ param = "maxlen" : Ҫ��ȡ����󳤶�
		* @ return : ��ȡ����ʵ�ʳ��ȣ����Ϊ0�����ܷ����˴���
		*/
	DWORD Read(void*buffer, BYTE endtag, DWORD maxlen = FILE_SHORT_POS_END);

	/*	* @ summary : ������д����
		* @ param = "buffer" : Ҫд����������ڵ�λ��
		* @ param = "len" : Ҫд��ĳ��ȣ������˲����������������е�0ֵ���ַ�����β��ʱֹͣд��
		* @ return : д���ʵ�ʳ��ȣ����Ϊ0�����ܷ����˴���
		*/
	DWORD Write(void*buffer, DWORD len = 0);

public:
	//���½����ļ�����

	/*	* @ summary : �����ļ���Ҫ��Ŀ���ļ������ڣ����򷵻�false
		* @ param = "srcPath" : Դ�ļ�·��
		* @ param = "dstPath" : Ŀ���ļ�·��
		*/
	static bool CopyFile(const char*srcPath, const char*dstPath);

	/*	* @ summary : �ƶ��ļ����������ļ���Ҫ��Ŀ���ļ����ļ��������ڣ����򷵻�false
		* @ param = "srcPath" : Դ�ļ�·������
		* @ param = "dstPath" : Ŀ���ļ�·������
		*/
	static bool MoveOrRenameFile(const char*srcPath, const char*dstPath);

	/*	* @ summary : ɾ���ļ�
		* @ param = "path" : Ҫɾ�����ļ�·��
		*/
	static bool DeleteFile(const char*path);

	/*	* @ summary : ����ļ��Ƿ��Ѵ���
		* @ param = "path" : Ҫ�����ļ�·��
		*/
	static bool IsFileExist(const char*path);

public:

	/*	* @ summary : ��������д��ָ��λ�ã�д�벿��Ϊ�ӵ�ǰָ�봦���ļ���β������ڵ����βǰ�Ѿ�д��ĳ��ȴﵽFILE_SHORT_POS_END����ֹͣ
		* @ param = "buffer" : Ҫд�������
		*/
	FileStream&operator>>(void*buffer);

	/*	* @ summary : ��Ŀ���ַ�������д����������������0���ݣ��ַ�����β��ʱֹͣд��
		* @ param = "buffer" : Ҫд�������
		*/
	FileStream&operator<<(void*buffer);
	
	/*	* @ summary : �������ݴӵ�ǰָ�봦֮����������ݣ���������һ�ļ�
		* @ param = "filename" : Ҫд����ļ�
		*/
	bool operator^=(const char* filename);

	/*	* @ summary : �ж����Ƿ�Ϊ��
	*/
	bool operator==(std::nullptr_t);

	/*	* @ summary : �ж����Ƿ�Ϊ��
	*/
	bool operator!=(std::nullptr_t);

public:
	// ����ļ�����
	static const fpos_t FILE_LONG_POS_END = 0x7fffffffffffffff;
	static const DWORD FILE_SHORT_POS_END = 0xffffffff;

public:
	// �ڲ����ݾ������������
	const DWORD handle;
};

} // namespace ArmyAnt

#endif // AA_FILE_H_2015_11_11
