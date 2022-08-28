#include <stdio.h>

int gcd(int a, int b)
{
	while (true)
	{
		//F1
		a = a % b;
		//F2
		if (a == 0)
		{
			printf("%d", b);
			break;
		}
		b = b % a;
		if (b == 0)
		{
			printf("%d", b);
			break;
		}
	}
	return 0;
}




int main()
{
	printf("%d", gcd(12, 18));
}