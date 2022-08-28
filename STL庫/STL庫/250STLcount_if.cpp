#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Greater20
{
public:
	bool operator()(int val)
	{
		return val > 20;
	}
};






void test01()
{
	vector<int>v;
	v.push_back(10);
	v.push_back(40);
	v.push_back(20);
	v.push_back(30);
	v.push_back(20);
	v.push_back(10);

	int num = count_if(v.begin(), v.end(), Greater20());

	cout << "大於20的元素個數為: " << num << endl;
}


class Person
{
public:
	Person(string name,int age)
	{
		this->m_age = age;
		this->m_name = name;
	}
	int m_age;
	string m_name;
};

class AgeGreater20
{
public:
	bool operator()(const Person& p)
	{
		return p.m_age > 20;
	}
};

void test02()
{
	vector<Person>v;

	Person p1("aaa", 35);
	Person p2("bbb", 60);
	Person p3("ccc", 50);
	Person p4("aaa", 35);
	Person p5("eee", 20);

	v.push_back(p1);
	v.push_back(p2);
	v.push_back(p3);
	v.push_back(p4);
	v.push_back(p5);

	int num = count_if(v.begin(), v.end(), AgeGreater20());
	cout << "大於20的元素個數為: " << num << endl;
}




int main()
{
	test01();
	test02();
}