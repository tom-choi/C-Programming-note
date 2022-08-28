#include <Windows.h>
#include <tchar.h>


//舊入口點函數
//int main(int argc, char* argv[])
//{
//
//}
//入口點函數
int WINAPI _tWinMain(HINSTANCE hInstance, HINSTANCE hPreInstance, LPTSTR IpCmdLine, int nCmdShow)
{
	MessageBox(NULL, _T("Hello World!"), _T("提示"), MB_YESNOCANCEL | MB_ICONERROR |MB_DEFBUTTON2);

	return 0;
}