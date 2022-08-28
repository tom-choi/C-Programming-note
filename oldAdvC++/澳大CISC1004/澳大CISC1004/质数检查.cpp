#include <stdio.h>

int main()
{
	int n;
	bool flag = false;
	scanf_s("%d", &n);
	for (int i = 2; i <= n / 2; i++)
	{
		if (n % i == 0)
		{
			flag = true;
			break;
		}
	}
	if (flag)
		printf("%d is not a prime number", n);
	else
		printf("%d is a prime number", n);
	return 0;
}