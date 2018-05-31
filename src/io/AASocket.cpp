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

#include "../base/base.hpp"
#include "../../inc/AAString.h"
#include "../../inc/AASocket.h"
#include "../../inc/AAClassPrivateHandle.hpp"

#include <map>
#include <thread>
#include <boost/asio.hpp>

#ifdef OS_WINDOWS
#include <WinSock2.h>
#include <in6addr.h>
#include <ws2tcpip.h>
#else
#include <list>
#include <netinet/in.h>
#endif


#define AA_HANDLE_MANAGER ClassPrivateHandleManager<Socket, Socket_Private>::getInstance()


namespace ArmyAnt {

static bool g_isExceptionEnabled = true;
static void throwException(SocketException&e) {
	if (g_isExceptionEnabled)
		throw e;
}

/**************** Source file private functions **************************/

// 将socket的ipv4地址转换为ArmyAnt::IPAddr_v4
inline static IPAddr_v4 ToAAAddr(in_addr addr) 
{
#ifdef OS_WINDOWS
	return IPAddr_v4(addr.S_un.S_addr);
#else
    return IPAddr_v4(addr.s_addr);
#endif
}

// 将socket的ipv6地址转换为ArmyAnt::IPAddr_v6
inline static IPAddr_v6 ToAAAddr(in6_addr addr) 
{
#if defined OS_WINDOWS
	return IPAddr_v6(addr.u.Word);
#elif defined OS_BSD
    return IPAddr_v6(addr.__u6_addr.__u6_addr16);
#else
    return IPAddr_v6(addr.__in6_u.__u6_addr16);
#endif
}

// 将socket的地址信息(不确定版本)转换为ArmyAnt::IPAddr(通用)
inline static IPAddr& ToAAAddr(addrinfo addr)
{
	if(addr.ai_family == AF_INET6)
	{
		static auto ret = ToAAAddr(*reinterpret_cast<in6_addr*>(&addr));
		return ret;
	}
	else
	{
		static auto ret = ToAAAddr(*reinterpret_cast<in_addr*>(&addr));
		return ret;
	}
}

// 将ArmyAnt::IPAddr_v4转换成socket的ipv4地址结构
inline static in_addr ToCAddr(const IPAddr_v4&addr)
{
	in_addr ret;
#ifdef OS_WINDOWS
	ret.S_un.S_addr = addr.GetNum();
#else
    ret.s_addr = addr.GetNum();
#endif
	return ret;
}

// 将ArmyAnt::IPAddr_v6转换成socket的ipv6地址结构
inline static in6_addr ToCAddr(const IPAddr_v6&addr)
{
	in6_addr ret;
	for(uint8 i = 0; i < 8; i++)
	{
#if defined OS_WINDOWS
		ret.u.Word[i] = addr.GetWord(i);
#elif defined OS_BSD
        ret.__u6_addr.__u6_addr16[i] = addr.GetWord(i);
#else
        ret.__in6_u.__u6_addr16[i] = addr.GetWord(i);
#endif
	}
	return ret;
}

// 将ArmyAnt::IPAddr(通用)转换成socket的ip不确定版本的地址结构
inline static addrinfo ToCAddr(const IPAddr& addr)
{
	addrinfo ret;
	if(addr.GetIPVer() == 4)
	{
		in_addr a = ToCAddr(static_cast<const IPAddr_v4>(addr));
		ret = *reinterpret_cast<addrinfo*>(&a);
	}
	else
	{
		in6_addr a = ToCAddr(static_cast<const IPAddr_v6>(addr));
		ret = *reinterpret_cast<addrinfo *>(&a);
	}
	return ret;
}

// 将boost的ip地址,转换成ArmyAnt::IPAddr
inline static IPAddr& ToAAAddr(boost::asio::ip::address addr)
{
	if(addr.is_v4())
	{
		static auto ret = IPAddr_v4(addr.to_v4().to_ulong());
		return ret;
	}
	else
	{
		auto bts = addr.to_v6().to_bytes();
		uint8 ip[16];
		for(int i = 0; i < 16; i++)
			ip[i] = bts[i];
		static auto ret = IPAddr_v6(ip);
		return ret;
	}
}

// 将ArmyAnt::IPAddr转换成boost的ip地址
inline static boost::asio::ip::address ToBoostAddr(const IPAddr& addr)
{
	if(addr.GetIPVer() == 4)
		return boost::asio::ip::address_v4(static_cast<IPAddr_v4>(addr).GetNum());
	std::array<uint8, 16>wds;
	for(uint8 i = 0; i < wds.size(); i++)
	{
		wds[i] = static_cast<IPAddr_v6>(addr).GetByte(i);
	}
	return boost::asio::ip::address_v6(wds);
}

/************* Source for class IPAddr and its derived classes ************/


IPAddr::IPAddr(const char * ipStr)
{
	ParseFromString(ipStr);
}

IPAddr::IPAddr(const IPAddr & )
{
}

IPAddr & IPAddr::operator=(const char * ipStr)
{
	ParseFromString(ipStr);
	return *this;
}

IPAddr & IPAddr::operator=(const IPAddr & )
{
	return *this;
}

IPAddr::~IPAddr()
{
}

uint8 IPAddr::GetIPVer() const
{
	AAAssert(false, uint8(0));
	return uint8(0);
}

bool IPAddr::operator==(const char * value)const
{
	return String(value) == GetStr();
}

bool IPAddr::operator!=(const char * value)const
{
	return !operator==(value);
}

bool IPAddr::operator==(const IPAddr & value) const
{
	if(GetIPVer() == 4)
		return static_cast<IPAddr_v4>(*this) == value;
	return  static_cast<IPAddr_v6>(*this) == value;
}

bool IPAddr::operator!=(const IPAddr & value) const
{
	return !operator==(value);
}

IPAddr::operator IPAddr_v4()
{
	return *reinterpret_cast<IPAddr_v4*>(this);
}

IPAddr::operator const IPAddr_v4() const
{
	return *reinterpret_cast<const IPAddr_v4*>(this);
}

IPAddr::operator IPAddr_v6()
{
	return *reinterpret_cast<IPAddr_v6*>(this);
}

IPAddr::operator const IPAddr_v6() const
{
	return *reinterpret_cast<const IPAddr_v6*>(this);
}

IPAddr * IPAddr::Create(const char * ipStr)
{
	try
	{
		return reinterpret_cast<IPAddr*>(new IPAddr_v4(ipStr));
	}
	catch(std::invalid_argument)
	{
		return reinterpret_cast<IPAddr*>(new IPAddr_v6(ipStr));
	}
}

IPAddr * IPAddr::Clone(const IPAddr & value)
{
	{
		if(value.GetIPVer() == 4)
			return reinterpret_cast<IPAddr*>(new IPAddr_v4(value));
		return reinterpret_cast<IPAddr*>(new IPAddr_v6(value));
	}
}

void IPAddr::ParseFromString(const char *)
{
}



IPAddr_v4::IPAddr_v4(const char * ipStr)
	: IPAddr(ipStr)
{
}

IPAddr_v4::IPAddr_v4(uint32 ipNum)
	: IPAddr(nullptr)
{
	addr.dwords = ipNum;
}

IPAddr_v4::IPAddr_v4(uint8 net, uint8 host, uint8 lh, uint8 impNum)
	: IPAddr(nullptr)
{
	addr.bytes.net = net;
	addr.bytes.host = host;
	addr.bytes.lh = lh;
	addr.bytes.impNum = impNum;
}

IPAddr_v4::IPAddr_v4(const IPAddr_v4 & value)
	: IPAddr(nullptr)
{
	addr.dwords = value.addr.dwords;
}

IPAddr_v4 & IPAddr_v4::operator=(const char * ipStr)
{
	IPAddr::operator=(ipStr);
	return*this;
}

IPAddr_v4 & IPAddr_v4::operator=(uint32 ipNum)
{
	addr.dwords = ipNum;
	return*this;
}

IPAddr_v4 & IPAddr_v4::operator=(const IPAddr_v4 & value)
{
	IPAddr::operator=(value);
	addr.dwords = value.addr.dwords;
	return*this;
}

IPAddr_v4::~IPAddr_v4()
{
}

const char * IPAddr_v4::GetStr() const
{
	static char ret[32];
	memset(ret, 0, 32);
	sprintf(ret, "%d.%d.%d.%d", addr.bytes.net, addr.bytes.host, addr.bytes.lh, addr.bytes.impNum);
	return ret;
}

uint8 IPAddr_v4::GetIPVer() const
{
	return uint8(4);
}

uint32 IPAddr_v4::GetNum() const
{
	return addr.dwords;
}

uint8 IPAddr_v4::GetHost() const
{
	return addr.bytes.host;
}

bool IPAddr_v4::SetHost(uint8 host)
{
	addr.bytes.host = host;
	return true;
}

uint8 IPAddr_v4::GetNet() const
{
	return addr.bytes.net;
}

bool IPAddr_v4::SetNet(uint8 net)
{
	addr.bytes.net = net;
	return true;
}

uint8 IPAddr_v4::GetImpNumber() const
{
	return addr.bytes.impNum;
}

bool IPAddr_v4::SetImpNumber(uint8 impNum)
{
	addr.bytes.impNum = impNum;
	return true;
}

uint8 IPAddr_v4::GetLH() const
{
	return addr.bytes.lh;
}

bool IPAddr_v4::SetLH(uint8 lh)
{
	addr.bytes.lh = lh;
	return true;
}

bool IPAddr_v4::operator==(const char * value)const
{
	return IPAddr::operator==(value);
}

bool IPAddr_v4::operator!=(const char * value)const
{
	return IPAddr::operator!=(value);
}

bool IPAddr_v4::operator==(uint32 ipNum)const
{
	return addr.dwords == ipNum;
}

bool IPAddr_v4::operator!=(uint32 ipNum)const
{
	return !operator==(ipNum);
}

bool IPAddr_v4::operator==(const IPAddr_v4 & value)const
{
	return addr.dwords == value.addr.dwords;
}

bool IPAddr_v4::operator!=(const IPAddr_v4 & value)const
{
	return !operator==(value);
}

IPAddr_v4&IPAddr_v4::localhost() {
	static IPAddr_v4 ret((unsigned char)127, (unsigned char)0, (unsigned char)0, (unsigned char)1);
	return ret;
}

void IPAddr_v4::ParseFromString(const char * str)
{
	//若为空字符串,则将地址复位
	if(str == nullptr || strlen(str) == 0)
		addr.dwords = 0;
	else
	{
		// 分解ip地址字符串格式, 分解失败则抛出异常
		int host, net, ipNum, lh;
		if(sscanf(str, "%d.%d.%d.%d", &net, &host, &lh, &ipNum)<4)
			throw std::invalid_argument("Wrong IPv4 address string format!");
		if(host>255 || host<0 || net>255 || net<0 || ipNum>255 || ipNum<0 || lh>255 || lh<0)
			throw std::invalid_argument("Wrong IPv4 address string number (one or more number is larger than 255 or less than 0)!");
		addr.bytes.net = uint8(net);
		addr.bytes.host = uint8(host);
		addr.bytes.lh = uint8(lh);
		addr.bytes.impNum = uint8(ipNum);
	}
}

IPAddr_v6::IPAddr_v6(const char * ipStr)
	:IPAddr(ipStr)
{
}

IPAddr_v6::IPAddr_v6(uint16 words[8])
	:IPAddr(nullptr)
{
	for(int i = 0; i < 8; i++)
	{
		addr.words[i] = words[i];
	}
}

IPAddr_v6::IPAddr_v6(uint8 bytes[16])
	:IPAddr(nullptr)
{
	for(int i = 0; i < 16; i++)
	{
		addr.bytes[i] = bytes[i];
	}
}

IPAddr_v6::IPAddr_v6(const IPAddr_v6 & value)
	:IPAddr(nullptr)
{
	for(int i = 0; i < 2; i++)
	{
		addr.lwords[i] = value.addr.lwords[i];
	}
}

IPAddr_v6 & IPAddr_v6::operator=(const char * ipStr)
{
	IPAddr::operator=(ipStr);
	return*this;
}

IPAddr_v6 & IPAddr_v6::operator=(const IPAddr_v6 & value)
{
	IPAddr::operator=(value);
	for(int i = 0; i < 2; i++)
	{
		addr.lwords[i] = value.addr.lwords[i];
	}
	return*this;
}

IPAddr_v6::~IPAddr_v6()
{
}

const char * IPAddr_v6::GetStr() const
{
	static char ret[128];
	memset(ret, 0, 32);
	sprintf(ret, "%d:%d:%d:%d:%d:%d:%d:%d", addr.words[0], addr.words[1], addr.words[2], addr.words[3], addr.words[4], addr.words[5], addr.words[6], addr.words[7]);
	return ret;
}

uint8 IPAddr_v6::GetIPVer() const
{
	return uint8(6);
}

uint8 IPAddr_v6::GetByte(uint8 index) const
{
	AAAssert(index < 16, uint8(0));
	return addr.bytes[index];
}

bool IPAddr_v6::SetByte(uint8 index, uint8 value)
{
	AAAssert(index < 16, false);
	addr.bytes[index] = value;
	return true;
}

uint16 IPAddr_v6::GetWord(uint8 index) const
{
	AAAssert(index < 8, uint16(0));
	return addr.words[index];
}

bool IPAddr_v6::SetWord(uint8 index, uint16 value)
{
	AAAssert(index < 8, false);
	addr.words[index] = value;
	return true;
}

bool IPAddr_v6::operator==(const char * value) const
{
	return IPAddr::operator==(value);
}

bool IPAddr_v6::operator!=(const char * value) const
{
	return IPAddr::operator!=(value);
}

bool IPAddr_v6::operator==(const IPAddr_v6 & value) const
{
	return addr.lwords[0] == value.addr.lwords[0] && addr.lwords[1] == value.addr.lwords[1];
}

bool IPAddr_v6::operator!=(const IPAddr_v6 & value) const
{
	return !operator==(value);
}

uint16 & IPAddr_v6::operator[](int index)
{
	AAAssert(index < 8, addr.words[index]);
	return addr.words[index];
}

uint16 IPAddr_v6::operator[](int index) const
{
	return const_cast<IPAddr_v6*>(this)->operator[](index);
}

IPAddr_v6&IPAddr_v6::localhost() {
	static IPAddr_v6 ret("0:0:0:0:0:0:0:1");
	return ret;
}

void IPAddr_v6::ParseFromString(const char * str)
{
	//若为空字符串,则将地址复位
	if(str == nullptr || strlen(str) == 0)
	{
		addr.lwords[0] = 0;
		addr.lwords[1] = 0;
	}
	else
	{
		// 分解ip地址字符串格式, 分解失败则抛出异常
		// TODO: 目前仅支持标准结构的ipv6地址字符串, 考虑添加简化方式的地址字符串解析
		int words[8] = {0};
		if(sscanf(str, "%d:%d:%d:%d:%d:%d:%d:%d", words, words + 1, words + 2, words + 3, words + 4, words + 5, words + 6, words + 7) < 8)
			throw std::invalid_argument("Wrong IPv6 address string format!");
		for(int i = 0; i < 8; i++)
			if(words[i] > 65535 || words[i] < 0)
				throw std::invalid_argument("Wrong IPv6 address string number (one or more number is larger than 65535 or less than 0)!");
		for(int i = 0; i < 8; i++)
			addr.words[i] = uint16(words[i]);
	}
}

/***************** Defination for private data structs ********************/

// 代表一个TCP连接的socket套接字数据
struct TCP_Socket_Datas
{
	TCP_Socket_Datas() {};
	TCP_Socket_Datas(std::shared_ptr<boost::asio::ip::tcp::socket> s, const IPAddr* addr, uint16 port, const IPAddr* localAddr, uint16 localport);
	virtual ~TCP_Socket_Datas();

