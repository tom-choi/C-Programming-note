#include <iostream>
#include <string>

using namespace std;

class Base
{
public:
	static void func()
	{
		cout << "Base - static void func()" << endl;
	}
	static int m_A;

};
int Base::m_A = 100;

class Son : public Base
{
public:
	static void func()
	{
		cout << "Son - static void func()" << endl;
	}
	static int m_A;
};
int Son::m_A = 200;

void test01()
{
	//通過對象訪問
	Son son01;
	cout << "son01.m_A = " << son01.m_A << endl;
	cout << "son01.Base::m_A = " << son01.Base::m_A << endl;
	cout << endl;

	//通過類名來訪問(如要訪問被父類隱藏的同名成員函數，需要加作用域
	cout << "Son_m_A = " << Son::m_A << endl;
	cout << "Base_m_A = " << Son::Base::m_A << endl;
	cout << endl;

	//func
	son01.func();
	son01.Base::func();
	cout << endl;

	//通過類名來訪問
	Son::func();
	Base::func();
	cout << endl;
}


int main()
{
	test01();
	return 0;
}