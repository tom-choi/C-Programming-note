#include <iostream>

using namespace std;

class Person1
{
public:
	void showPerson01()
	{
		cout << "Person01 show" << endl;
	}
};

class Person2
{
public:
	void showPerson02()
	{
		cout << "Person02 show" << endl;
	}
};

template<class T>
class MyClass
{
public:
	T obj;

	//類模板中的成員函數
	void func1()
	{
		obj.showPerson01();
	}
	void func2()
	{
		obj.showPerson02();
	}
};

void test01()
{
	MyClass<Person2>m;
	//m.func1();
	m.func2();
}

int main()
{
	test01();
}