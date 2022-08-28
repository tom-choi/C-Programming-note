#include <stdio.h>
#define LOCAL
#define INF 10000000
int main()
{
#ifdef LOCAL
	freopen("data.in", "r", stdin);
	freopen("data.out", "w", stdout);
#endif // LOCAL



	int x, n,s = 0;
	int min = INF;
	int mix = -INF;

	while (scanf_s("%d", &x) == 1)
	{
		s += x;
		if (x < min)
			min = x;
		if (x > mix)
			mix = x;
		n++;
	}
	printf("%d %d %.3f\n", min, mix, (double)s / n);
}