#include <stdio.h>

int power(int num, int pow)
{
	int temp = num;
	for (int i = 1; i < pow; i++)
	{
		num *= temp;
	}
	return num;
}

int main()
{
	for (int i = 1; i < 10; i++)
	{
		for (int j = 1; j < 10; j++)
		{
			printf("(%d,%d)", power(i, 2), power(j, 3));
		}
		printf("\n");
	}
	return 0;
}