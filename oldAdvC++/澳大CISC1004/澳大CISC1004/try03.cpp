#include <stdio.h>
#define MAX 10

int main()
{
	int i,score[MAX];
	
	for (int i = 0; i < MAX; i++)
	{
		scanf_s("%d", &score[i]);
	}
	for (int i = 0; i < MAX; i++)
	{
		printf("%d", score[i]);
	}
}