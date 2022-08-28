#include <iostream>
using namespace std;

int coinfind(int n)
{
	int coin_list[] = { 1,5,10,25 };
	int dp[1001] = {};
	dp[0] = 1;
	for (int i = 0; i < 4; i++)
	{
		for (int j = coin_list[i]; j <= n; ++j)
		{
			dp[j] = dp[j] + dp[j - coin_list[i]];
		}
	}
	return dp[n];
}


int main()
{
	cout << coinfind(12);
}