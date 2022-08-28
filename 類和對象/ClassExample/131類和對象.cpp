#include <iostream>
#include <string>

using namespace std;

class Base
{
public:
	int m_A;//
	Base()
	{
		m_A = 100;
	}
	void func(int a)
	{
		cout << "base調用func函數" << endl;
	}
};

class son : public Base
{
public:
	int m_A;//
	son()
	{
		m_A = 200;
	}
	void func()
	{
		cout << "son調用func函數" << endl;
	}
};

//同名成員屬性
void test01()
{
	son son01;
	cout << "Son 下的 m_A = " << son01.m_A << endl;
	cout << "Base 下的 m_A = " << son01.Base::m_A << endl;
}

//同名成員函數
void test02()
{
	son son01;
	son01.Base::func(100);
	
	//有參函數一定要加作用域
	son01.func(100);
}

int main()
{
	
	test01();
	test02();
}