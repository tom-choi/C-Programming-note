#include <iostream>
#include <string>

using namespace std;

//2.模板需要輸出T的數據類型，才可以使用
template<class T>
void func()
{
	cout << "func 調用" << endl;
}

void test02()
{
	func<int>();
}

int myAdd01(int a, int b)
{
	return a + b;
}

void test01()
{
	int a = 10;
	int b = 20;
	char c = 'c';
	cout << myAdd01(a, c) << endl;
}



int main()
{
	test01();
}