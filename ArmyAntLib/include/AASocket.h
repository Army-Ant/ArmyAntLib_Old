﻿/*
* Copyright (c) 2015 ArmyAnt
* 版权所有 (c) 2015 ArmyAnt
*
* Licensed under the BSD License, Version 2.0 (the License);
* 本软件使用BSD协议保护, 协议版本:2.0
* you may not use this file except in compliance with the License.
* 使用本开源代码文件的内容, 视为同意协议
* You can read the license content in the file "ARMYANT.COPYRIGHT.BSD_LICENSE.MD" at the root of this project
* 您可以在本项目的根目录找到名为"ARMYANT.COPYRIGHT.BSD_LICENSE.MD"的文件, 来阅读协议内容
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
#ifndef AA_SOCKET_H_2016_3_28
#define AA_SOCKET_H_2016_3_28

#include "AA_start.h"
#include "AADefine.h"
#include <functional>

namespace ArmyAnt {

class ARMYANTLIB_API IPAddr
{
public:
	IPAddr(const char* ipStr);
	IPAddr(const IPAddr&value);
	virtual IPAddr&operator=(const char* ipStr);
	IPAddr&operator=(const IPAddr&value);
	virtual ~IPAddr();

public:
	virtual const char*GetStr()const = 0;
	virtual uint8 GetIPVer()const = 0;
	virtual bool operator==(const char*value)const;
	virtual bool operator!=(const char*value)const;

protected:
	virtual void ParseFromString(const char* str);
};

class ARMYANTLIB_API IPAddr_v4 : public IPAddr
{
public:
	IPAddr_v4(const char* ipStr);
	IPAddr_v4(uint32 ipNum);
	IPAddr_v4(uint8 net, uint8 host, uint8 lh, uint8 impNum);
	IPAddr_v4(const IPAddr_v4&value);
	IPAddr_v4&operator=(const char* ipStr)override;
	IPAddr_v4&operator=(uint32 ipNum);
	IPAddr_v4&operator=(const IPAddr_v4&value);
	~IPAddr_v4();

public:
	const char*GetStr()const override;
	uint8 GetIPVer()const override;
	uint32 GetNum()const;
	uint8 GetNet()const;
	bool SetNet(uint8 net);
	uint8 GetHost()const;
	bool SetHost(uint8 host);
	uint8 GetLH()const;
	bool SetLH(uint8 lh);
	uint8 GetImpNumber()const;
	bool SetImpNumber(uint8 impNum);

public:
	bool operator==(const char*value)const override;
	bool operator!=(const char*value)const override;
	bool operator==(uint32 ipNum)const;
	bool operator!=(uint32 ipNum)const;
	bool operator==(const IPAddr_v4&value)const;
	bool operator!=(const IPAddr_v4&value)const;

protected:
	void ParseFromString(const char* str)override;

private:
	union
	{
		struct { uint8 net, host, lh, impNum; } bytes;
		struct { uint16 head, imp; } words;
		uint32 dwords;
	} addr;
};

class ARMYANTLIB_API IPAddr_v6 : public IPAddr
{
public:
	IPAddr_v6(const char* ipStr);
	IPAddr_v6(uint16 words[8]);
	IPAddr_v6(uint8 bytes[16]);
	IPAddr_v6(const IPAddr_v6&value);
	IPAddr_v6&operator=(const char* ipStr)override;
	IPAddr_v6&operator=(const IPAddr_v6&value);
	~IPAddr_v6();

public:
	const char*GetStr()const override;
	uint8 GetIPVer()const override;
	uint8 GetByte(uint8 index)const;
	bool SetByte(uint8 index, uint8 value);
	uint16 GetWord(uint8 index)const;
	bool SetWord(uint8 index, uint16 value);

public:
	bool operator==(const char*value)const override;
	bool operator!=(const char*value)const override;
	bool operator==(const IPAddr_v6&value)const;
	bool operator!=(const IPAddr_v6&value)const;
	uint16& operator[](int index);
	uint16 operator[](int index)const;

protected:
	void ParseFromString(const char* str)override;

private:
	union
	{
		uint8 bytes[16];
		uint16 words[8];
		uint32 dwords[4];
		uint64 lwords[2];
	} addr;
};

struct IPAddrInfo
{
	IPAddr* addr;
	uint16 port;
};

//作为通信操作的公共基类
class ARMYANTLIB_API Socket
{
	//回调函数原型定义，请在实现任何回调函数体时注意效率，不要延时太长，否则会导致网络阻塞甚至丢失数据
public:
	//得到连接回调，参数分别为客户端IPv4，客户端端口号，用户传入参数, 返回true表示接受连接, 返回false表示拒绝连接
	typedef std::function<bool(const IPAddr&, uint16, void*)> TCPConnectCall;
	//服务器收到数据回调，参数分别为客户端IPv4，客户端端口号，数据包，数据包容量大小（不是数据包大小），用户传入参数
	typedef std::function<void(const IPAddr&, uint16, uint8*, uint16, void*)> GettingCall;
	//断开连接回调，参数分别为客户端IPv4，客户端端口号，用户传入参数
	typedef std::function<void(const IPAddr&, uint16, void*)> ServerLostCall;
	//断开连接回调，参数为用户传入参数, 返回false表示要求重新连接
	typedef std::function<bool(void*)> ClientLostCall;

protected:
	Socket(void*innerType/* new Socket_Private()*/);
