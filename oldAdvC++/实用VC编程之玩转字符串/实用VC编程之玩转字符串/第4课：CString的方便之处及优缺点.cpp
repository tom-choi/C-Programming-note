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
	//字符申指針
	char* p_str = "hello";
	//字符串數組
	char szbuf[100] = { 'h','e','l','l','o' };
	//strcpy //strcmp //strcat

	//STL庫中的string
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


	//CString 对于 TCHAR 的封装
	/*typedef ATL::CStringT< wchar_t, StrTraitMFC< wchar_t > > CStringW;
	typedef ATL::CStringT< char, StrTraitMFC< char > > CStringA;
	typedef ATL::CStringT< TCHAR, StrTraitMFC< TCHAR > > CString;*/







}