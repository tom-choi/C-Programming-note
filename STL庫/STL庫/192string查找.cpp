#include <iostream>

using namespace std;
 
//1.����
void test01()
{
	string str1 = "abcdefgde";
	int pos = str1.find("de");
	if (pos == -1)
	{
		cout << "�]�ҵ��ַ���" << endl;
	}
	else
	{
		cout << "�ҵ��ַ��� pos = " << pos << endl;
	}

	//rfind��find�ą^�e
	//rfind�Ǐ����������
	pos = str1.rfind("de");
	cout << "pos = " << pos << endl;
}

//2. ��Q
void test02()
{
	string str1 = "abcdefg";
	str1.replace(1, 3, "1111");
	cout << "str1 = " << str1 << endl; //��ݔ�����N?
}




int main()
{
	test01();
	test02();
}