public:
	virtual ~Socket(void);
public:
	//设定收到信息回调
	bool SetGettingCallBack(GettingCall recvCB, void*pUser = nullptr);
	bool SetMaxIOBufferLen(uint32 len = 65530);

public:
	//获取本机IP地址
	static IPAddr_v4 GetLocalIPv4Addr(int index = 0);
	static IPAddr_v6 GetLocalIpv6Addr(int index = 0);

	//错误代码含义：
	//		0：没有错误,或者在记录错误代码前出现意外;
	//		1：输入参数错误！
	//		2：成员变量不正确，无法初始化
	//		3：套接字已经创建！或者UDP监听已经进行！
	//		4：套接字创建失败！请使用WSAGetLaseError获取错误信息
	//		5：绑定套接字失败！请使用WSAGetLaseError获取错误信息
	//		6：开启服务器listen失败！请使用WSAGetLaseError获取错误信息
	//			连接服务器失败！请使用WSAGetLaseError获取错误信息
	//			发送数据失败！请使用WSAGetLaseError获取错误信息
	
protected:
	const uint32 handle;

	AA_FORBID_CREATE_OB(Socket);
	AA_FORBID_COPY_CTOR(Socket);
	AA_FORBID_ASSGN_OPR(Socket);
};

//用于TCP服务器的操作类
class ARMYANTLIB_API TCPServer :public Socket
{
public:
	//默认构造函数，参数为：
	// nAddr：服务器所使用地址，详见SetServerAddr函数说明
	// nPort：服务器所使用端口，详见SetServerPort函数说明
	// nMaxConnNum：最大允许同时连接的数量
	// RecvCB：收到消息的回调函数
	// pUser：收到消息的回调函数用户参数
	TCPServer(int32 maxConnNum = 5);

	//虽然本析构函数中检测并关闭了未关闭的服务器,但析构函数不应负责关闭服务器
	//请调用者务必遵守调用规则,自行调用关闭服务器的函数,以此规范代码层次结构
	//如果Debug中析构时服务器未关闭,会弹出assert警告
	virtual ~TCPServer(void);

public:
	//以下是连接前的一些设定

	//设定收到连接回调
	bool SetConnectCallBack(TCPConnectCall connectCB, void*pUser = nullptr);
	//设定断开连接回调
	bool SetDisconnectCallBack(ServerLostCall disconnCB, void*pUser = nullptr);
	//设定可同时接受的最大连接数,如果传入参数不是正数，会返回false
	bool SetMaxConnNum(int32 maxClientNum);

public:
	//以下是连接和实际收发操作

