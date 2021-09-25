#include <iostream>
#include <string>

using namespace std;

class Base
{
public:
	//純虛函數
	//抽象類
	//無法實例化對象
	virtual void func() = 0;
	
};
class Son :public Base
{
public:
	//一定要發生重寫，否則無法實例化對象
	virtual void func() 
	{
		cout << "func()調用" << endl;
	};
};
void test01()
{
	//Base b; //抽象類無法實例化對象
	//new Base //抽象類無法實例化對象

	//Son s; //抽象類無法實例化對象
	Son s;
	Base* base = new Son;
	base->func();
}

int main()
{
	test01();


}