	std::shared_ptr<boost::asio::ip::tcp::socket> s;	//boost的socket连接对象
	uint8* buffer = nullptr;		//接受信息的buffer
	uint8* sendBuffer = nullptr;	//发送信息的buffer
	IPAddr* addr = nullptr;			// 对方ip地址
	uint16 port = 0;				// 对方端口
	IPAddr* localAddr = nullptr;	// 我方使用的ip地址
	uint16 localport = 0;			// 我方使用的端口

	AA_FORBID_COPY_CTOR(TCP_Socket_Datas);
	AA_FORBID_ASSGN_OPR(TCP_Socket_Datas);
};

// Socket类的私有数据
struct Socket_Private
{
	Socket_Private():localService() {};
	virtual ~Socket_Private();

	static void onTCPSendingResponse(Socket_Private*hd, uint8* sendBuffer, boost::asio::ip::tcp::socket*s, boost::system::error_code err, std::size_t size, uint64 realSize);

	uint32 maxBufferLen = 65530;		// 接收数据的buffer的最大长度
	boost::asio::io_service localService;
	std::thread* localServiceThread = nullptr;

	Socket::GettingCall gettingCallBack = nullptr;	// 接受信息时的回调
	void* gettingCallData = nullptr;	// 接受信息时的回调要传递的额外数据
	Socket::SendingResp asyncResp = nullptr;
	void* asyncRespUserData = nullptr;
	uint32 asyncRespTimes = 0;
	bool isAsync = false;				// 是否异步监听, 对于服务器, 总是true
	bool isListening = false;			// 是否正在监听

