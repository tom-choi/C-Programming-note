#include <iostream>

using namespace std;

long long C(int n, int m)
{
	if (n < n - m)
	{
		m = n - m;
	}
	long long ans = 1;
	for (int i = m + 1; i <= n; i++)
	{
		ans *= i;
	}
	for (int i = 1; i <= n-m; i++)
	{
		ans /= i;
	}
	return ans;
}



int main()
{
	cout << C(25, 12);
}