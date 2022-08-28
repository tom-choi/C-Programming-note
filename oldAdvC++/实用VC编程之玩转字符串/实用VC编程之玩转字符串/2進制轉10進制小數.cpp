#include <iostream>
#define MAXN 32
using namespace std;

void OX(int numOX)
{
	int result[MAXN];
	int i = 0;

	for (; numOX != 0;)
	{
		result[i++] = numOX % 2;
		numOX /= 2;
		printf("%d", result[i]);
	}
	cout << i << endl;
	for (int j = --i; j >= 0; j--)
	{
		printf("%d", result[j]);
	}
}

void OXtoHex(double m)
{
	double temp = 0.0; int digit = 0;
	cout << "\n0.";
	for (int i = 0; i < 10; i++)
	{
		temp = m * 2;
		digit = static_cast<int>(temp);
		m = temp - digit;
		cout << digit;
	}
	cout << endl;
}



int main()
{
	OX(41);
	OXtoHex(0.6875);
	return 0;
}
