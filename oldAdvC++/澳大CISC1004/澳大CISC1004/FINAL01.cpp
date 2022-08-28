#include <stdio.h>

double power_1(double X, int N)
{
	if (N == 0)
	{
		return 1;
	}
	if (N > 0)
	{
		return X*power_1(X, N - 1);
	}
	else
	{
		return (1/(X*power_1(X, -N - 1)));
	}
}

double power_2(double X, int N)
{
	if (N == 0)
	{
		return 1;
	}
	if (N > 0)
	{
		if (N % 2 == 0)
		{
			return (power_2(X, N / 2) * power_2(X, N / 2));
		}
		else
		{
			return (power_2(X, (N - 1) / 2) * power_2(X, (N - 1) / 2) * X);
		}
	}
	else
	{
		if (N % 2 == 0)
		{
			return (1/(power_2(X, -N / 2) * power_2(X, -N / 2)));
		}
		else
		{
			return (1 / (power_2(X, (-N - 1) / 2) * power_2(X, (-N - 1) / 2) * X));
		}
	}
}


int main()
{
	printf("%lf", power_2(2.0, -3));
}