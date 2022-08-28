#include <iostream>
using namespace std;

int find_LIS(int a[], int n)
{
	int ans = 0;
	int dp[1001] = {0};
	for (int i = 1; i <= n; i++)
	{
		dp[i] = 1;
	}
	for (int i = 1; i <= n; i++)
	{
		for (int p = 1; p < i; p++)
		{
			if (a[p] < a[i])
				dp[i] = max(dp[i], dp[p] + 1);
		}
		printf("f[%d]=%d\n", i, dp[i]);
	}
	for (int i = 1; i <= n; i++)
	{
		ans = max(ans, dp[i]);
	}
	return ans;
}


int main()
{
	int a[] = { 0,1,5,3,4,6,9,7,8 };
	int n = 9;
	cout << find_LIS(a, n);
}