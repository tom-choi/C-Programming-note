#include <iostream>
using namespace std;
#include <functional>


//negate 一元仿函數 取反仿函數
void test01()
{
	negate<int>n;

	cout << n(50) << endl;
}

//plus 二元仿函數 加法
void test02()
{
	plus<int>p;

	cout << p(10, 20) << endl;
}

int main()
{
	test01();
	test02();
}