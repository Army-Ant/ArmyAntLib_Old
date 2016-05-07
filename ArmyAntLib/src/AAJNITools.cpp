/*
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

#include "../include/AAJNITools.h"

namespace ArmyAnt {

namespace JNITools {

const char* c_javaStringSig = "java/lang/String";
const char* c_javaStringGetBytes = "getBytes";
const char* c_javaStringGetBytesSig = "(Ljava/lang/String;)[B";

std::string ArmyAnt::JNITools::JstringToCstring(JNIEnv* env, jstring jstr)
{
	// ��ȡJava�ַ�����
	std::string rtn = "";
	jclass clsstring = env->FindClass(c_javaStringSig);
	AAAssert(clsstring != nullptr, "");
	// ��ȡJava���ַ���ת�ֽ�������
	jstring strencode = env->NewStringUTF("GB2312");
	static jmethodID mid = env->GetMethodID(clsstring, c_javaStringGetBytes, c_javaStringGetBytesSig);
	AAAssert(mid != nullptr, "");
	// ִ��Java��ת������
	jbyteArray barr = (jbyteArray)(env->CallObjectMethod(jstr, mid, strencode));
	jsize alen = env->GetArrayLength(barr);
	char* tmp = new char[alen];
	// �õ�ת������ֽ���
	jbyte* ba = env->GetByteArrayElements(barr, JNI_FALSE);
	// ������C�ַ���
	if(alen > 0)
	{
		memcpy(tmp, ba, alen);
		tmp[alen] = 0;
	}
	rtn = tmp;
	// �ͷ�Java�ֽ���
	env->ReleaseByteArrayElements(barr, ba, 0);
	Fragment::AA_SAFE_DELALL(tmp);
	return rtn;
}

jstring CstringToJstring(JNIEnv*env, std::string str)
{
	return env->NewStringUTF(str.c_str());
}


jmethodID GetInterfaceMethodID(JNIEnv *env, const char* interfaceName, const char* methodName, const char* methodSig)
{
	auto cls = env->FindClass(interfaceName);
	AAAssert(cls != nullptr, nullptr);
	return env->GetMethodID(cls, methodName, methodSig);
}

}

}