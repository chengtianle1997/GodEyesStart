#include "sserver.h"

BOOL SocketServer::EnaleDebugPrivilege()
{
	HANDLE hToken;
	BOOL fOk = FALSE;
	//获取进程控制权限
	if (OpenProcessToken(GetCurrentProcess(), TOKEN_ADJUST_PRIVILEGES, &hToken))
	{
		TOKEN_PRIVILEGES tp;
		tp.PrivilegeCount = 1;
		::LookupPrivilegeValue(NULL, SE_DEBUG_NAME, &tp.Privileges[0].Luid);
		AdjustTokenPrivileges(hToken, FALSE, &tp, sizeof(tp), NULL, NULL);
		fOk = (GetLastError() == ERROR_SUCCESS); CloseHandle(hToken);
	}
	int ret = GetLastError();
	if (ret)
	{
		
		printf("PrivilegeRaiseError:%d\n", ret);
	}
	//获取时间调整权限
	TOKEN_PRIVILEGES tkp;
	if (!OpenProcessToken(GetCurrentProcess(),
		TOKEN_ADJUST_PRIVILEGES | TOKEN_QUERY, &hToken))
		return(FALSE);

	// Get the LUID for the shutdown privilege.
	//(获得SE_SYSTEMTIME_NAME权限，才可设置系统时间成功) 
	LookupPrivilegeValue(NULL, SE_SYSTEMTIME_NAME,
		&tkp.Privileges[0].Luid);

	tkp.PrivilegeCount = 1;  // one privilege to set    
	tkp.Privileges[0].Attributes = SE_PRIVILEGE_ENABLED;

	// Get the shutdown privilege for this process. 
	AdjustTokenPrivileges(hToken, FALSE, &tkp, 0,
		(PTOKEN_PRIVILEGES)NULL, 0);

	if (GetLastError)
	{
		
		printf("GetTimePrivilegeError:%d\n", GetLastError());
		return false;
	}
	
	//printf("%d\n", GetLastError());
	return fOk;
}

int SocketServer::ServerInit()
{
	int rlt = 0;



	int iErrorMsg;

	//提权
	int ret = EnaleDebugPrivilege();
	if (ret)
	{
		printf("Get Privillege Fail");
	}

//³õÊ¼»¯WinSock

	WSAData wsaData;

	iErrorMsg = WSAStartup(MAKEWORD(1, 1), &wsaData);

	if (iErrorMsg != NO_ERROR)

	{

		//³õÊ¼»¯WinSockÊ§°Ü

		printf("server wsastartup failed with error : %d\n", iErrorMsg);



		rlt = 1;

		return rlt;

	}


	//»ñÈ¡±¾»úipµØÖ·

	char hostname[256];
	ret = gethostname(hostname, sizeof(hostname));
	if (ret == -1) {
		return -1;
	}
	struct hostent* hent;
	hent = gethostbyname(hostname);
	if (NULL == hent) {
		return -1;
	}
	//Ö±½ÓÈ¡h_addr_listÁÐ±íÖÐµÄµÚÒ»¸öµØÖ·h_addr
	//*ip = ntohl(((struct in_addr*)hent->h_addr)->s_addr);
	struct in_addr addr;
	memcpy(&addr, hent->h_addr_list[0], sizeof(struct in_addr));

	memcpy(address, inet_ntoa(addr), 128);
	//const char* testaddress = "192.168.1.103";
	// ´´½¨·þÎñÆ÷¶Ësocket
	//memcpy(address, testaddress, 15);
	printf("LoacalAddress:%s\n", address);

	m_sock = socket(AF_INET, SOCK_STREAM, IPPROTO_TCP);

	if (m_sock == INVALID_SOCKET)

		// ´´½¨socket³öÏÖÁËÒì³£

	{

		printf("server socket failed with error: %d\n", WSAGetLastError());

		rlt = 2;

		return rlt;

	}



	// ÉùÃ÷ÐÅÏ¢

	SOCKADDR_IN	servaddr;

	servaddr.sin_family = AF_INET;

	servaddr.sin_port = htons(port);

	servaddr.sin_addr.s_addr = inet_addr(address);



	//°ó¶¨

	iErrorMsg = bind(m_sock, (SOCKADDR*)& servaddr, sizeof(servaddr));

	if (iErrorMsg < 0)

	{

		//°ó¶¨Ê§°Ü

		printf("bind failed with error : %d\n", iErrorMsg);

		rlt = 3;

		return rlt;

	}



	return rlt;
}

