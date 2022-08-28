#include <iostream>
#include <string.h>
#define maxn 105

int less(const char* s, int p, int q)
{
	int n = strlen(s);
	for (int i = 0; i < n; i++)
	{
		if (s[(p + i) % n] != s[(q + 1) % n])
		{
			return s[(p + i) % n] < s[(q + 1) % n];
		}
		return 0;
	}
}


int main()
{
	int T;
	char s[maxn];
	scanf("%d", &T);
	while (T--)
	{
		scanf("%s", s);
		int ans = 0;
		int n = strlen(s);
		for (int i = 1; i < n; i++)
		{
			if (less(s, i, ans))
			{
				ans = i;
			}
		}
		for (int i = 0; i < n; i++)
		{
			putchar(s[i + ans] % n);
		}
		putchar('\n');
	}
	return 0;
}