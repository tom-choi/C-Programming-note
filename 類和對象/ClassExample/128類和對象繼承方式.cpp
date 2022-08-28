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
		m_A = 10; // 可以訪問 --> public
		m_B = 10; // 可以訪問 --> protected
		//m_C = 10 // 不可以訪問
	}
};

class son2 :protected A
{
public:
	void func()
	{
		m_A = 10; // 可以訪問 --> protected
		m_B = 10; // 可以訪問 --> protected
		//m_C = 10 // 不可以訪問
	}
};

class son3 :private A
{
public:
	void func()
	{
		m_A = 10; // 可以訪問 --> private
		m_B = 10; // 可以訪問 --> private
		//m_C = 10 // 不可以訪問
	}
};

void test()
{
	son1 sonA;
	sonA.m_A = 100; // 外部可以訪問 --> public
	//sonA.m_B = 100; // 內部不可以訪問 --> protected
}


int main()
{
	system("pause");
	return 0;
}