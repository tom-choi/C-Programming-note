#include <iostream>
#include <string.h>
#include <Windows.h>
using namespace std;

int main()
{
	const string str = "ABCED";
	const wstring wstr = L"ABCDE";
	//Unicode to ANSI
	//代码页有 CP_ACP 和 CP_UTF8 两个
	int Unicodetextlen = WideCharToMultiByte(CP_ACP,
		0,
		wstr.c_str(), //原型為 const char*c_str() const; //生成一個const char*指針
		-1,
		NULL,
		0,
		NULL,
		NULL);
	cout << Unicodetextlen << endl;
	char* pElementText = new char[Unicodetextlen + 1];
	memset((void*)pElementText, 0, sizeof(char) * (Unicodetextlen + 1));
	WideCharToMultiByte(CP_ACP,
		0,
		wstr.c_str(),
		-1,
		pElementText,
		Unicodetextlen,
		NULL,
		NULL);
	string strtext;
	strtext = pElementText;
	cout << strtext << endl;
	delete[]pElementText;






	//ANSI to Unicode
	int ANSItextlen = MultiByteToWideChar(CP_ACP,
		0,
		str.c_str(),
		-1,
		NULL, //緩衝區
		0); //接受所需要轉換的寬字符字數,此值為0時不會進行轉換
	cout << ANSItextlen << endl;
	
	wchar_t* pUnicode = new wchar_t[ANSItextlen + 1];
	memset(pUnicode, 0, (ANSItextlen + 1) * sizeof(wchar_t));
	::MultiByteToWideChar(CP_ACP,
		0,
		str.c_str(),
		-1,
		(LPWSTR)pUnicode,
		ANSItextlen);
	wstring changewstr;
	changewstr = (wchar_t*)pUnicode;
	wcout << pUnicode << endl; //wcout
	delete[]pUnicode;
	



}