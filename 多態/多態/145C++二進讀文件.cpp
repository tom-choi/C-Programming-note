#include <iostream>
#include <string>
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
	ifstream ifs;
	//3.���_�ļ�
	ifs.open("person.txt", ios::in | ios::binary);

	if (!ifs.is_open())
	{
		cout << "�ļ����_ʧ��!" << endl;
	}
	Person p;

	ifs.read((char*)&p, sizeof(Person));
	cout << "����: " << p.m_Name << "���g: " << p.m_Age << endl;

}



int main()
{
	test01();
}
