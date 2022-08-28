#include <stdio.h>
#include<time.h>
int main()
{
	const int MOD = 1000000;
	int sum = 0;
	int n;
	scanf_s("%d", &n);
	for (int i = 1; i <= n; i++)
	{
		int tern = 1;
		for (int j = 1; j <= i; j++)
		{
			tern = (tern * j) % MOD;
		}
		sum = (sum +tern) % MOD;
	}
	printf("%d\n", sum);
	//printf("Time used = %.2fs\n", (double)clock() / CLOCKS_PER_SEC);
}