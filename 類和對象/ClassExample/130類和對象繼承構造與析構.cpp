#include <iostream>
#include <string>

using namespace std;

class Base
{
public:
	Base()
	{
		cout << "Base ���캯��" << endl;
	}
	~Base()
	{
		cout << "Base ��������" << endl;
	}
};

class son : public Base
{
public:
	son()
	{
		cout << "son ���캯��" << endl;
	}
	~son()
	{
		cout << "son ��������" << endl;
	}
};

void test01()
{
	son son01;

}

int main()
{
	test01();
    return 0;


}