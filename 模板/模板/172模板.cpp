#include <iostream>
using namespace std;

void myPrint(int a, int b)
{
	cout << "調用的普通函數" << endl;
}

template<class T>
void myPrint(T a, T b)
{
	cout << "調用的模板" << endl;
}

void test01()
{
	int a = 10;
	int b = 20;
	myPrint<>(a, b);
}



int main()
{
	test01();
	system("pause");
	return 0;
}