#include <iostream>
#include <cstring>
using namespace std;
int nums[101];
int dp[101000];
int main()
{
	int n, sum, i, j, m;
	cin >> n;
	while (n--)
	{
		memset(dp, 0, sizeof(dp));
		sum = 0;
		cin >> m;
		for (i = 1; i <= m; i++)
		{
			scanf("%d",&nums[i]);
			sum += nums[i];
		}
		dp[0] = 1;
		for (i = 1; i <= m; i++)
			for (j = sum; j >= nums[i]; j--)
				if (dp[j - nums[i]])
					dp[j] = 1;
		for (i = sum / 2; i >= 0; i--)
			if (dp[i])
			{
				j = i;
				break;
			}
		cout << sum - 2 * j << endl;
	}
	return 0;
}