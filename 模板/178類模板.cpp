#include <iostream>

using namespace std;

//�ģ���c�^��

template<class T>
class Base
{
public:
	T m;
};

//class Son : public Base //�e�`
//{
//
//};

class Son1 : public Base<int>
{

};

template<class T1,class T2>
class Son2 : public Base<T2>
{
public:
	Son2()
	{
		cout << "T1����͞�: " << typeid(T1).name() << endl;
		cout << "T2����͞�: " << typeid(T2).name() << endl;
	}
	T1 obj{};
};

void test01()
{
	Son1 s1;
}

void test02()
{
	Son2<int,char> s2;
}


int main()
{
	test02();
}