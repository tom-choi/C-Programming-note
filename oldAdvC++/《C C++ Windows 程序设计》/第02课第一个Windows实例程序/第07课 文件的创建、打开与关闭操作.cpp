#include <Windows.h>
#include <iostream>
#include <tchar.h>
using namespace std;

int WINAPI _tWinMain(HINSTANCE hlnstance,HINSTANCE hPrevlnstance,LPTSTR lpCmdline,INT nCmdShow)
{
	//創建空白文件 //CREATE_ALWAYS
	/*HANDLE HFILE = CreateFile(_T("F:\\VCportOK.txt"),GENERIC_READ | GENERIC_WRITE,FILE_SHARE_READ,NULL,CREATE_ALWAYS,FILE_ATTRIBUTE_NORMAL,NULL);
	if (HFILE != INVALID_HANDLE_VALUE)
	{
		MessageBox(NULL, _T("文件創建成功!"), _T("TIPS"), MB_OK);
	}
	return 0;*/

	//打開一個已經存在的文件 //OPEN_EXISTING
	/*HANDLE HFILE = CreateFile(_T("F:\\VCportOK.txt"), GENERIC_READ | GENERIC_WRITE, FILE_SHARE_READ, NULL, OPEN_EXISTING, FILE_ATTRIBUTE_NORMAL, NULL);
	if (HFILE != INVALID_HANDLE_VALUE)
	{
		MessageBox(NULL, _T("文件打開成功!"), _T("TIPS"), MB_OK);
	}
	else
	{
		MessageBox(NULL, _T("文件打開失敗!"), _T("TIPS"), MB_OK);
	}*/

	//打開一個已經存在的文件，文件不存在則創建
	/*HANDLE HFILE = CreateFile(_T("F:\\VCportOK.txt"), GENERIC_READ | GENERIC_WRITE, FILE_SHARE_READ, NULL, OPEN_ALWAYS, FILE_ATTRIBUTE_NORMAL, NULL);
	if (HFILE != INVALID_HANDLE_VALUE)
	{
		MessageBox(NULL, _T("文件打開成功!"), _T("TIPS"), MB_OK);
	}
	else
	{
		MessageBox(NULL, _T("文件打開失敗!"), _T("TIPS"), MB_OK);
	}*/

	//打開並清空一個已經存在的文件，文件不存在則創建
	//HANDLE HFILE = CreateFile(_T("F:\\VCportOK.txt"), GENERIC_READ | GENERIC_WRITE, FILE_SHARE_READ, NULL, CREATE_ALWAYS, FILE_ATTRIBUTE_NORMAL, NULL);
	//if (HFILE != INVALID_HANDLE_VALUE)
	//{
	//	MessageBox(NULL, _T("文件打開成功!"), _T("TIPS"), MB_OK);
	//	CloseHandle(HFILE);
	//}
	//else
	//{
	//	MessageBox(NULL, _T("文件打開失敗!"), _T("TIPS"), MB_OK);
	//}


	//關閉文件
	return 0;
}

