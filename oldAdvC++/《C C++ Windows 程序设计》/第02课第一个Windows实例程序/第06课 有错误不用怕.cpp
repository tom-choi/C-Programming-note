#include <Windows.h>
#include <iostream>
#include <tchar.h>
using namespace std;

int WINAPI _tWinMain(HINSTANCE hlnstance, HINSTANCE hPrevlnstance, LPTSTR lpCmdline, INT nCmdShow)
{
	BOOL bReT = DeleteFile(_T("D:\\111111.txt"));
	if (bReT)
	{
		MessageBox(NULL, _T("�h���ɹ�!"), _T("TIPS"), MB_OK);
	}
	else
	{
		DWORD dwErr = GetLastError();
		if (dwErr == ERROR_FILE_NOT_FOUND)
		{
			MessageBox(NULL, _T("�o���ҵ��ļ�"), _T("TIPS"), MB_OK);
		}
		else
		{
			MessageBox(NULL, _T("�h��ʧ��!"), _T("TIPS"), MB_OK);
		}
	}



}
