//string ��һ���
#include <iostream>

using namespace std;

//string();
//string(const char* s)ʹ���ַ����K��ʼ��

void test01()
{
	string s1; //Ĭ�J����

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