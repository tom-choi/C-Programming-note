#include <iostream>
#define MAX 10000
int main()
{
	int m, ans[MAX] = {0};
	scanf("%d", &m);
	for (int i = 0; i < m; i++)
	{
		int n;
		scanf("%d", &n);
		for (int j = 0; j < n; j++)
		{
			int num;
			scanf("%d", &num);
			ans[i] += num;
		}
	}
	for (int i = 0; i < m; i++)
	{
		printf("%d\n", ans[i]);
	}
	return 0;
}