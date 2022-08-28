#include <iostream>
#include <string.h>
#include <Windows.h>
using namespace std;

int main()
{
	const string str = "ABCED";
	const wstring wstr = L"ABCDE";
	//Unicode to ANSI
	//����ҳ�� CP_ACP �� CP_UTF8 ����
	int Unicodetextlen = WideCharToMultiByte(CP_ACP,
		0,
		wstr.c_str(), //ԭ�͞� const char*c_str() const; //����һ��const char*ָ�
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
		NULL, //���n�^
		0); //��������Ҫ�D�Q�Č��ַ��֔�,��ֵ��0�r�����M���D�Q
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