#include <iostream>
using namespace std;
#define MAX 101
char grid[MAX][MAX];
void DFS(int x, int y,int m,int n)
{
	if (x < 0 || x >= m || y < 0 || y >= n || grid[x][y] == '*')
		return;
	else
	{
		grid[x][y] = '*';
		DFS(x + 1, y, m, n);
		DFS(x - 1, y, m, n);
		DFS(x, y + 1, m, n);
		DFS(x, y - 1, m, n);
		DFS(x + 1, y + 1, m, n);
		DFS(x - 1, y - 1, m, n);
		DFS(x - 1, y + 1, m, n);
		DFS(x + 1, y - 1, m, n);
	}
}


int main()
{
	int m, n;
	while ((cin >> m >> n) && (m||n))
	{
		int ans = 0;
		for (int i = 0; i < m; i++)
		{
			cin >> grid[i];
		}
		for (int i = 0; i < m; i++)
		{
			for (int j = 0; j < n; j++)
			{
				if (grid[i][j] == '@')
				{
					DFS(i, j, m, n);
					ans++;
				}
			}
		}
		printf("%d\n", ans);
	}
	return 0;
}