#include "framework.h"
#include "function.h"
#include <windows.h>
#include <winsock2.h>
#pragma comment(lib,"ws2_32.lib")
#define _WINSOCK_DEPRECATED_NO_WARNINGS
SOCKET s;
int InitSocket() {

    WORD wVersionRequested;
    WSADATA wsaData;
    int err;
    wVersionRequested = MAKEWORD(2, 2);

    err = WSAStartup(wVersionRequested, &wsaData);
    if (err != 0) {
        return 0;
    }
    //socket 创建套接字
    s = socket(
        AF_INET,   //inet协议
        SOCK_STREAM,
        0);
    if (s == INVALID_SOCKET) {
        return 0;
    }



    return 1;
}