	AA_FORBID_COPY_CTOR(Socket_Private);
	AA_FORBID_ASSGN_OPR(Socket_Private);
};

// TCPServer类的私有数据
struct TCPServer_Private : public Socket_Private
{
	TCPServer_Private(int32 maxClientNum) :Socket_Private(), maxClientNum(maxClientNum),acceptor(localService) {};
	virtual ~TCPServer_Private();

	static void onConnect(TCPServer*server, std::shared_ptr<boost::asio::ip::tcp::socket> s, boost::system::error_code err);
	static void onReceived(TCPServer*server, std::shared_ptr<boost::asio::ip::tcp::socket> s, TCP_Socket_Datas* cl, boost::system::error_code err, std::size_t size);

	boost::asio::ip::tcp::acceptor acceptor;		// 连接接受对象

	int32 serverPort = 0;
	int32 maxClientNum = 0;

	Socket::TCPConnectCall connectCallBack = nullptr;	// 收到连接时的回调
	void* connetcCallData = nullptr;
	Socket::ServerLostCall lostCallBack = nullptr;
	void* lostCallData = nullptr;

	std::map<uint32, TCP_Socket_Datas*> clients;

	AA_FORBID_COPY_CTOR(TCPServer_Private);
	AA_FORBID_ASSGN_OPR(TCPServer_Private);
};

struct TCPClient_Private : public Socket_Private, public TCP_Socket_Datas
{
	TCPClient_Private() :Socket_Private(), TCP_Socket_Datas() {};
	virtual ~TCPClient_Private();

