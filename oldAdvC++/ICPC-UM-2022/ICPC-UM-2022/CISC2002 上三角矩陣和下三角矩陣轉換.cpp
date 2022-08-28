#include <iostream>
using namespace std;

void Mprint(double M[3][3],int n)
{
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			printf("| %.1f ", M[i][j]);
		}
		printf("|\n");
	}
	printf("\n");
}

int main()
{
	double A[3][3] = { {1.0,2.0,-1.0},{2.0,1.0,-2.0},{-3.0,1.0,1.0} };
	double L[3][3] = {0}; //†ÎÎ»¾Øê‡
	for (int i = 0; i < 3; ++i)
	{
		L[i][i] = 1.0;
	}
	int n = 3;
	Mprint(A, n);
	for (int i = 0; i < n; ++i)
	{
		for (int j = i + 1; j < n; ++j)
		{
			double t = A[j][i] / A[i][i];
			L[j][i] = t;
			for (int k = i; k < n;++k)
				A[j][k] = A[j][k] - t * A[i][k];
		}
	}
	Mprint(A, n);
	Mprint(L, n);
	return 0;
}