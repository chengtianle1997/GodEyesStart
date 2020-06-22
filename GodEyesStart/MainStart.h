#pragma once

#define _AFXDLL

#include "ReadConfig.h"
#include "AnalyseConfig.h"
#include "afxwin.h"

//ConfigList* configlist;

class MainStart
{
public:
	
	ConfigList* configlist;
	int ConfigInit(SYSTEMTIME mytime);
	int MainAppStart();
	int MainAppStop();
private:
	//BOOL EnaleDebugPrivilege();
	int DevNum = 0;
	STARTUPINFO StartInfo = { sizeof(StartInfo) };
	PROCESS_INFORMATION ProcInfo0, ProcInfo1, ProcInfo2, ProcInfo3, ProcInfo4, ProcInfo5, ProcInfo6, ProcInfo7, ProcInfo8, ProcInfo9;
};