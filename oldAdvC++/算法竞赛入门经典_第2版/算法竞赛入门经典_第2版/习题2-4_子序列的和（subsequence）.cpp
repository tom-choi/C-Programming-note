#include <iostream>

using namespace std;

int main()
{
	int n, m;
	double sum = 0;
	while (cin >> n >> m)
	{
		double sum = 0;
		if (n == 0 && m == 0)break;
		for (int i = n; i < m+1; i++)
		{
			sum += (1.0 / i) * (1.0 / i);
		}
		printf("%.5f\n", sum);
	}
}