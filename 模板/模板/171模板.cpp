#include <iostream>
#include <string>

using namespace std;
template<class T>
int myadd01(T a, T b)
{
	return a + b;
}



void test01()
{
	int a = 10;
	int b = 20;
	char c = 'c';
	cout << myadd01(a, b) << endl;
}

int main()
{
	test01();
}