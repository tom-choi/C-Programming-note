#include <iostream>

using namespace std;

int adder(int a, int b)
{
	return a + b;
}

double adder(double a, double b)
{
	return a + b;
}

int main()
{
	printf("%d", adder(5, 7));
}