#pragma once


//����һЩ�����Ľṹ��

//����һЩ�꣬����ʾ���ľ��崦������

//cmd����
#define PACKET_REQ_CMD   10001 //REQ requewst CMD ��ʾ cmd��������   �ͻ��� --> �����
#define PACKET_RLY_CMD   10002 //REQ reply  CMD ��ʾ cmd��������      �����-->�ͻ���

//������������
#define PACKET_REQ_KEYBOARD   20001 //REQ requewst KEYBOARD ��ʾ KEYBOARD��������   �ͻ��� --> �����
#define PACKET_RLY_KEYBOARD   20002 //REQ reply  KEYBOARD ��ʾ KEYBOARD��������      �����-->�ͻ���



#pragma pack(push)
#pragma pack(1)
struct MyPacket
{
	unsigned int type;  //��ʾ��������
	unsigned int length;
	char data[1]; //����һ��1�ֽڵ�����
};
#pragma pack(pop)
