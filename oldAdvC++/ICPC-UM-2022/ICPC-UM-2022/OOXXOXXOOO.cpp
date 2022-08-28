#include <iostream>
using namespace std;
#define MAX 1000
int main()
{
	int n;
	scanf("%d", &n);
	int ans[10000] = {0};
	for (int i = 0; i < n; i++)
	{
		string s;
		int res = 0;
		cin >> s;
		for (char ch : s)
		{
			if (ch == 'O')
				res++;
			else
				res = 0;
			ans[i] += res;
		}
	}
	for (int i = 0; i < n; i++)
	{
		printf("%d\n", ans[i]);
	}
	return 0;
}