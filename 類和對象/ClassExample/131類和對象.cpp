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
		cout << "base�{��func����" << endl;
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
		cout << "son�{��func����" << endl;
	}
};

//ͬ���ɆT����
void test01()
{
	son son01;
	cout << "Son �µ� m_A = " << son01.m_A << endl;
	cout << "Base �µ� m_A = " << son01.Base::m_A << endl;
}

//ͬ���ɆT����
void test02()
{
	son son01;
	son01.Base::func(100);
	
	//�Ѕ�����һ��Ҫ��������
	son01.func(100);
}

int main()
{
	
	test01();
	test02();
}