#include <iostream>
#include <string>

using namespace std;

class Phone
{
public:
	Phone(string name):m_Pname(name)
	{
		cout << "Phone �Ę��캯��" << endl;
	}
	string m_Pname;

};

class Person
{
public:
	Person(string Name, string nPhone) :m_Name(Name),m_Phone(nPhone)
	{
		cout << "Person �Ę��캯��" << endl;
	}
	~Person()
	{
		cout << "Person ����������" << endl;
	}
	string m_Name;
	
	Phone m_Phone;


};

void test()
{
	Person p("����", "IPhone X");
	cout << p.m_Name << "����" << p.m_Phone.m_Pname << endl;
}



int main()
{
	test();
	system("pause");
	return 0;
}