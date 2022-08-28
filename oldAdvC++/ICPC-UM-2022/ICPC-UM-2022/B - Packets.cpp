#include <iostream>
using namespace std;

int main()
{
	int a, b, c, d, e, f;
	int p[4] = { 0,5,3,1 };
	int x, y;
	while (~scanf("%d %d %d %d %d %d", &a, &b, &c, &d, &e, &f) && a + b + c + d + e + f)
	{
		int result;
		result = f + e + d + (c + 3) / 4;
		x = d * 5 + p[c % 4];
		if (b > x)
			result = result + (b - x + 8) / 9;
		y = 36 * result - 36 * f - 16 * d - 9 * c - 4 * b;
		if (a > y)
			result = result + (a - y + 35) / 36;
		printf("%d\n", result);
	}
	return 0;
}