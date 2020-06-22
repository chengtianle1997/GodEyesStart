#define _CRT_SECURE_NO_WARNINGS
#define _AFXDLL

#include "MainStart.h"
#include "sserver.h"
#include "afxwin.h"
//ConfigList *configlist;



//���õ�ǰ���򿪻�����

void AutoPowerOn()

{

	HKEY hKey;

	//std::string strRegPath = "SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Run";


	//1���ҵ�ϵͳ��������  

	if (RegOpenKeyEx(HKEY_CURRENT_USER, _T("SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Run"), 0, KEY_ALL_ACCESS, &hKey) == ERROR_SUCCESS) ///��������       

	{

		//2���õ������������ȫ·��

		TCHAR strExeFullDir[MAX_PATH];

		GetModuleFileName(NULL, strExeFullDir, MAX_PATH);





		//3���ж�ע������Ƿ��Ѿ�����

		TCHAR strDir[MAX_PATH] = {};

		DWORD nLength = MAX_PATH;

		long result = RegGetValue(hKey, nullptr, _T("GISRestart"), RRF_RT_REG_SZ, 0, strDir, &nLength);





		//4���Ѿ�����

		if (result != ERROR_SUCCESS || _tcscmp(strExeFullDir, strDir) != 0)

		{

			//5�����һ����Key,������ֵ��"GISRestart"��Ӧ�ó������֣����Ӻ�׺.exe�� 

			RegSetValueEx(hKey, _T("GISRestart"), 0, REG_SZ, (LPBYTE)strExeFullDir, (lstrlen(strExeFullDir) + 1) * sizeof(TCHAR));





			//6���ر�ע���

			RegCloseKey(hKey);

		}

	}

}





//ȡ����ǰ���򿪻�����

void CanclePowerOn()

{

	HKEY hKey;

	//std::string strRegPath = "SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Run";





	//1���ҵ�ϵͳ��������  

	if (RegOpenKeyEx(HKEY_CURRENT_USER, _T("SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Run"), 0, KEY_ALL_ACCESS, &hKey) == ERROR_SUCCESS)

	{

		//2��ɾ��ֵ

		RegDeleteValue(hKey, _T("GISRestart"));





		//3���ر�ע���

		RegCloseKey(hKey);

	}

}



SocketServer server;

int main()
{
	AutoPowerOn();

	server.ServerInit();

	server.RecvPack();

	return 0;

}