	static void onAsyncConnect(Socket::TCPConnectCall asyncConnectCallBack, void* asyncConnectCallData, TCPClient*client, boost::system::error_code err);
	static void onConnect(Socket::TCPConnectCall asyncConnectCallBack, void* asyncConnectCallData, TCPClient*client, boost::system::error_code err);
	static void onReceived(Socket::TCPConnectCall asyncConnectCallBack, void* asyncConnectCallData, TCPClient*client, boost::system::error_code err, std::size_t size);

	Socket::ClientLostCall lostCallBack = nullptr;
	void* lostCallData = nullptr;

	AA_FORBID_COPY_CTOR(TCPClient_Private);
	AA_FORBID_ASSGN_OPR(TCPClient_Private);
};

struct UDPSingle_Private : public Socket_Private
{
	UDPSingle_Private();

	boost::asio::ip::udp::socket* s = nullptr;	//boost的socket连接对象
	IPAddr* localAddr = nullptr;
	uint16 localPort = 0;
	boost::asio::ip::udp::endpoint recver;
	std::list<boost::asio::mutable_buffer> buffer;		//接受信息的buffer
	std::list<boost::asio::mutable_buffer> sendBuffer;	//发送信息的buffer

	AA_FORBID_COPY_CTOR(UDPSingle_Private);
	AA_FORBID_ASSGN_OPR(UDPSingle_Private);
};


/******************* Source for private data structs **********************/


TCP_Socket_Datas::TCP_Socket_Datas(std::shared_ptr<boost::asio::ip::tcp::socket> s, const IPAddr * addr, uint16 port, const IPAddr* localAddr, uint16 localport)
	:s(s), addr(IPAddr::Clone(*addr)), port(port), localAddr(IPAddr::Clone(*localAddr)), localport(localport)
{
}

TCP_Socket_Datas::~TCP_Socket_Datas(){
	if(s != nullptr){
		boost::system::error_code err;
		if(s->is_open()){
			s->shutdown(s->shutdown_both, err);
		}
		if(!err)
			s->cancel(err);
		if(!err){
			s->close(err);
		}
	}
	AA_SAFE_DEL(addr);
	AA_SAFE_DEL(localAddr);
	AA_SAFE_DELALL(buffer);
	AA_SAFE_DELALL(sendBuffer);
}

void Socket_Private::onTCPSendingResponse(Socket_Private*hd, uint8* sendBuffer, boost::asio::ip::tcp::socket*s,  boost::system::error_code err, std::size_t size, uint64 realSize){
	if(hd->asyncResp != nullptr && hd->asyncResp(size, hd->asyncRespTimes++, 0, sendBuffer, realSize, hd->asyncRespUserData) && err)
		s->async_write_some(boost::asio::buffer(sendBuffer, realSize), std::bind(onTCPSendingResponse, hd, sendBuffer, s, std::placeholders::_1, std::placeholders::_2, realSize));
	else
		AA_SAFE_DELALL(sendBuffer);
}

Socket_Private::~Socket_Private()
{
}

TCPServer_Private::~TCPServer_Private()
{
}

void TCPServer_Private::onConnect(TCPServer*server, std::shared_ptr<boost::asio::ip::tcp::socket> s, boost::system::error_code err) {
	auto hd = static_cast<TCPServer_Private*>(AA_HANDLE_MANAGER[server]);
	if (!err)
	{
		uint32 index = 0;
		for (uint32 i = 0; i < hd->clients.size() + 1; i++)
			if (hd->clients.find(i) == hd->clients.end())
			{
				hd->clients.insert(std::pair<uint32, TCP_Socket_Datas*>(i, new TCP_Socket_Datas(s, &ToAAAddr(s->remote_endpoint().address()), s->remote_endpoint().port(), &ToAAAddr(s->local_endpoint().address()), s->local_endpoint().port())));
				index = i;
				break;
			}
		auto cl = hd->clients.find(index)->second;
		if (hd->connectCallBack == nullptr || hd->connectCallBack(*cl->addr, cl->port, hd->connetcCallData))
		{
			cl->buffer = new uint8[hd->maxBufferLen];
			memset(cl->buffer, 0, hd->maxBufferLen);
			s->async_read_some(boost::asio::buffer(cl->buffer, hd->maxBufferLen), std::bind(TCPServer_Private::onReceived, server, s, cl, std::placeholders::_1, std::placeholders::_2));
		}
		else
		{
			server->GivenUpClient(index);
		}
	}
	std::shared_ptr<boost::asio::ip::tcp::socket> news(new boost::asio::ip::tcp::socket(hd->localService));
	hd->acceptor.async_accept(*news, std::bind(TCPServer_Private::onConnect, server, news, std::placeholders::_1));
}

void TCPServer_Private::onReceived(TCPServer*server, std::shared_ptr<boost::asio::ip::tcp::socket> s, TCP_Socket_Datas* cl, boost::system::error_code err, std::size_t size){
	auto hd = static_cast<TCPServer_Private*>(AA_HANDLE_MANAGER[server]);
	if(!err){
		if(size > 0){
			hd->gettingCallBack(ToAAAddr(s->remote_endpoint().address()), s->remote_endpoint().port(), cl->buffer, size, hd->gettingCallData);
			memset(cl->buffer, 0, hd->maxBufferLen);
		}
	} else switch(err.value()){
		case boost::asio::error::eof:
			// TODO : TCP服务器无法主动重新连接掉线的客户端, 因此此回调的返回值无效, 需要注明
			hd->lostCallBack(*cl->addr, cl->port, hd->lostCallData);
			server->GivenUpClient(*cl->addr, cl->port);
			return;
		default:
		{
			auto v = err.value();
			auto m = err.message();
			break;
		}
	}
	memset(cl->buffer, 0, hd->maxBufferLen);
	s->async_read_some(boost::asio::buffer(cl->buffer, hd->maxBufferLen), std::bind(TCPServer_Private::onReceived, server, s, cl, std::placeholders::_1, std::placeholders::_2));
}

TCPClient_Private::~TCPClient_Private()
{
}

void TCPClient_Private::onAsyncConnect(Socket::TCPConnectCall asyncConnectCallBack, void* asyncConnectCallData, TCPClient*client, boost::system::error_code err){
	auto hd = static_cast<TCPClient_Private*>(AA_HANDLE_MANAGER[client]);
	if(err && hd->lostCallBack(asyncConnectCallData))
		hd->s->async_connect(boost::asio::ip::tcp::endpoint(ToBoostAddr(*hd->addr), hd->port), std::bind(TCPClient_Private::onAsyncConnect, asyncConnectCallBack, asyncConnectCallData, client, std::placeholders::_1));
	else if(!err && !asyncConnectCallBack(*hd->addr, hd->port, asyncConnectCallData)){
		hd->s->cancel(err);
		if(!err){
			boost::system::error_code closeErr;
			if(hd->s->is_open()){
				hd->s->shutdown(hd->s->shutdown_both, closeErr);
			}
			if(!closeErr)
				hd->s->cancel(closeErr);
			if(!closeErr){
				hd->s->close(closeErr);
			}
			hd->s.reset();
		}
	} else{
		onConnect(asyncConnectCallBack, asyncConnectCallData, client, err);
	}
}

void TCPClient_Private::onConnect(Socket::TCPConnectCall asyncConnectCallBack, void* asyncConnectCallData, TCPClient*client, boost::system::error_code err){
	auto hd = static_cast<TCPClient_Private*>(AA_HANDLE_MANAGER[client]);
	hd->isListening = true;
	hd->localAddr = IPAddr::Clone(ToAAAddr(hd->s->local_endpoint().address()));
	hd->localport = hd->s->local_endpoint().port();
	hd->buffer = new uint8[hd->maxBufferLen];
	memset(hd->buffer, 0, hd->maxBufferLen);
	hd->s->async_read_some(boost::asio::buffer(hd->buffer, hd->maxBufferLen), std::bind(onReceived, asyncConnectCallBack, asyncConnectCallData, client, std::placeholders::_1, std::placeholders::_2));
	hd->localServiceThread = new std::thread([hd](){ hd->localService.run(); });
}

void TCPClient_Private::onReceived(Socket::TCPConnectCall asyncConnectCallBack, void* asyncConnectCallData, TCPClient*client, boost::system::error_code err, std::size_t size){
	auto hd = static_cast<TCPClient_Private*>(AA_HANDLE_MANAGER[client]);
	if(!err){
		if(size > 0){
			hd->gettingCallBack(*hd->addr, hd->port, hd->buffer, size, hd->gettingCallData);
		}
	} else switch(err.value()){
		case boost::asio::error::eof:
			if(hd->lostCallBack(hd->lostCallData))
				client->ConnectServer(hd->localport, hd->isAsync, asyncConnectCallBack, asyncConnectCallData);
			return;
	}
	hd->s->async_read_some(boost::asio::buffer(hd->buffer, hd->maxBufferLen), std::bind(onReceived, asyncConnectCallBack, asyncConnectCallData, client, std::placeholders::_1, std::placeholders::_2));
}

UDPSingle_Private::UDPSingle_Private()
	:Socket_Private(){

}

/*********************** Source for class Socket **************************/


Socket::Socket(void*innerType)
{
    AA_HANDLE_MANAGER.GetHandle(this, reinterpret_cast<Socket_Private*>(innerType));
}

Socket::~Socket(void)
{
    delete AA_HANDLE_MANAGER.ReleaseHandle(this);
}

bool Socket::SetGettingCallBack(GettingCall recvCB, void * pUser)
{
	AA_HANDLE_MANAGER[this]->gettingCallBack = recvCB;
	AA_HANDLE_MANAGER[this]->gettingCallData = pUser;
	return true;
}

bool Socket::SetMaxIOBufferLen(uint32 len)
{
	AA_HANDLE_MANAGER[this]->maxBufferLen = len;
	return true;
}

bool Socket::SetSendingResponseCallBack(SendingResp sendingRespCB, void * pUser){
	AA_HANDLE_MANAGER[this]->asyncResp = sendingRespCB;
	AA_HANDLE_MANAGER[this]->asyncRespUserData = pUser;
	return true;
}

IPAddr_v4 Socket::GetLocalIPv4Addr(int index)
{
	if(index < 0)
	{
		return IPAddr_v4(127, 0, 0, 1);
	}
	//获取主机名称

	char tszHost[256];
	gethostname(tszHost, 256);
	addrinfo* hostaddrinfo;
	//获取主机地址列表
	getaddrinfo(tszHost, "80", nullptr, &hostaddrinfo);
	//按索引选择
	while(index != 0)
	{
		if(hostaddrinfo == nullptr)
			continue;
		hostaddrinfo = hostaddrinfo->ai_next;
		while(hostaddrinfo->ai_family != AF_INET)
			hostaddrinfo = hostaddrinfo->ai_next;
		index--;
	}
	if((hostaddrinfo != nullptr) && (hostaddrinfo->ai_family == AF_INET))
		return ToAAAddr(((sockaddr_in*)(hostaddrinfo->ai_addr))->sin_addr);

	return IPAddr_v4(127, 0, 0, 1);
}

IPAddr_v6 Socket::GetLocalIpv6Addr(int index)
{
	if(index < 0)
	{
		return IPAddr_v6("0:0:0:0:0:0:0:0");
	}
	//获取主机名称

	char tszHost[256];
	gethostname(tszHost, 256);
	addrinfo* hostaddrinfo;
	//获取主机地址列表
	getaddrinfo(tszHost, "80", nullptr, &hostaddrinfo);
	//按索引选择
	while(index != 0)
	{
		if(hostaddrinfo == nullptr)
			continue;
		hostaddrinfo = hostaddrinfo->ai_next;
		while(hostaddrinfo->ai_family != AF_INET)
			hostaddrinfo = hostaddrinfo->ai_next;
		index--;
	}
	if((hostaddrinfo != nullptr) && (hostaddrinfo->ai_family == AF_INET))
		return ToAAAddr(*reinterpret_cast<in6_addr*>(&((sockaddr_in*)(hostaddrinfo->ai_addr))->sin_addr));

	return IPAddr_v6("0:0:0:0:0:0:0:0");
}


/******************* Source for class TCPServer ************************/


TCPServer::TCPServer(int32 maxConnNum)
	:Socket(new TCPServer_Private(maxConnNum))
{
	//auto hd = static_cast<TCPServer_Private*>(AA_HANDLE_MANAGER[this]);
}

TCPServer::~TCPServer(void)
{
	StopServer(0xffffffff);
}

bool TCPServer::SetConnectCallBack(TCPConnectCall connectCB, void * pUser)
{
	auto hd = static_cast<TCPServer_Private*>(AA_HANDLE_MANAGER[this]);
	hd->connectCallBack = connectCB;
	hd->connetcCallData = pUser;
	return true;
}

bool TCPServer::SetDisconnectCallBack(ServerLostCall disconnCB, void * pUser)
{
	auto hd = static_cast<TCPServer_Private*>(AA_HANDLE_MANAGER[this]);
	hd->lostCallBack = disconnCB;
	hd->lostCallData = pUser;
	return true;
}

bool TCPServer::SetMaxConnNum(int32 maxClientNum)
{
	static_cast<TCPServer_Private*>(AA_HANDLE_MANAGER[this])->maxClientNum = maxClientNum;
	return true;
}

bool TCPServer::SetMaxIOBufferLen(uint32 len){
	if(IsStarting())
		return false;
	return Socket::SetMaxIOBufferLen(len);
}

bool TCPServer::StartServer(uint16 port, bool ipv6)
{
	auto hd = static_cast<TCPServer_Private*>(AA_HANDLE_MANAGER[this]);
	if (hd->isListening) {
		SocketException ex("The server has started");
		throwException(ex);
		return false;
	}
	// 服务器总是异步
	hd->isAsync = true;
	hd->serverPort = port;
	// 打开连接接收器
	auto protocol = ipv6 ? boost::asio::ip::tcp::v6() : boost::asio::ip::tcp::v4();
	try {
		auto endP = boost::asio::ip::tcp::endpoint(protocol, port);
		hd->acceptor.open(protocol);
		hd->acceptor.bind(endP);
		// 开始监听
		hd->acceptor.listen(hd->maxClientNum);
		// 连接套接字
		std::shared_ptr<boost::asio::ip::tcp::socket> s(new boost::asio::ip::tcp::socket(hd->localService));
		hd->acceptor.async_accept(*s, std::bind(TCPServer_Private::onConnect, this, s, std::placeholders::_1));
		hd->localServiceThread = new std::thread([hd](){ hd->localService.run(); });
	}
	catch (boost::system::system_error e) {
		auto code = e.code().value();
		auto message = e.code().message();
		SocketException ex(message.c_str(), code);
		throwException(ex);
		return false;
	}
	
	hd->isListening = true;
	return true;
}

bool TCPServer::StopServer(uint32 waitTime)
{
	auto hd = static_cast<TCPServer_Private*>(AA_HANDLE_MANAGER[this]);
	AA_HANDLE_MANAGER[this]->isListening = false;
	hd->localService.stop();
	hd->localServiceThread->join();
	AA_SAFE_DEL(hd->localServiceThread);
	if (hd->acceptor.is_open())
	{
		hd->acceptor.cancel();
		if (!GivenUpAllClients()) {
			SocketException ex("GivenUpAllClients failed");
			throwException(ex);
			return false;
		}
		hd->acceptor.close();
	}
	hd->serverPort = 0;
	return true;
}

bool TCPServer::GivenUpClient(int32 index)
{
	auto hd = static_cast<TCPServer_Private*>(AA_HANDLE_MANAGER[this]);
	auto cl = hd->clients.find(index);
	if(cl == hd->clients.end())
		return false;
	delete cl->second;
	hd->clients.erase(cl);
	return true;
}

bool TCPServer::GivenUpClient(const IPAddr& addr, uint16 port)
{
	auto ret = GetIndexByAddrPort(addr, port);
	if(ret < 0)
		return false;
	return GivenUpClient(ret);
}

bool TCPServer::GivenUpAllClients()
{
	auto hd = static_cast<TCPServer_Private*>(AA_HANDLE_MANAGER[this]);
	auto i = hd->clients.begin();
	while(i != hd->clients.end())
	{
		delete i->second;
		i = hd->clients.erase(i);
	}
	return hd->clients.empty();
}

mac_uint TCPServer::Send(int32 index, void * data, uint64 len, bool isAsync){
	auto hd = static_cast<TCPServer_Private*>(AA_HANDLE_MANAGER[this]);
	auto cl = hd->clients.find(index);
	if(cl == hd->clients.end())
		return 0;
	cl->second->sendBuffer = new uint8[len];
	memcpy(cl->second->sendBuffer, data, len);
	if(!isAsync){
		auto ret = cl->second->s->send(boost::asio::buffer(cl->second->sendBuffer, len));
		AA_SAFE_DELALL(cl->second->sendBuffer);
		return ret;
	} else{
		hd->asyncRespTimes = 0;
		cl->second->s->async_write_some(boost::asio::buffer(cl->second->sendBuffer, len), std::bind(Socket_Private::onTCPSendingResponse, AA_HANDLE_MANAGER[this], cl->second->sendBuffer, cl->second->s.get(), std::placeholders::_1, std::placeholders::_2, len));
		return 0;
	}
}

int TCPServer::GetMaxConnNum() const
{
	return static_cast<TCPServer_Private*>(AA_HANDLE_MANAGER[this])->maxClientNum;
}

int TCPServer::GetNowConnNum() const
{
	// WARNING : If the number is larger than INT_MAX
	return int(static_cast<TCPServer_Private*>(AA_HANDLE_MANAGER[this])->clients.size());
}

TCPServer::IPAddrInfo TCPServer::GetClientByIndex(int index) const
{
	auto hd = static_cast<TCPServer_Private*>(AA_HANDLE_MANAGER[this]);
	auto hdcls = hd->clients;
	auto ret = hdcls.find(index);
	if(ret != hdcls.end())
		return{ret->second->addr,ret->second->port,ret->second->localAddr,ret->second->localport};
	return{nullptr,0,nullptr,0};
}

int TCPServer::GetIndexByAddrPort(const IPAddr & addr, uint16 port)
{
	auto hd = static_cast<TCPServer_Private*>(AA_HANDLE_MANAGER[this]);
	for(auto i = hd->clients.begin(); i != hd->clients.end(); i++)
	{
		if(*i->second->addr == addr&&i->second->port == port)
			return i->first;
	}
	return -1;
}

bool TCPServer::IsStarting()const
{
	return AA_HANDLE_MANAGER[this]->isListening;
}


/******************* Source for class TCPClient ************************/


TCPClient::TCPClient()
	:Socket(new TCPClient_Private())
{
}

TCPClient::~TCPClient()
{
}

bool TCPClient::SetServerAddr(const IPAddr & addr)
{
	auto hd = static_cast<TCPClient_Private*>(AA_HANDLE_MANAGER[this]);
	if (hd->isListening) {
		SocketException ex("The server has started");
		throwException(ex);
		return false;
	}
	hd->addr = IPAddr::Clone(addr);
	return true;
}

bool TCPClient::SetServerPort(uint16 port)
{
	auto hd = static_cast<TCPClient_Private*>(AA_HANDLE_MANAGER[this]);
	if (hd->isListening) {
		SocketException ex("The server has started");
		throwException(ex);
		return false;
	}
	hd->port = port;
	return port != 0;
}

bool TCPClient::SetLostServerCallBack(ClientLostCall disconnCB, void * pUser)
{
	auto hd = static_cast<TCPClient_Private*>(AA_HANDLE_MANAGER[this]);
	hd->lostCallBack = disconnCB;
	hd->lostCallData = pUser;
	return true;
}

bool TCPClient::ConnectServer(uint16 port, bool isAsync, TCPConnectCall asyncConnectCallBack, void* asyncConnectCallData)
{
	auto hd = static_cast<TCPClient_Private*>(AA_HANDLE_MANAGER[this]);
	if (hd->isListening) {
		SocketException ex("The server has started");
		throwException(ex);
		return false;
	}
	hd->isAsync = isAsync;
	auto protocol = hd->addr->GetIPVer() == 6 ? boost::asio::ip::tcp::v6() : boost::asio::ip::tcp::v4();
	try
	{
		hd->s.reset(new boost::asio::ip::tcp::socket(hd->localService, boost::asio::ip::tcp::endpoint(protocol, port)));
		//hd->s->open(protocol);
	}
	catch (boost::system::system_error e)
	{
		auto code = e.code().value();
		auto msg = e.code().message();
		SocketException ex(msg.c_str(), code);
		throwException(ex);
		return false;
	}
	if(isAsync)
	{
		hd->s->async_connect(boost::asio::ip::tcp::endpoint(ToBoostAddr(*hd->addr), hd->port), std::bind(TCPClient_Private::onAsyncConnect, asyncConnectCallBack, asyncConnectCallData, this, std::placeholders::_1));
	}
	else
	{
		try
		{
			hd->s->connect(boost::asio::ip::tcp::endpoint(ToBoostAddr(*hd->addr), hd->port));
		}
		catch(boost::system::system_error e)
		{
			auto code = e.code().value();
			auto msg = e.code().message();
			SocketException ex(msg.c_str(), code);
			throwException(ex);
			return false;
		}
		hd->onConnect(asyncConnectCallBack, asyncConnectCallData, this, boost::system::error_code());
	}
	return true;
}

bool TCPClient::DisconnectServer(uint32 waitTime)
{
	auto hd = static_cast<TCPClient_Private*>(AA_HANDLE_MANAGER[this]);
	if(hd->s != nullptr){
		boost::system::error_code err;
		if(hd->s->is_open()){
			hd->s->shutdown(hd->s->shutdown_both, err);
		}
		if(!err)
			hd->s->cancel(err);
		if(!err){
			hd->s->close(err);
		}
	}
	hd->localService.stop();
	hd->localServiceThread->join();
	hd->isListening = false;
	AA_SAFE_DELALL(hd->localServiceThread);
	AA_SAFE_DELALL(hd->buffer);
	AA_SAFE_DELALL(hd->sendBuffer);
	hd->s.reset();
	return true;
}

mac_uint TCPClient::Send(const void * pBuffer, size_t len, bool isAsync)
{
	auto hd = static_cast<TCPClient_Private*>(AA_HANDLE_MANAGER[this]);
	if(!hd->isListening){
		SocketException ex("Have not connected to the server");
		throwException(ex);
		return false;
	}
	if(pBuffer == nullptr || len <= 0){
		SocketException ex("Buffer error");
		throwException(ex);
		return false;
	}
	hd->sendBuffer = new uint8[len];
	memcpy(hd->sendBuffer, pBuffer, len);
	if(!isAsync)
	{
		auto ret = hd->s->send(boost::asio::buffer(hd->sendBuffer, len));
		AA_SAFE_DELALL(hd->sendBuffer);
		return ret;
	}
	else
	{
		hd->asyncRespTimes = 0;
		hd->s->async_write_some(boost::asio::buffer(hd->sendBuffer, len), std::bind(Socket_Private::onTCPSendingResponse, AA_HANDLE_MANAGER[this], hd->sendBuffer, hd->s.get(), std::placeholders::_1, std::placeholders::_2, len));
		return len;
	}
}

const IPAddr & TCPClient::GetServerAddr() const
{
	return *static_cast<TCPClient_Private*>(AA_HANDLE_MANAGER[this])->addr;
}

uint16 TCPClient::GetServerPort() const
{
	return static_cast<TCPClient_Private*>(AA_HANDLE_MANAGER[this])->port;
}

const IPAddr & TCPClient::GetLocalAddr() const
{
	return *static_cast<TCPClient_Private*>(AA_HANDLE_MANAGER[this])->localAddr;
}

uint16 TCPClient::GetLocalPort() const
{
	return static_cast<TCPClient_Private*>(AA_HANDLE_MANAGER[this])->localport;
}

bool TCPClient::IsConnection() const
{
	return static_cast<TCPClient_Private*>(AA_HANDLE_MANAGER[this])->isListening;
}


/******************* Source for class UDPSingle ************************/


UDPSilgle::UDPSilgle()
	:Socket(new UDPSingle_Private())
{
}

UDPSilgle::~UDPSilgle()
{
	auto hd = static_cast<UDPSingle_Private*>(AA_HANDLE_MANAGER[this]);
	if(hd->s->is_open()){
		boost::system::error_code err;
		if(hd->s->is_open()){
			hd->s->shutdown(hd->s->shutdown_both, err);
		}
		if(!err)
			hd->s->cancel(err);
		if(!err){
			hd->s->close(err);
		}
		AA_SAFE_DEL(hd->s);
	}
}

bool UDPSilgle::StartListening(bool isIPv4)
{
	auto hd = static_cast<UDPSingle_Private*>(AA_HANDLE_MANAGER[this]);
	if (hd->isListening) {
		SocketException ex("The server has started");
		throwException(ex);
		return false;
	}
	hd->isAsync = true;
	AA_SAFE_DEL(hd->s);
	hd->s = new boost::asio::ip::udp::socket(hd->localService);
	try
	{
		if(!hd->s->is_open())
			hd->s->open(isIPv4 ? boost::asio::ip::udp::v4() : boost::asio::ip::udp::v6());
		hd->localAddr = IPAddr::Clone(ToAAAddr(hd->s->local_endpoint().address()));
		hd->localPort = hd->s->local_endpoint().port();
	}
	catch (boost::system::system_error e)
	{
		auto code = e.code().value();
		auto msg = e.code().message();
		SocketException ex(msg.c_str(), code);
		throwException(ex);
		return false;
	}
	hd->s->async_receive_from(hd->buffer, hd->recver, [hd](boost::system::error_code err, std::size_t)
	{
		auto senderAddr = IPAddr::Clone(ToAAAddr(hd->recver.address())); uint16 senderPort = hd->recver.port(); 			if(!err)
			while(!hd->buffer.empty())
			{
				auto bfn = *hd->buffer.begin();
				auto bfnp = boost::asio::buffer_cast<uint8*>(bfn);
				auto sz = boost::asio::buffer_size(bfn);
				hd->gettingCallBack(*senderAddr, senderPort, bfnp, sz, hd->gettingCallData);
				hd->buffer.pop_front();
			}
		else switch(err.value())
		{
			default:
				break;
		}
	});

	return true;
}

mac_uint UDPSilgle::Send(const IPAddr & addr, uint16 port, void * data, size_t len, bool isAsync)
{
	auto hd = static_cast<UDPSingle_Private*>(AA_HANDLE_MANAGER[this]);
	if(!hd->isListening)
		return 0;
	try
	{
		if(!hd->s->is_open())
			hd->s->open(addr.GetIPVer()==4 ? boost::asio::ip::udp::v4() : boost::asio::ip::udp::v6());
		hd->localAddr = IPAddr::Clone(ToAAAddr(hd->s->local_endpoint().address()));
		hd->localPort = hd->s->local_endpoint().port();
	}
	catch(boost::system::error_code)
	{
		return 0;
	}

	if(!isAsync)
	{
		hd->sendBuffer.clear();
		hd->sendBuffer.push_back(boost::asio::mutable_buffer(data, size_t(len)));
		return hd->s->send_to(hd->sendBuffer, boost::asio::ip::udp::endpoint(ToBoostAddr(addr), port));
	}

	std::shared_ptr<std::function<void(boost::system::error_code err, std::size_t sz)>> respF;
	std::shared_ptr<std::function<void(boost::system::error_code err, std::size_t sz)>>&respF2 = respF;
	std::shared_ptr<uint32> n(new uint32(0));
	respF = std::shared_ptr<std::function<void(boost::system::error_code err, std::size_t sz)>>(new std::function<void(boost::system::error_code err, std::size_t sz)>([hd,&addr,port, &n, len, data, &respF2](boost::system::error_code err, std::size_t sz)
	{
		if(!err)
			hd->sendBuffer.clear();
		if(hd->asyncResp != nullptr && hd->asyncResp(sz, (*n)++, 0, data, len, hd->asyncRespUserData) && err)
			hd->s->async_send_to(hd->sendBuffer,boost::asio::ip::udp::endpoint(ToBoostAddr(addr),port), *respF2);
	}));
	hd->s->async_send_to(hd->sendBuffer, boost::asio::ip::udp::endpoint(ToBoostAddr(addr), port), *respF);
	return 0;
}

bool UDPSilgle::StopListening(uint32 waitTime)
{
	auto hd = static_cast<UDPSingle_Private*>(AA_HANDLE_MANAGER[this]);
	hd->isListening = false;
	boost::system::error_code err;
	if(hd->s->is_open()){
		hd->s->shutdown(hd->s->shutdown_both, err);
	}
	if(!err)
		hd->s->cancel(err);
	if(!err){
		hd->s->close(err);
	}
	AA_SAFE_DEL(hd->s);
	return !err;
}

bool UDPSilgle::IsListening() const
{
	return static_cast<UDPSingle_Private*>(AA_HANDLE_MANAGER[this])->isListening;
}

void setSocketExceptionEnabled(bool enabled)
{
	g_isExceptionEnabled = enabled;
}

}

#undef AA_HANDLE_MANAGER