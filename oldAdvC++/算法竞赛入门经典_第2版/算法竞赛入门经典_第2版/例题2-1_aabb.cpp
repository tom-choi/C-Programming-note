#include <stdio.h>

int main()
{
	int sum;
	for (int a = 0; a < 10; a++)
	{
		for (int b = 0; b < 10; b++)
		{
			sum = a * 1000 + a * 100 + b * 10 + b * 1;
			for (int n = 0; n < sum; n++)
			{
				if (sum == n * n)
				{
					printf("%d", sum);
				}
			}
		}
	}
}