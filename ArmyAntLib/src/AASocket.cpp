/*
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
* This file is the internal source file of this project, is not contained by the closed source release part of this software
* 本文件为内部源码文件, 不会包含在闭源发布的本软件中
*/

#include "../base/base.hpp"
#include "../include/AASocket.h"
#include "../include/AAClassPrivateHandle.hpp"
#include <map>
#include <boost/asio.hpp>
#include <boost/shared_ptr.hpp>

#ifdef OS_WINDOWS
#include <WinSock2.h>
#include <in6addr.h>
#include <ws2tcpip.h>
#endif

namespace ArmyAnt {


/**************** Source file private functions **************************/

// 将socket的ipv4地址转换为ArmyAnt::IPAddr_v4
inline static IPAddr_v4 ToAAAddr(in_addr addr) 
{
	return IPAddr_v4(addr.S_un.S_addr);
}

// 将socket的ipv6地址转换为ArmyAnt::IPAddr_v6
inline static IPAddr_v6 ToAAAddr(in6_addr addr) 
{
	return IPAddr_v6(addr.u.Word);
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
	ret.S_un.S_addr = addr.GetNum();
	return ret;
}

// 将ArmyAnt::IPAddr_v6转换成socket的ipv6地址结构
inline static in6_addr ToCAddr(const IPAddr_v6&addr)
{
	in6_addr ret;
	for(uint8 i = 0; i < 8; i++)
	{
		ret.u.Word[i] = addr.GetWord(i);
	}
	return ret;
}

// 将ArmyAnt::IPAddr(通用)转换成socket的ip不确定版本的地址结构
inline static addrinfo ToCAddr(const IPAddr& addr)
{
	if(addr.GetIPVer() == 4)
		return *reinterpret_cast<addrinfo*>(&ToCAddr(*reinterpret_cast<const IPAddr_v4*>(&addr)));
	else
		return *reinterpret_cast<addrinfo*>(&ToCAddr(*reinterpret_cast<const IPAddr_v6*>(&addr)));
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

bool IPAddr::operator==(const char * value)const
{
	return std::string(value) == GetStr();
}

bool IPAddr::operator!=(const char * value)const
{
	return !operator==(value);
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
	static char ret[32];
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
	AAAssert(index < 16);
	return addr.bytes[index];
}

bool IPAddr_v6::SetByte(uint8 index, uint8 value)
{
	AAAssert(index < 16);
	addr.bytes[index] = value;
	return true;
}

uint16 IPAddr_v6::GetWord(uint8 index) const
{
	AAAssert(index < 8);
	return addr.words[index];
}

bool IPAddr_v6::SetWord(uint8 index, uint16 value)
{
	AAAssert(index < 8);
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
	AAAssert(index < 8);
	return addr.words[index];
}

uint16 IPAddr_v6::operator[](int index) const
{
	return const_cast<IPAddr_v6*>(this)->operator[](index);
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
struct Socket_Datas
{
	Socket_Datas() {};
	Socket_Datas(boost::asio::ip::tcp::socket* s, const IPAddr* addr, uint16 port, const IPAddr* localAddr, uint16 localport);
	virtual ~Socket_Datas();

	boost::asio::ip::tcp::socket* s = nullptr;	//boost的socket连接对象
	std::list<boost::asio::mutable_buffer> buffer;		//接受信息的buffer
	IPAddr* addr = nullptr;			// 对方ip地址
	uint16 port = 0;				// 对方端口
	IPAddr* localAddr = nullptr;	// 我方使用的ip地址
	uint16 localport = 0;			// 我方使用的端口

	AA_FORBID_COPY_CTOR(Socket_Datas);
	AA_FORBID_ASSGN_OPR(Socket_Datas);
};

// Socket类的私有数据
struct Socket_Private
{
	Socket_Private() {};
	virtual ~Socket_Private();

	uint32 maxBufferLen = 65530;		// 接收数据的buffer的最大长度
	boost::asio::io_service localS;		// boost本地socket服务对象
	Socket::GettingCall gettingCallBack = nullptr;	// 接受信息时的回调
	void* gettingCallData = nullptr;	// 接受信息时的回调要传递的额外数据
	bool isAsync = false;				// 是否异步监听, 对于服务器, 总是true
	bool isListening = false;			// 是否正在监听

	AA_FORBID_COPY_CTOR(Socket_Private);
	AA_FORBID_ASSGN_OPR(Socket_Private);
};

// TCPServer类的私有数据
struct TCPServer_Private : public Socket_Private
{
	TCPServer_Private(int32 maxClientNum) :Socket_Private(), maxClientNum(maxClientNum),acceptor(localS) {};
	virtual ~TCPServer_Private();

	boost::asio::basic_stream_socket<boost::asio::ip::tcp>* s = nullptr;
	boost::asio::ip::tcp::acceptor acceptor;		// 连接接受对象
	Socket::TCPConnectCall connectCallBack = nullptr;	// 收到连接时的回调
	void* connetcCallData = nullptr;
	Socket::ServerLostCall lostCallBack = nullptr;
	void* lostCallData = nullptr;
	int32 maxClientNum = 0;
	std::map<uint32, Socket_Datas*> clients;

	AA_FORBID_COPY_CTOR(TCPServer_Private);
	AA_FORBID_ASSGN_OPR(TCPServer_Private);
};

struct TCPClient_Private : public Socket_Private
{
	TCPClient_Private(uint16 svrPort) :Socket_Private(), serverPort(svrPort) {};

	SOCKET serverS = 0;
	IPAddr* serverAddr = nullptr;
	uint16 serverPort = 0;
	IPAddr* localAddr = nullptr;
	uint16 localPort = 0;
	Socket::ClientLostCall lostCallBack = nullptr;
	void* lostCallData = nullptr;

	AA_FORBID_COPY_CTOR(TCPClient_Private);
	AA_FORBID_ASSGN_OPR(TCPClient_Private);
};

struct UDPSingle_Private : public Socket_Private
{
	UDPSingle_Private() :Socket_Private() {};

	IPAddr* localAddr = nullptr;
	uint16 localPort = 0;

	AA_FORBID_COPY_CTOR(UDPSingle_Private);
	AA_FORBID_ASSGN_OPR(UDPSingle_Private);
};

static ClassPrivateHandleManager<Socket, Socket_Private> s_manager;


/******************* Source for private data structs **********************/


Socket_Datas::Socket_Datas(boost::asio::ip::tcp::socket* s, const IPAddr * addr, uint16 port, const IPAddr* localAddr, uint16 localport)
	:s(s), addr((addr->GetIPVer() == 4) ? static_cast<IPAddr*>(new IPAddr_v4(*static_cast<const IPAddr_v4*>(addr))) : new IPAddr_v6(*static_cast<const IPAddr_v6*>(addr))), port(port), localAddr((localAddr->GetIPVer() == 4) ? static_cast<IPAddr*>(new IPAddr_v4(*static_cast<const IPAddr_v4*>(localAddr))) : new IPAddr_v6(*static_cast<const IPAddr_v6*>(localAddr))), localport(localport)
{
}

Socket_Datas::~Socket_Datas()
{
	s->cancel();
	s->close();
	AA_SAFE_DEL(s);
	AA_SAFE_DEL(addr);
	AA_SAFE_DEL(localAddr);
}

Socket_Private::~Socket_Private()
{
}

TCPServer_Private::~TCPServer_Private()
{
}


/*********************** Source for class Socket **************************/


Socket::Socket(void*innerType)
	:handle(s_manager.GetHandle(this,reinterpret_cast<Socket_Private*>(innerType)))
{
}

Socket::~Socket(void)
{
	s_manager.ReleaseHandle(handle);
}

bool Socket::SetGettingCallBack(GettingCall recvCB, void * pUser)
{
	s_manager[handle]->gettingCallBack = recvCB;
	s_manager[handle]->gettingCallData = pUser;
	return true;
}

bool Socket::SetMaxIOBufferLen(uint32 len)
{
	s_manager[handle]->maxBufferLen = len;
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
	PADDRINFOA hostaddrinfo;
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
	PADDRINFOA hostaddrinfo;
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
	auto hd = static_cast<TCPServer_Private*>(s_manager[handle]);
	hd->acceptor = boost::asio::ip::tcp::acceptor(hd->localS);
}

TCPServer::~TCPServer(void)
{
	StopServer(0xffffffff);
}

bool TCPServer::SetConnectCallBack(TCPConnectCall connectCB, void * pUser)
{
	auto hd = static_cast<TCPServer_Private*>(s_manager[handle]);
	hd->connectCallBack = connectCB;
	hd->connetcCallData = pUser;
	return true;
}

bool TCPServer::SetDisconnectCallBack(ServerLostCall disconnCB, void * pUser)
{
	auto hd = static_cast<TCPServer_Private*>(s_manager[handle]);
	hd->lostCallBack = disconnCB;
	hd->lostCallData = pUser;
	return true;
}

bool TCPServer::SetMaxConnNum(int32 maxClientNum)
{
	static_cast<TCPServer_Private*>(s_manager[handle])->maxClientNum = maxClientNum;
	return true;
}

bool TCPServer::StartServer(bool isIPv6)
{
	auto hd = static_cast<TCPServer_Private*>(s_manager[handle]);
	// 服务器总是异步
	hd->isAsync = true;
	// 连接套接字
	hd->s = new boost::asio::basic_stream_socket<boost::asio::ip::tcp>(hd->localS);
	// 连接处理回调lambda的另一个指针, 封装成lambda指针是为了自己递归调用
	boost::shared_ptr<std::function<void(boost::system::error_code err)>> getconnResolve2;
	// 打开连接接收器
	auto protocol = isIPv6 ? boost::asio::ip::tcp::v6() : boost::asio::ip::tcp::v4();
	hd->acceptor.open(protocol);
	//  连接处理回调lambda的指针
	auto getconnResolve = boost::shared_ptr<std::function<void(boost::system::error_code err)>>(new std::function<void(boost::system::error_code err)>([hd, getconnResolve2, this](boost::system::error_code err)
	{
		if(!err)
		{
			uint32 index = 0;
			for(uint32 i = 0; i < hd->clients.size() + 1; i++)
				if(hd->clients.find(i)==hd->clients.end())
				{
					hd->clients.insert(std::pair<uint32, Socket_Datas*>(i, new Socket_Datas(hd->s, &ToAAAddr(hd->s->remote_endpoint().address()), hd->s->remote_endpoint().port(), &ToAAAddr(hd->s->local_endpoint().address()), hd->s->local_endpoint().port())));
					index = i;
				}
			auto cl = hd->clients.find(index)->second;
			auto&bf= cl->buffer;
			if(hd->connectCallBack == nullptr || hd->connectCallBack(*cl->addr, cl->port, hd->connetcCallData))
			{
				hd->s->async_receive(bf, [cl, hd](boost::system::error_code err, std::size_t)
				{
					if(!err)
						while(!cl->buffer.empty())
						{
							auto bfn = *cl->buffer.begin();
							auto bfnp = boost::asio::buffer_cast<uint8*>(bfn);
							auto sz = boost::asio::buffer_size(bfn);
							hd->gettingCallBack(ToAAAddr(hd->s->remote_endpoint().address()), hd->s->remote_endpoint().port(), bfnp, sz, hd->gettingCallData);
						}
					else switch(err.value())
					{
						case boost::asio::error::eof:
							// TODO : TCP服务器无法主动重新连接掉线的客户端, 因此此回调的返回值无效, 需要注明
							hd->lostCallBack(*cl->addr, cl->port, hd->lostCallData);
							break;
					}
					cl->buffer.pop_front();
				});
			}
			else
			{
				GivenUpClient(index);
			}
			hd->s = new boost::asio::ip::tcp::socket(hd->localS);
		}
		hd->acceptor.async_accept(*hd->s, *getconnResolve2);
	}));
	getconnResolve2 = getconnResolve;
	// 开始监听
	hd->acceptor.listen(hd->maxClientNum);
	hd->acceptor.async_accept(*hd->s, *getconnResolve);
	hd->isListening = true;
	return true;
}

bool TCPServer::StopServer(uint32 waitTime)
{
	auto hd = static_cast<TCPServer_Private*>(s_manager[handle]);
	s_manager[handle]->isListening = false;
	if(hd->acceptor .is_open())
	{
		hd->acceptor.cancel();
		if(!GivenUpAllClients())
			return false;
		hd->acceptor.close();
	}
	AA_SAFE_DEL(hd->s);
	return true;
}

bool TCPServer::GivenUpClient(int32 index)
{
	auto hd = static_cast<TCPServer_Private*>(s_manager[handle]);
	auto cl = hd->clients.find(index);
	if(cl == hd->clients.end())
		return false;
	delete cl->second;
	hd->clients.erase(cl);
	return true;
}

bool TCPServer::GivenUpClient(IPAddrInfo cl)
{
	auto ret = GetIndexByAddrPort(cl);
	if(ret < 0)
		return false;
	return GivenUpClient(ret);
}

bool TCPServer::GivenUpAllClients()
{
	auto hd = static_cast<TCPServer_Private*>(s_manager[handle]);
	auto i = hd->clients.begin();
	while(i != hd->clients.end())
	{
		delete i->second;
		i = hd->clients.erase(i);
	}
	return hd->clients.empty();
}

int TCPServer::GetIndexByAddrPort(const IPAddrInfo & info)
{
	auto hd = static_cast<TCPServer_Private*>(s_manager[handle]);
	for(auto i = hd->clients.begin(); i != hd->clients.end(); i++)
	{
		if(i->second->addr == info.addr&&i->second->port == info.port)
			return i->first;
	}
	return -1;
}


/******************* Source for class TCPClient ************************/


TCPClient::TCPClient(uint16 svrPort)
	:Socket(new TCPClient_Private(svrPort))
{
}

TCPClient::~TCPClient()
{
}


/******************* Source for class UDPSingle ************************/


UDPSilgle::UDPSilgle()
	:Socket(new UDPSingle_Private())
{
}

UDPSilgle::~UDPSilgle()
{
}

}