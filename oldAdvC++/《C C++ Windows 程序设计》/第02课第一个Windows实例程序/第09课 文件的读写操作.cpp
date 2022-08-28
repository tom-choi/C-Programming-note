#include <Windows.h>
#include <iostream>
#include <tchar.h>

struct Student
{
	int age;
	char sex;
	char name[32];
};



int WINAPI _tWinMain(HINSTANCE hlnstance, HINSTANCE hPrevlnstance, LPTSTR lpCmdline, INT nCmdShow)\
{
	//static_cast<__int64>()
	HANDLE hFile = CreateFile(_T("F:\\VCportOK.txt"), GENERIC_WRITE, FILE_SHARE_READ, NULL, OPEN_EXISTING, FILE_ATTRIBUTE_NORMAL, NULL);
	if (hFile == INVALID_HANDLE_VALUE)
	{
		MessageBox(NULL, _T("打開文件失敗!"), _T("tips"), MB_OK);
		return -1;
	}

	int num = 123;
	DWORD dwRealWrite = 0;
	char ch = 'q';
	char szText[] = "我是vc驛站! ";

	Student stud;
	stud.age = 20;
	stud.sex = 'm';
	strcpy_s(stud.name, "zhangsan");

	BOOL bRet = WriteFile(hFile, &stud, sizeof(stud), &dwRealWrite, NULL);
	if (bRet)
	{
		MessageBox(NULL, _T("數據寫入成功!"), _T("tips"), MB_OK);
	}
	else
	{
		MessageBox(NULL, _T("數據寫入失敗!"), _T("tips"), MB_OK);
	}


	CloseHandle(hFile);
	return 0;
}