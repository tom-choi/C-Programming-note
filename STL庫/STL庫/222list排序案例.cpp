#include <iostream>
#include <list>
using namespace std;

class Person
{
public:
	Person(string name, int age, int height)
	{
		this->m_Name = name;
		this->m_Age = age;
		this->m_Height = height;
	}


	string m_Name;
	int m_Age;
	int m_Height;
};

bool comparePerson(Person& p1, Person& p2)
{
	//按照年齡升序
	//按照身高做降序
	if (p1.m_Age == p2.m_Age)
	{
		//按照年齡相同，則身高做降序
		return p1.m_Height > p2.m_Height;
	}
	else
	{
		return p1.m_Age < p2.m_Age;
	}
}

void test01()
{
	list<Person>L1;

	Person p1("A", 35, 175);
	Person p2("B", 45, 180);
	Person p3("C", 40, 170);
	Person p4("D", 25, 190);
	Person p5("E", 35, 160);
	Person p6("F", 35, 200);

	L1.push_back(p1);
	L1.push_back(p2);
	L1.push_back(p3);
	L1.push_back(p4);
	L1.push_back(p5);
	L1.push_back(p6);

	cout << "排序前" << endl;
	for (list<Person>::iterator it = L1.begin(); it != L1.end(); it++)
	{
		cout << "姓名: " << (*it).m_Name << " 年齡: " << it->m_Age << " 身高: " << it->m_Height << endl;
	}
	cout << "排序後" << endl;
	L1.sort(comparePerson);
	for (list<Person>::iterator it = L1.begin(); it != L1.end(); it++)
	{
		cout << "姓名: " << (*it).m_Name << " 年齡: " << it->m_Age << " 身高: " << it->m_Height << endl;
	}

}

int main()
{
	test01();
}