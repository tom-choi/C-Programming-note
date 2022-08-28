#include <Windows.h>
#include <iostream>
#include <tchar.h>
using namespace std;

int WINAPI _tWinMain(HINSTANCE hlnstance, HINSTANCE hPrevlnstance, LPTSTR lpCmdline, INT nCmdShow)\
{
	//static_cast<__int64>()
	//MessageBox(NULL, _T("Hello World!"), _T("Hello World!"), MB_OK);

	//HANDLE HFILE = CreateFile(_T("E:\\私人照片庫\\secrt"), GENERIC_READ, FILE_SHARE_READ, NULL, OPEN_EXISTING, FILE_ATTRIBUTE_NORMAL, NULL);
	//if (HFILE != INVALID_HANDLE_VALUE)
	//{
	//	DWORD dwFileSizeHigh = 0;
	//	DWORD dwFileSize = GetFileSize(HFILE, &dwFileSizeHigh);
	//	
	//	LONGLONG lFileSize = ((LONGLONG)dwFileSizeHigh) << 32 | dwFileSize;

	//	TCHAR szFileSize[128] = {0};
	//	_stprintf_s(szFileSize,_T("文件大小為: %lld"), dwFileSize);
	//	MessageBox(NULL, szFileSize, _T("TIPS"), MB_OK);
	//	CloseHandle(HFILE);
	//}
	//else
	//{
	//	MessageBox(NULL, _T("文件打開失敗!"), _T("TIPS"), MB_OK);
	//}

	HANDLE HFILE = CreateFile(_T("E:\\私人照片庫\\imageb.jpg"), GENERIC_READ, FILE_SHARE_READ, NULL, OPEN_EXISTING, FILE_ATTRIBUTE_NORMAL, NULL);
	if (HFILE != INVALID_HANDLE_VALUE)
	{
		LARGE_INTEGER filesize = { 0 };
		BOOL bRet = GetFileSizeEx(HFILE, &filesize);
		if (bRet)
		{
			TCHAR szFileSize[128] = { 0 };
			_stprintf_s(szFileSize, _T("文件大小為: %lld KB"), filesize.QuadPart/1024);
			MessageBox(NULL, szFileSize, _T("TIPS"), MB_OK);
		}

		CloseHandle(HFILE);
	}
	else
	{
		MessageBox(NULL, _T("文件打開失敗!"), _T("TIPS"), MB_OK);
	}

	//LARGE_INTEGER
	return 0;
}