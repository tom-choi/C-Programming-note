#include <iostream>
#include <vector>
using namespace std;
int a[10][10], b[10][10];

void div_tt(int n, int m)
{
	int  c[10][10] = {0};
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			for (int k = 0; k < m; ++k)
			{
				c[i][j] += a[i][k] * a[k][j];
			}
		}
	}
}

int main()
{
	
}