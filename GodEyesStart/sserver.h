#pragma once

#define _AFXDLL
#define _WINSOCK_DEPRECATED_NO_WARNINGS
#define _CRT_SECURE_NO_WARNINGS


#include "afxwin.h"
//#include <WS2tcpip.h>
#include <iostream>
#include "thread"
#include "MainStart.h"
//#pragma comment(lib, "ws2_32.lib")
//using namespace std;


typedef struct {
	int FrameHead;
	int func;
	int choice;
	int data1;
	int data2;
	float data3;
	float data4;
	int FrameTail;
}ControlPackage;

class SocketServer
{
private:
	SOCKET m_sock;
	char address[128];
	int port = 8180;
	STARTUPINFO StartInfo = { sizeof(StartInfo) };
	PROCESS_INFORMATION ProcInfo;
	HANDLE hProcess;
	BOOL EnaleDebugPrivilege();

public:
	int ServerInit();

	int RecvPack();

	int SendPack(ControlPackage CtrlPack);

	void ServerClose();

	void HandlePackage(ControlPackage CtrlPack);

	MainStart mainstart;
};