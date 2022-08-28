#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;
#define MAX 1000
char sub[MAX], s[MAX];
int main()
{	
	string s, t;
	while (cin >> s >> t)
	{
		int n = 0;
		for (int i = 0; i < t.length() && n < s.length(); i++)
		{
			if (t[i] == s[n])
				n++;
		}
		printf("%s", n == s.length() ? "Yes\n" : "No\n");
	}
	return 0;
}