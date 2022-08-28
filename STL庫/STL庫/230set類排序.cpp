#include <iostream>
#include <set>
using namespace std;

class Person
{
public:
	Person(string name, int age)
	{
		this->m_age = age;
		this->m_name = name;
	}

	string m_name;
	int m_age;
};

class comparePerson
{
public:
	bool operator()(const Person& p1, const Person& p2)const
	{
		//Äêıg
		return p1.m_age > p2.m_age;
	}
};



void test01()
{
	set<Person, comparePerson>s1;

	Person p1("tom", 14);
	Person p2("tom", 15);
	Person p3("tom", 17);
	Person p4("tom", 10);

	s1.insert(p1);
	s1.insert(p2);
	s1.insert(p3);
	s1.insert(p4);

	for (set<Person, comparePerson>::iterator it = s1.begin(); it != s1.end(); it++)
	{
		cout << "ĞÕÃû: " << (*it).m_name << "Äêıg: " << (*it).m_age << endl;
	}
}





int main()
{
	test01();
}