#include <stdio.h>

int main()
{
	int a, b, c;
	scanf_s("%d%d%d", &a, &b, &c);
	printf("%.3f", (a + b + c) / 3.0);
}