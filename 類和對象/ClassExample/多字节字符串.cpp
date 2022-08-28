#include <iostream>
#include <windows.h>
#include <tchar.h>
#include <cstring>
using namespace std;

int main()
{
	char sText[20] = { "¶à×Ö½Ú×Ö·û´®!OK!" };
	cout << sText << endl;

	DWORD dwNum = MultiByteToWideChar(CP_ACP, 0, sText, -1, NULL, 0);

	wchar_t* pwText;
	pwText = new wchar_t[dwNum];
	if (pwText == NULL)
	{
		delete[]pwText;
	}
}