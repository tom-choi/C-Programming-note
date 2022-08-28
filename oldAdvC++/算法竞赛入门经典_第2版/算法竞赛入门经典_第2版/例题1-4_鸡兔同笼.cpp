#include <stdio.h>

int main()
{
	int n, m;
	scanf_s("%d%d", &n, &m);
	int a1, a2;

	//a1 + a2 = n
	//a1 * 2 + a2 * 4 = m



	a2 = m / 2 - n;
	//2a1 + m - n = n
	a1 = 2*n -m/2;
	if (a1 < 0 || a2 < 0)
		printf("No answer");
	else
		printf("%d %d", a1,a2);
}