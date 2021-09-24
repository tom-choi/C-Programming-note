#include <iostream>
#include <string>
using namespace std;

class Person
{
public:
	string m_Name;
	int m_age;

	Person(string Name,int age)
	{
		this->m_age = age;
		this->m_Name = Name;
	}
	//重載運算符(low)
	/*bool operator==(Person& p)
	{
		if (this->m_Name == p.m_Name && this->m_age == p.m_age)
		{
			return true;
		}
		return false;
	}*/
};



template<class T>

bool f(T a, T b)
{
	if (a == b)
		return true;
	else
		return false;

}

//利用具體化person版本實驗代碼
template<> bool f(Person &a, Person &b)
{
	if (a.m_age == b.m_age && a.m_Name == b.m_Name)
		return true;
	else
		return false;
}


void test01()
{
	int a = 10;
	int b = 10;
	bool ret = f(a, b);
	if (ret)
		cout << "a == b" << endl;
	else
		cout << "a != b" << endl;
}

void test02()
{
	Person p1("Tom", 10);
	Person p2("Tom", 10);
	bool ret = f(p1, p2);
	if (ret)
		cout << "p1 == p2" << endl;
	else
		cout << "p1 != p2" << endl;
}

int main()
{
	test01();
	test02();
}
