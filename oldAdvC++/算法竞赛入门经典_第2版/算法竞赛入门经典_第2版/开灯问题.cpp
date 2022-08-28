#include <iostream>
#include<string.h>
#define MAXn 1100
using namespace std;
int a[MAXn];
int main()
{
	int k, n,first = 1;
	memset(a, 0, sizeof(a));
	scanf_s("%d%d", &n, &k);
	for (int i = 1; i <= k; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			if (j % i == 0)
			{
				a[j] = !a[j]; //wtf is this?
			}
		}
	}
	for (int i = 1; i <= n; i++)
	{
		if (a[i])
		{
			if (first)
			{
				first = 0;
			}
			else
			{
				printf(" ");
			}
			printf("%d", i);
		}
	}
	printf("\n");
	return 0;
}