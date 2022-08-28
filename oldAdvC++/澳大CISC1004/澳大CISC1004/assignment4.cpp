#include <stdio.h>
#define cmperinch 2.54

void inches_cm(double inches, double end_val)
{
	printf("Inches		cm\n");
	for (;inches <= end_val;inches += 4.0)
	{
		printf("%.1lf		%.1lf\n", inches, inches * cmperinch);
	}
}

void cm_inches(double cm, double end_val)
{
	printf("cm		Inches\n");
	for (; cm <= end_val; cm += 10.0)
	{
		printf("%.1lf		%.1lf\n", cm, cm / cmperinch);
	}
}

int main()
{
	int select;
	double val,end_val;
	printf("Conversion table between inches and centimeters\n(1) inches to centimeters\n(2) centimeters to inches\nChoose conversion type (1,2): ");
	scanf("%d", &select);
	printf("Enter starting value: ");
	scanf("%lf", &val);
	printf("Enter ending value: ");
	scanf("%lf", &end_val);
	switch (select)
	{
	case 1:
	{
		inches_cm(val, end_val);
		break;
	}
	case 2:
	{
		cm_inches(val, end_val);
		break;
	}
	default:
		break;
	}
	return 0;
}