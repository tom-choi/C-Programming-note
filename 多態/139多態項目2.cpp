#include <iostream>
#include <string>

using namespace std;


//一種接口有多種型態，叫多態
class AbstractDrinking
{
public:
	//煮水
	virtual void Boil() = 0;
	//沖泡
	virtual void Brew() = 0;
	//倒入
	virtual void Pourincup() = 0;
	//加料
	virtual void Putsomething() = 0;

	//制作飲品
	void makedrink()
	{
		Boil();
		Brew();
		Pourincup();
		Putsomething();
	}
};
class coffee : public AbstractDrinking
{
public:
	//煮水
	virtual void Boil()
	{
		cout << "煮水" << endl;
	}
	//沖泡
	virtual void Brew()
	{
		cout << "沖泡coffee......" << endl;
	}
	//倒入壺中
	virtual void Pourincup()
	{
		cout << "倒入壺中" << endl;
	}
	//加料
	virtual void Putsomething()
	{
		cout << "加入牛奶和糖" << endl;
	}
};
class Tea : public AbstractDrinking
{
public:
	//煮水
	virtual void Boil()
	{
		cout << "煮水" << endl;
	}
	//沖泡
	virtual void Brew()
	{
		cout << "沖泡Tea......" << endl;
	}
	//倒入壺中
	virtual void Pourincup()
	{
		cout << "倒入壺中" << endl;
	}
	//加料
	virtual void Putsomething()
	{
		cout << "加入枸杞" << endl;
	}
};
void dowork(AbstractDrinking* abs)
{
	abs->makedrink();
	delete[]abs; //釋放
}
void test01()
{
	dowork(new coffee);
	cout << "------------" << endl;
	dowork(new Tea);
}


int main()
{
	test01();
	return 0;
}