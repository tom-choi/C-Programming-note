#include <iostream>
#include <fstream>
using namespace std;

class Person
{
public:
	char m_Name[64];
	int m_Age;
};

void test01()
{
	//1.�����^�ļ�

	//2.����������
	ofstream ofs("person.txt", ios::out | ios::binary);
	//3.���_�ļ�
	/*ofs.open("person.txt", ios::out | ios::binary);*/
	//4.���ļ�
	Person p = { "����",18 };
	ofs.write((const char*)&p, sizeof(Person));
	ofs.close();
}

int main()
{
	test01();
}