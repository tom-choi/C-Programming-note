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
	//ͨ�^�����L��
	Son son01;
	cout << "son01.m_A = " << son01.m_A << endl;
	cout << "son01.Base::m_A = " << son01.Base::m_A << endl;
	cout << endl;

	//ͨ�^������L��(��Ҫ�L��������[�ص�ͬ���ɆT��������Ҫ��������
	cout << "Son_m_A = " << Son::m_A << endl;
	cout << "Base_m_A = " << Son::Base::m_A << endl;
	cout << endl;

	//func
	son01.func();
	son01.Base::func();
	cout << endl;

	//ͨ�^������L��
	Son::func();
	Base::func();
	cout << endl;
}


int main()
{
	test01();
	return 0;
}