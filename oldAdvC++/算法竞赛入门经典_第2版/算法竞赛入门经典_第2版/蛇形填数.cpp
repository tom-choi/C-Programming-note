#include <iostream>
#define maxn 20
int a[maxn][maxn];
using namespace std;

int main()
{
	int n, x, y, tot = 0;
	scanf_s("%d", &n);
	memset(a, 0, sizeof(a));
	//赋值x = 0和y = n - 1后马上要把它们作为数组a的下标
	//設定右上角為數字1
	tot = a[x = 0][y = n - 1] = 1;
	while(tot < n*n)
	{
		//向下
		while (x + 1 < n && !a[x + 1][y])
		{
			a[++x][y] = ++tot;
		}
		//向左
		while (y - 1 >= 0 && !a[x][y - 1])
		{
			a[x][--y] = ++tot;
		}
		//向上
		while (x - 1 >= 0 && !a[x - 1][y])
		{
			a[--x][y] = ++tot;
		}
		//向右
		while (y + 1 < n && !a[x][y + 1])
		{
			a[x][++y] = ++tot;
		}
	}
	for (x = 0; x < n; x++)
	{
		for (y = 0; y < n; y++)
		{
			printf("%3d", a[x][y]);
		}
		printf("\n");
	}
	return 0;
}