int SocketServer::RecvPack()
{
	// ¹«¿ªÁ¬½Ó

	listen(m_sock, 5);

	SOCKADDR_IN tcpAddr;

	int len = sizeof(sockaddr);

	SOCKET newSocket;

	char buf[1000000];

	int rval;




	do

	{

		// ½ÓÊÕÐÅÏ¢

		newSocket = accept(m_sock, (sockaddr*)& tcpAddr, &len);



		if (newSocket == INVALID_SOCKET)

		{

			// ·Ç¿ÉÓÃsocket

			printf("invalid socket occured.\n");

		}

		else

		{

			// ¿ÉÓÃµÄÐÂsocketÁ¬½Ó

			printf("new socket connect: %d\n", newSocket);



			// ÏûÏ¢´¦Àí

			do

			{
				ControlPackage CtrlPack;

				//printf("process\n");

				// ½ÓÊÕÊý¾Ý

				memset(buf, 0, sizeof(buf));

				rval = recv(newSocket, buf, 1000000, 0);

				memcpy(&CtrlPack, buf, sizeof(ControlPackage));

				if (CtrlPack.FrameHead == 55 && CtrlPack.FrameTail == 56)
				{
					HandlePackage(CtrlPack);
				}




				if (rval == SOCKET_ERROR)

					// ¸ÃÒì³£Í¨³£·¢ÉúÔÚÎ´closeSocket¾ÍÍË³öÊ±

				{

					printf("recv socket error.\n");

					break;

				}



				if (rval == 0)

					// 0±íÊ¾Õý³£ÍË³ö

					printf("socket %d connect end.\n", newSocket);

				//else

					// ÏÔÊ¾½ÓÊÕµ½µÄÊý¾Ý

					//printf("recv msg: %s\n", buf);

			} while (rval != 0);



			// ¹ØÓÚ½ÓÊÕµÄsocket

			closesocket(newSocket);

		}

	} while (1);
	return 0;
}



void SocketServer::HandlePackage(ControlPackage CtrlPack)
{
	switch (CtrlPack.func)
	{
	case 1:
		if (CtrlPack.choice == 0)
		{

		}
		else if (CtrlPack.choice == 1)
		{

			//¶ÔÊ±²Ù×÷
			int Hour = CtrlPack.data1 / (1000 * 60 * 60);
			CtrlPack.data1 %= 1000 * 60 * 60;
			int Minute = CtrlPack.data1 / (60 * 1000);
			CtrlPack.data1 %= 60 * 1000;
			int Second = CtrlPack.data1 / (1000);
			int MilliSecond = CtrlPack.data1 % 1000;
			SYSTEMTIME myTime;
			GetLocalTime(&myTime);
			myTime.wHour = Hour;
			myTime.wMinute = Minute;
			myTime.wSecond = Second;
			myTime.wMilliseconds = MilliSecond;
			SetLocalTime(&myTime);
			printf("TimeCheck: %d:%d:%d:%d\n", Hour, Minute, Second, MilliSecond);
			//Æô¶¯³ÌÐò
			/*char* cmd = (char*)malloc(1024);
			const char* cmdt = "GodEyesMain.exe";
			sprintf(cmd, "%s", cmdt);
			TCHAR* tcmd = { TEXT(cmd) };
			CreateProcess(NULL, tcmd, NULL, NULL, NULL, NULL, NULL, NULL, &StartInfo, &ProcInfo);
			hProcess = ::OpenProcess(PROCESS_ALL_ACCESS, false, ProcInfo.dwProcessId);*/

			//ConfigInit
			mainstart.ConfigInit(myTime);
			//Create New Folder
			mainstart.MainAppStart();
		}
		else if (CtrlPack.choice == 2)
		{
			int Hour = CtrlPack.data1 / (1000 * 60 * 60);
			CtrlPack.data1 %= 1000 * 60 * 60;
			int Minute = CtrlPack.data1 / (60 * 1000);
			CtrlPack.data1 %= 60 * 1000;
			int Second = CtrlPack.data1 / (1000);
			int MilliSecond = CtrlPack.data1 % 1000;
			SYSTEMTIME myTime;
			GetLocalTime(&myTime);
			myTime.wHour = Hour;
			myTime.wMinute = Minute;
			myTime.wSecond = Second;
			myTime.wMilliseconds = MilliSecond;
			SetLocalTime(&myTime);
			printf("TimeCheck: %d:%d:%d:%d\n", Hour, Minute, Second, MilliSecond);
		}
		break;
	case 2:
		/*if (hProcess != NULL) {
			printf("Terminating.........\n");
			if (!::TerminateProcess(hProcess, 0))
			{
				printf("Terminate error:%d", GetLastError());
			}
		}*/
		mainstart.MainAppStop();
		break;
	default:
		break;
	}
}

int SocketServer::SendPack(ControlPackage CtrlPack)
{
	return 0;
}

void SocketServer::ServerClose()
{

}


