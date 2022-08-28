#include <iostream>
#include <string>

using namespace std;

class Base
{
public:
	Base()
	{
		cout << "Base ˜‹Ôìº¯”µ" << endl;
	}
	~Base()
	{
		cout << "Base Îö˜‹º¯”µ" << endl;
	}
};

class son : public Base
{
public:
	son()
	{
		cout << "son ˜‹Ôìº¯”µ" << endl;
	}
	~son()
	{
		cout << "son Îö˜‹º¯”µ" << endl;
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