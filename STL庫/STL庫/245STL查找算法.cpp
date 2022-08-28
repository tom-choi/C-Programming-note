#include <iostream>
#include <vector>
using namespace std;

void test01()
{
	vector<int>v;
	for (int i = 0; i < 10; i++)
	{
		v.push_back(i);
	}

	vector<int>::iterator it = find(v.begin(), v.end(), 5);
	if (it == v.end())
	{
		cout << "沒有找到!" << endl;
	}
	else
	{
		cout << "找到" << *it << endl;
	}
}

class Person
{
public:
	Person(string name, int age)
	{
		this->m_age = age;
		this->m_name = name;
	}
	bool operator==(const Person& P)
	{
		if (this->m_name == P.m_name && this->m_age == P.m_age)
		{
			return true;
		}
		else
		{
			return false;
		}
	}

	string m_name;
	int m_age;
};



void test02()
{
	vector<Person>v;

	Person p1("aaa", 10);
	Person p2("bbb", 20);
	Person p3("ccc", 30);
	Person p4("ddd", 50);
	Person p5("eee", 40);

	v.push_back(p1);
	v.push_back(p2);
	v.push_back(p3);
	v.push_back(p4);

	Person pp("bbb", 20);

	vector<Person>::iterator it = find(v.begin(), v.end(), pp);
	if (it != v.end())
	{
		cout << "找到 " << it->m_name << " " << it->m_age << endl;
	}
	else
	{
		cout << "沒有找到" << endl; 
	}
}


int main()
{
	test02();
}