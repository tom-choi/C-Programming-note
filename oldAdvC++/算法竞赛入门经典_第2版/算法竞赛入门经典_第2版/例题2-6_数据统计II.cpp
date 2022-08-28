#include<stdio.h> 
#define INF 1000000000 
int main()
{
	int x, n = 0, kase = 0;
	while (scanf_s("%d", &n) == 1 && n)
	{
		int s = 0, min = INF, max = -INF;
		for (int i = 0; i < n; i++)
		{
			scanf_s("%d", &x);
			s += x;
			if (x < min) min = x;
			if (x > max) max = x;
		}
		if (kase) printf("\n");
		printf("Case %d: %d %d %.3f\n", ++kase, min, max, (double)s / n);
	}
	return 0;
}
