#pragma once


//定义一些公共的结构体

//定义一些宏，来表示包的具体处理类型

//cmd类型
#define PACKET_REQ_CMD   10001 //REQ requewst CMD 表示 cmd类型数据   客户端 --> 服务端
#define PACKET_RLY_CMD   10002 //REQ reply  CMD 表示 cmd类型数据      服务端-->客户端

//键盘类型数据
#define PACKET_REQ_KEYBOARD   20001 //REQ requewst KEYBOARD 表示 KEYBOARD类型数据   客户端 --> 服务端
#define PACKET_RLY_KEYBOARD   20002 //REQ reply  KEYBOARD 表示 KEYBOARD类型数据      服务端-->客户端



#pragma pack(push)
#pragma pack(1)
struct MyPacket
{
	unsigned int type;  //表示包的类型
	unsigned int length;
	char data[1]; //定义一个1字节的数组
};
#pragma pack(pop)
