#include <Windows.h>
#include <iostream>
#include <tchar.h>
using namespace std;

LONGLONG GetFileSizeExt(LPCTSTR lpFilePath)
{
	if (!lpFilePath || _tcslen(lpFilePath) <= 3)
	{
		return -1;
	}
	HANDLE HFILE = CreateFile(lpFilePath, GENERIC_READ, FILE_SHARE_READ, NULL, OPEN_EXISTING, FILE_ATTRIBUTE_NORMAL, NULL);
	if (HFILE == INVALID_HANDLE_VALUE)
	{
		return -1;
	}
	LARGE_INTEGER filesize = { 0 };
	BOOL bRet = GetFileSizeEx(HFILE, &filesize);
	CloseHandle(HFILE);
	if (!bRet)
	{
		return -1;
	}
	return filesize.QuadPart;
}

BOOL ClearFileContent(LPCTSTR lpFilePath)
{
	if (!lpFilePath || _tcslen(lpFilePath) <= 3)
	{
		return FALSE;
	}
	HANDLE hFile = CreateFile(lpFilePath, GENERIC_WRITE, FILE_SHARE_READ, NULL, TRUNCATE_EXISTING, FILE_ATTRIBUTE_NORMAL, NULL);
	if (hFile == INVALID_HANDLE_VALUE)
		return FALSE;

	DWORD dwFileSizeHigh = 0;
	DWORD dwFileSize = GetFileSize(hFile, &dwFileSizeHigh);
	//左移運算
	LONGLONG lFileSize = (((LONGLONG)dwFileSizeHigh) << 32) | dwFileSize;

	TCHAR szFileSize[128] = { 0 };
	_stprintf(szFileSize, _T("文件大小為: %lld MB"), dwFileSize);
	MessageBox(NULL, szFileSize, _T("TIPS"), MB_OK);
	CloseHandle(hFile);

}



int WINAPI _tWinMain(HINSTANCE hlnstance, HINSTANCE hPrevlnstance, LPTSTR lpCmdline, INT nCmdShow)\
{
	//static_cast<__int64>()
	GetFileSizeExt(_T("F:\\VCportOK.txt"));
	MessageBox(NULL, szFileSize, _T("TIPS"), MB_OK);
	return 0;
}
