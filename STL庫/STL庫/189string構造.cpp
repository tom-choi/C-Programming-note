//string 是一個類
#include <iostream>

using namespace std;

//string();
//string(const char* s)使用字符串並初始化

void test01()
{
	string s1; //默認構造

	const char* str = "Hello World";
	string s2(str);
	//cout << typeid(s2).name();

	cout << "s2 = " << s2 << endl;

	string s3(s2);
	cout << "s3 = " << s3 << endl;

	string s4(10, 'a');
	cout << "s4 = " << s4 << endl;
}



int main()
{
	test01();
}