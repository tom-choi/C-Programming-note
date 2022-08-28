#include <iostream>
#define PI 3.14159
using namespace std;

int main()
{
	float r, h;
	scanf_s("%f%f", &r, &h);
	printf("Area = %.3f\n", 2 * PI * r * h + 2 * PI * r * r);
}