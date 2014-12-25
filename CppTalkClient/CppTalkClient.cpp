// CppTalkClient.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "InteractiveRslApp.h"

int _tmain(int argc, _TCHAR* argv[])
{
	InteractiveRslApp app("C:\\Projects\\NetGraphCalculator\\InteractiveRefalAppTest\\RfSvr.rsl");
	app.Run();


	TCHAR szPathRslSvr[256];
	STARTUPINFO StartupInfo;
	ZeroMemory(&StartupInfo, sizeof(StartupInfo));
	StartupInfo.cb = sizeof(StartupInfo);
	StartupInfo.dwFlags = STARTF_USESTDHANDLES;

	StartupInfo.hStdInput  = GetStdHandle(STD_INPUT_HANDLE);
	StartupInfo.hStdOutput = GetStdHandle(STD_OUTPUT_HANDLE);
	StartupInfo.hStdError  = GetStdHandle(STD_ERROR_HANDLE);

	PROCESS_INFORMATION ProcInfo;

	if(CreateProcess("refgo.exe", szPathRslSvr, NULL, NULL,
		TRUE, 0, NULL, NULL, &StartupInfo, &ProcInfo)) {
		
		


		CloseHandle(ProcInfo.hProcess);
		CloseHandle(ProcInfo.hThread);
	}
	return 0;
}

