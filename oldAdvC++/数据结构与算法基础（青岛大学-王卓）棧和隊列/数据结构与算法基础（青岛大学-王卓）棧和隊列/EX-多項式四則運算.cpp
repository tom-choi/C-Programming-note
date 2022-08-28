#include <iostream>
using namespace std;
#define MAX 100

class Muti
{
public:
	Muti(int A[])
	{
		int length = sizeof(A);
		if (length > MAX)
		{
			printf("Overflowed!");
			return;
		}
		for (int i = 0; i < length; i++)
		{
			this->NUM[i] = A[i];
		}
	}



	int NUM[100] = { 0 };
	Muti operator+(Muti& M)
	{
		for (int i = 0; i < MAX; i++)
		{
			this->NUM[i] += M.NUM[i];
		}
		return *this;
	}
	Muti operator-(Muti& M)
	{
		for (int i = 0; i < MAX; i++)
		{
			this->NUM[i] -= M.NUM[i];
		}
		return *this;
	}
	Muti operator=(Muti& M)
	{
		for (int i = 0; i < MAX; i++)
		{
			this->NUM[i] = M.NUM[i];
		}
		return *this;
	}

	void printMuti()
	{
		for (int i = 0; i < MAX; i++)
		{
			printf("%d X^%d ", NUM[i], i);
		}
	}
};



int main()
{
	int A[] = { 1,2,3,4,5,6,7,8,9 };
	int B[] = { 9,8,7,6,5,4,3,2,1 };
	Muti a(A),b(B);
	Muti c = a + b;
	c.printMuti();
	return 0;
}