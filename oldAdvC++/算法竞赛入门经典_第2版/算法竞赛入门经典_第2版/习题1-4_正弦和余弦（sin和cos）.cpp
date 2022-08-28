#include <stdio.h>
#include <math.h>

int main()
{
	int n;
	float PI = acos(-1.0);
	scanf_s("%d", &n);
	printf("%f\n%f", sin(n*PI/180), cos(n*PI / 180));
}