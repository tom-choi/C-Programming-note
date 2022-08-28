#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

//find_if

class Person
{
public:
	Person(string name, int age)
	{
		this->m_age = age;
		this->m_name = name;
	}
	bool operator==(Person& p)
	{
		if (this->m_name == p.m_name && this->m_age == p.m_age)
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

//查找內置數據類型
class GreaterFive
{
public:
	bool operator()(int p)
	{
		return p > 5;
	}
};

void test01()
{
	vector<int>v;
	for (int i = 0; i < 10; i++)
	{
		v.push_back(i);
	}
	vector<int>::iterator it = find_if(v.begin(), v.end(), GreaterFive());

	if (it == v.end())
	{
		cout << "沒有找到" << endl;
	}
	else
	{
		cout << "找到: " << *it << endl;
	}

}

class Greater20
{
public:
	bool operator()(Person& p)
	{
		return p.m_age > 20;
	}
};


void test02()
{
	vector<Person>v;
	Person p1("aaa", 10);
	Person p2("bbb", 20);
	Person p3("ccc", 30);
	Person p4("ddd", 40);

	v.push_back(p1);
	v.push_back(p2);
	v.push_back(p3);
	v.push_back(p4);

	//找年齡大於20的人
	vector<Person>::iterator it = find_if(v.begin(), v.end(), Greater20());

	if (it == v.end())
	{
		cout << "沒有找到" << endl;
	}
	else
	{
		cout << "找到姓名: " << it->m_name << " 年齡: " << it->m_age << endl;
	}

}





int main()
{
	test01();
	test02();
}