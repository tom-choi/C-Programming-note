#include <stdio.h>

int main()
{
	int n;
	scanf_s("%d", &n);
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			printf("* ");
		}
		printf("\n");
	}

	for (int i = 0; i < n*2; i+=2)
	{
		for (int j = 2; j < n*2-i; j++)
		{
			printf(" ");
		}
		for (int j = 0; j <= i; j++)
		{
			printf("* ");
		}
		printf("\n");
	}


	return 0;
}