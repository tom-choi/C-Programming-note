#include <iostream>
#include <string>
using namespace std;

int main()
{
	int a = 5;
	int& b = a;
	int* p = &a;

	cout << a << endl;
	cout << b << endl;
	cout << p << endl;
	cout << &a << endl;
	cout << &b << endl;
}