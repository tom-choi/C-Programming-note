#include <stdio.h>
void inc(int A[], int N)
{
	for (int i = 0; i < N; i++)
	{
		A[i]++;
	}
}

int main()
{
	char Board[9][9];
	for (int i = 0; i < 9; i++)
	{
		for (int j = 0; j < 9; j++)
		{
			printf("E%c ",(Board[i][j] = 'X'));
		}
		printf("\n");
	}
}