#include <iostream>

using namespace std;

//1.ָ���������

//2.����ģ�廯

//3.�����ģ�廯

template<class T1,class T2>
class Person1
{
public:
	Person1(T1 name, T2 age) :m_name(name),m_age(age){}

	T1 m_name;
	T2 m_age;
	
	void showPerosn1()
	{
		cout << "Name: " << m_name << " Age: " << m_age << endl;
	}
};

//1.ָ���������
void PrintPerson1(Person1<string,int>& p)
{
	p.showPerosn1();
	//cout << "T1 ����͞�:" << typeid(T1).name() << endl;
	//cout << "T2 ����͞�:" << typeid(T2).name() << endl;
}

void test01()
{
	Person1<string, int>p1("Tom", 15);
	PrintPerson1(p1);
}

//2.����ģ�廯
template<class T1,class T2>
void PrintPerson2(Person1<T1, T2>& p)
{
	p.showPerosn1();
	cout << "T1 ����͞�:" << typeid(T1).name() << endl;
	cout << "T2 ����͞�:" << typeid(T2).name() << endl;
}


void test02()
{
	Person1<string, int>p("�i��", 90);
	PrintPerson2(p);
}

//3.�����ģ�廯
template<class T>
void PrintPerson3(T& p)
{
	p.showPerosn1();
	cout << "T����͞�:" << typeid(T).name() << endl;
}

void test03()
{
	Person1<string, int>p("TOOOM", 10);
	PrintPerson3(p);
}

template<class NameType, class AgeType = int>
class Person2
{
public:

};


int main()
{
	test01();
	test02();
	test03();
}