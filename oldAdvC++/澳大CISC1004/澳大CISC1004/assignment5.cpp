#include <stdio.h>
void comput_middle_point(double* x1, double* y1, double* x2, double* y2)
{
	printf("Middle point: (%.5lf, %.5lf)", ((*x1 + *x2) / 2.0), ((*y1 + *y2) / 2.0));
}
int main()
{
	double x1,y1, x2, y2;
	printf("Point A(x1, y1):");
	scanf("%lf%lf", &x1, &y1);
	printf("\nPoint B(x2, y2):");
	scanf("%lf%lf", &x2, &y2);
	comput_middle_point(&x1,&y1,&x2,&y2);
	return 0;
}