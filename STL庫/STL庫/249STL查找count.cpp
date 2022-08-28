#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

//_count

//統計
void test01()
{
	vector<int>v;

	v.push_back(10);
	v.push_back(20);
	v.push_back(40);
	v.push_back(50);
	v.push_back(30);
	v.push_back(20);

	int num = count(v.begin(), v.end(), 40);

	cout << "40的元素個數為: " << num << endl;
}

class Person
{
public:
	Person(string name, int num)
	{
		this->m_name = name;
		this->m_num = num;
	}
	bool operator==(const Person& p)
	{
		if (this->m_num == p.m_num)
		{
			return true;
		}
		return false;
	}

	string m_name;
	int m_num;
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

	Person p("ppp", 35);

	int num = count(v.begin(), v.end(), p);

	cout << "和p同歲的人有:" << num << "人" << endl;
}


int main()
{
	test02();
}