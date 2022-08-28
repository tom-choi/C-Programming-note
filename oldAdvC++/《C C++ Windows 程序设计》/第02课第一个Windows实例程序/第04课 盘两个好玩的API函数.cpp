#include <Windows.h>
#include <iostream>
#include <tchar.h>



//
#pragma comment(lib,"Urlmon.lib")



int WINAPI _tWinMain(HINSTANCE hlnstance, HINSTANCE hPrevlnstance, LPTSTR lpCmdline, INT nCmdShow)\
{
	//static_cast<__int64>()
	//MessageBox(NULL, _T("Hello World!"), _T("Hello World!"), MB_OK);

	//URLDownloadToFile下載
	HRESULT hRet = URLDownloadToFile(
		NULL,
		_T("https://avatar.cctry.com/uc_server/data/avatar/000/00/00/51_avatar_middle.jpg"),
		_T("D:\\456.png"),
		0,
		NULL);
	//if (hRet == S_OK)
	//{
	//	MessageBox(NULL, _T("下載成功!"), _T("Tips"), MB_OK);
	//}
	//else
	//{
	//	MessageBox(NULL, _T("下載失敗!"), _T("Tips"), MB_OK);
	//}

	//打開cmd
	//SHELLEXECUTEINFO shell_cmd = {0};
	//shell_cmd.cbSize = sizeof(SHELLEXECUTEINFO);
	//shell_cmd.lpVerb = _T("open");
	//shell_cmd.lpFile = _T("cmd.exe");
	//shell_cmd.lpParameters - _T("/select,C:\\Windows\\System32\\cmd.exe");
	//shell_cmd.nShow = SW_SHOWNORMAL;
	//BOOL bret = ShellExecuteEx(&shell_cmd);

	//打開我的電腦
	//SHELLEXECUTEINFO shell_my = { 0 };
	//shell_my.cbSize = sizeof(SHELLEXECUTEINFO);
	//shell_my.lpVerb = _T("open");
	//shell_my.lpFile = _T("explorer");
	//shell_my.lpParameters = _T("::{20d04fe0-3aea-1069-a2d8-08002b30309d}");;
	//shell_my.nShow = SW_SHOW;
	//shell_my.fMask = SEE_MASK_INVOKEIDLIST;
	//BOOL c_bret = ShellExecuteEx(&shell_my);

	//C:\Windows 目录的文件属性对话框
	SHELLEXECUTEINFO ShellInfo = { 0 };
	ShellInfo.cbSize = sizeof(SHELLEXECUTEINFO);
	ShellInfo.lpVerb = _T("properties");
	ShellInfo.lpFile = _T("F:\AOh14GhDhRBs5Io0sk5AfsOAZLWzpaTSlQQbTaye9fiGhQs432-p-rw-no.png");
	ShellInfo.nShow = SW_SHOWNORMAL;
	ShellInfo.fMask = SEE_MASK_INVOKEIDLIST;
	BOOL bRet = ShellExecuteEx(&ShellInfo);

	Sleep(10000);
	return 0;

}