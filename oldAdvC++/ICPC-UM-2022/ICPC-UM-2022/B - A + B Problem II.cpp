#include <iostream>
#define MAX 10000
int main()
{
	int n, ans[MAX];
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		int a, b;
		scanf("%d%d", &a, &b);
		ans[i] = a + b;
	}
	for (int i = 0; i < n; i++)
	{
		printf("%d\n", ans[i]);
	}
	return 0;
}