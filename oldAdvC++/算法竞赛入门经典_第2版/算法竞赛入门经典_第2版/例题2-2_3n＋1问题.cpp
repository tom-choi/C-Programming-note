#include <stdio.h>

int main()
{
	long long int a;
	long long int n = 0;
	scanf_s("%lld", &a);
	while (a != 1)
	{
		if (a % 2 == 1)
			a = 3 * a + 1;
		else
			a /= 2;
		n++;
	}
	printf("%lld\n", n);
}