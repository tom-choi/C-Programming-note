#include <iostream>
#include <windows.h>
#include <atlstr.h>
using namespace std;

//std::string& trim(std::string& s)
//{
//	if (s.empty())
//	{
//		return s;
//	}
//	s.erase(0, s.find_first_not_of(" "));
//	s.erase(s.find_last_not_of(" ") + 1);
//	return s;
//}

int main()
{
	//�ַ���ָ�
	char* p_str = "hello";
	//�ַ������M
	char szbuf[100] = { 'h','e','l','l','o' };
	//strcpy //strcmp //strcat

	//STL���е�string
	//string str = "hello";
	//str += " world";
	//bool is_equal = (str == "123");
	//cout << (is_equal?"True": "False") << endl;
	//http://www.cplusplus.com/reference/string/string/
	//cout << str << endl;
	/*cout << trim(str) << endl;*/

	//Cstring
	CString csStr = "hello";
	csStr += " world";
	cout << csStr << endl;
	csStr.MakeReverse();
	cout << csStr << endl;
	csStr.MakeReverse();
	csStr.MakeUpper();
	cout << csStr << endl;
	csStr.Trim();
	cout << csStr << endl;


	//CString ���� TCHAR �ķ�װ
	/*typedef ATL::CStringT< wchar_t, StrTraitMFC< wchar_t > > CStringW;
	typedef ATL::CStringT< char, StrTraitMFC< char > > CStringA;
	typedef ATL::CStringT< TCHAR, StrTraitMFC< TCHAR > > CString;*/







}