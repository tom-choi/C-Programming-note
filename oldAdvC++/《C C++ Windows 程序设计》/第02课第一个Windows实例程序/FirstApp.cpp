#include <Windows.h>
#include <tchar.h>


//�f����c����
//int main(int argc, char* argv[])
//{
//
//}
//����c����
int WINAPI _tWinMain(HINSTANCE hInstance, HINSTANCE hPreInstance, LPTSTR IpCmdLine, int nCmdShow)
{
	MessageBox(NULL, _T("Hello World!"), _T("��ʾ"), MB_YESNOCANCEL | MB_ICONERROR |MB_DEFBUTTON2);

	return 0;
}