#include <iostream>
#include <string>

using namespace std;

class Base1
{
public:
	Base1()
	{
		m_A = 100;
	}
	int m_A;
};

class Base2
{
public:
	Base2()
	{
		m_A = 200;
	}
	int m_A;
};

class son :public Base1, public Base2
{
public:
	son()
	{
		m_C = 300;
		m_D = 400;
	}
	int m_C;
	int m_D;
};

void test01()
{
	son son01;
	cout << "sizeof Son = " << sizeof(son01) << endl;
	cout << "son01.m_A = " << son01.Base1::m_A << endl;
	cout << "son02.m_A = " << son01.Base2::m_A << endl;
}


int main()
{
	test01();
	return 0;
}