	//开启服务器，开始监听并运行回调
	bool StartServer(bool isIPv6 = true);
	//停止服务器，关闭套接字和所有传入连接,输入参数为最大等待时间，超过此时限就强制关闭线程
	bool StopServer(uint32 waitTime);
	//断开客户端
	bool GivenUpClient(int32 index);
	bool GivenUpClient(IPAddrInfo cl);
	bool GivenUpAllClients();
	//向指定索引的客户端发送数据
	bool Send(int32 index, void*data, uint64 len);

public:
	//以下是获取状态

	//获取最大可连接的客户端数
	int GetMaxConnNum() const;
	//获取当前连接的客户端数
	int GetNowConnNum() const;
	//根据索引获取对应客户端的基本信息
	IPAddrInfo GetClientByIndex(int index) const;
	//根据地址和端口号获取客户端索引
	int GetIndexByAddrPort(const IPAddrInfo& info);
	//服务器是否正在监听
	bool IsStarting() const;

	AA_FORBID_COPY_CTOR(TCPServer);
	AA_FORBID_ASSGN_OPR(TCPServer);
};


// 用于TCP客户端的操作类
class ARMYANTLIB_API TCPClient : public Socket
{
public:

	//默认构造函数，参数为：
	// nServerAddr：服务器所使用地址，详见SetServerAddr函数说明
	// nServerPort：服务器所使用端口号，详见SetServerPort函数说明
	// nLocalPort：本地客户端所使用端口号,详见SetClientPort函数说明
	// RecvCB：收到消息的回调函数
	// pRecvUser：收到消息的回调函数用户参数
	TCPClient(uint16 svrPort = 0);
	//虽然本析构函数中检测并关闭了未断开的连接,但析构函数不应负责断开连接
	//请调用者务必遵守调用规则,自行调用断开连接的函数,以此规范代码层次结构
	//如果Debug中析构时连接未断开,会弹出assert警告
	virtual ~TCPClient();

public:
	//以下是连接前的一些设定

	//设置服务器地址,不可以是INADDR_ANY
	bool SetServerAddr(const IPAddr& addr);
	//设定服务器端口,如果传入端口号为0，会返回false
	bool SetServerPort(uint16 port);
	//设定断开连接回调
	bool SetLostServerCallBack(ClientLostCall disconnCB, void*pUser);

public:
	//以下是连接和实际收发操作

	//连接服务器
	bool ConnectServer(bool isAsync);
	//断开连接
	bool DisconnectServer(uint32 waitTime);
	//向服务器发送消息
	bool Send(void*pUser, size_t len);

public:
	//以下是获取状态

	//获取服务器IP地址
	const IPAddr& GetServerAddr() const;
	//获取服务器端口
	uint16 GetServerPort() const;
	//是否在连接状态
	bool IsConnection() const;

	AA_FORBID_COPY_CTOR(TCPClient);
	AA_FORBID_ASSGN_OPR(TCPClient);
};


//用于UDP收发操作的类
class ARMYANTLIB_API UDPSilgle : public Socket
{
public:

	//默认构造函数，参数为：
	// nAddr：所使用地址，详见SetIPAddr函数说明
	// nPort：所使用端口，详见SetUDPPort函数说明
	// RecvCB：收到消息的回调函数
	// pUser：收到消息的回调函数用户参数
	UDPSilgle();
	virtual ~UDPSilgle();

public:
	//以下是实际收发操作

	//开始监听
	bool StartListening(bool isAsync);
	//向指定地址和端口发送（无须初始化套接字）
	bool Send(const IPAddr& addr, uint16 nPort, void*data, size_t len);
	//关闭收发端口套接字
	bool CloseUDPSocket(uint32 waitTime);

public:
	//以下是获取状态

	//UDP是否正在监听
	bool IsStarting() const;

	AA_FORBID_COPY_CTOR(UDPSilgle);
	AA_FORBID_ASSGN_OPR(UDPSilgle);
};

} // namespace ArmyAnt

#endif // AA_SOCKET_H_2016_3_28