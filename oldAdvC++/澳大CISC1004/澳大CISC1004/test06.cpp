#include <stdio.h>

void printchar(int num_star,char litter)
{
	for (int i = 0; i < num_star; i++)
	{
		printf("%c",litter);
	}
}

int main()
{
	int j = 1;
	for (int i = 10; i > 0; i--)
	{
		printchar(i, ' ');
		printchar(j, '*');
		j += 2;
		printf("\n");
	}
}