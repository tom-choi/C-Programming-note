#include <stdio.h>

int main()
{
	float f;
	scanf_s("%f", &f);
	printf("%.3f", (f - 32) * 5 / 9);
}