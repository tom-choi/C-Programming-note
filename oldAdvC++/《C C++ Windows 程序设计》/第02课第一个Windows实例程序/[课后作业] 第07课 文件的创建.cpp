#include <Windows.h>
#include <iostream>
#include <tchar.h>
using namespace std;

BOOL FindFile(LPCTSTR lpFilePath)
{
	if (!lpFilePath || _tcslen(lpFilePath) < 3)
	{
		return FALSE;
	}
	HANDLE HFILE = CreateFile(_T("F:\\VCportOK.txt"), GENERIC_READ | GENERIC_WRITE, FILE_SHARE_READ, NULL, OPEN_EXISTING, FILE_ATTRIBUTE_NORMAL, NULL);
	if (HFILE == INVALID_HANDLE_VALUE && GetLastError() == ERROR_FILE_NOT_FOUND)
	{
		return FALSE;
	}
	CloseHandle(HFILE);
	return TRUE;
}

BOOL CLEARFile(LPCTSTR lpFilePath)
{
	if (!lpFilePath || _tcslen(lpFilePath) < 3)
	{
		return FALSE;
	}
	HANDLE HFILE = CreateFile(_T("F:\\VCportOK.txt"), GENERIC_READ | GENERIC_WRITE, FILE_SHARE_READ, NULL, CREATE_ALWAYS, FILE_ATTRIBUTE_NORMAL, NULL);
	CloseHandle(HFILE);
	return TRUE;
}


int WINAPI _tWinMain(HINSTANCE hlnstance, HINSTANCE hPrevlnstance, LPTSTR lpCmdline, INT nCmdShow)
{
	//���������������Ե��ļ� //CREATE_ALWAYS
	HANDLE HFILE = CreateFile(_T("F:\\VCportOK.txt"),GENERIC_READ | GENERIC_WRITE,FILE_SHARE_READ,NULL,CREATE_ALWAYS, FILE_ATTRIBUTE_HIDDEN,NULL);
	if (HFILE != INVALID_HANDLE_VALUE)
	{
		MessageBox(NULL, _T("�����ļ������ɹ�!"), _T("TIPS"), MB_OK);
	}
	else
	{
		MessageBox(NULL, _T("�����ļ�����ʧ��!"), _T("TIPS"), MB_OK);
	}
	return 0;
}