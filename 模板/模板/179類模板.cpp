#include <iostream>
#include <string>
using namespace std;

template<class T1, class T2>
class Person
{
public:
	Person(T1 name, T2 age);
		/*{
			this->m_Name = name;
			this->m_Age = age;
		}*/
	void showperson();
	/*{
		cout << "姓名: " << m_Name << " 年齡: " << m_Age;
	}*/
	T1 m_Name;
	T2 m_Age;
};

//構造函數的類外實現
template<class T1,class T2>
Person<T1,T2>::Person(T1 name, T2 age)
{
	this->m_Name = name;
	this->m_Age = age;
}

//成員函數的類外實現
template<class T1, class T2>
void Person<T1,T2>::showperson()
{
	cout << "姓名: " << m_Name << " 年齡: " << m_Age;
}

void test01()
{
	Person<string, int>P("Tom", 22);
	P.showperson();
}

int main()
{
	test01();
}