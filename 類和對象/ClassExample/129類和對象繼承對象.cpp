#include <iostream>
#include <string>

using namespace std;

class Base
{
public:
	int m_A;
protected:
	int m_B;
private:
	int m_C;
};

class Son : public Base
{
public:
	int m_D;
	
};

void test01()
{
	Base test01;
	Son test02;
	cout << "Base size is " << sizeof(test01) << endl;
	cout << "Son size is " << sizeof(test02) << endl;
}

int main()
{
	test01();
	return 0;
}

//打開 VScode 2019 中的 Developer Command Prompt

//D: 轉移

//cd C++\ClassExample\ClassExample

//dir

//cl /d1 reportSingleClassLayoutSon 129類和對象繼承對象.cpp