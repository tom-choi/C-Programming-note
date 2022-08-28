#include <iostream>
#include <string>

using namespace std;

class Person
{

public:
	Person(int age)
	{
		m_Age = new int(age);
	}
	int *m_Age;
	Person& operator=(const Person& p)
	{

		if (m_Age != NULL)
		{
			delete[] m_Age;
			m_Age = NULL;
		}
		m_Age = new int(*p.m_Age);
		//��������
		return *this;
	}
};


void test01()
{
	Person p1(18); Person p2(20); Person p3(30);
	p3 = p2 = p1;
	cout << "p1 �����g�� " << *p1.m_Age << endl;
	cout << "p2 �����g�� " << *p2.m_Age << endl;
	cout << "p3 �����g�� " << *p3.m_Age << endl;
}



int main()
{

	test01();



}