#include <iostream>
#include <string>

using namespace std;

class A
{
public:
	int m_A;
protected:
	int m_B;
private:
	int m_C;
};

class son1 :public A
{
public:
	void func()
	{
		m_A = 10; // �����L�� --> public
		m_B = 10; // �����L�� --> protected
		//m_C = 10 // �������L��
	}
};

class son2 :protected A
{
public:
	void func()
	{
		m_A = 10; // �����L�� --> protected
		m_B = 10; // �����L�� --> protected
		//m_C = 10 // �������L��
	}
};

class son3 :private A
{
public:
	void func()
	{
		m_A = 10; // �����L�� --> private
		m_B = 10; // �����L�� --> private
		//m_C = 10 // �������L��
	}
};

void test()
{
	son1 sonA;
	sonA.m_A = 100; // �ⲿ�����L�� --> public
	//sonA.m_B = 100; // �Ȳ��������L�� --> protected
}


int main()
{
	system("pause");
	return 0;
}