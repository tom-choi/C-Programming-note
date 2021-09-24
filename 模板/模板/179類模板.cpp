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
		cout << "����: " << m_Name << " ���g: " << m_Age;
	}*/
	T1 m_Name;
	T2 m_Age;
};

//���캯������⌍�F
template<class T1,class T2>
Person<T1,T2>::Person(T1 name, T2 age)
{
	this->m_Name = name;
	this->m_Age = age;
}

//�ɆT��������⌍�F
template<class T1, class T2>
void Person<T1,T2>::showperson()
{
	cout << "����: " << m_Name << " ���g: " << m_Age;
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