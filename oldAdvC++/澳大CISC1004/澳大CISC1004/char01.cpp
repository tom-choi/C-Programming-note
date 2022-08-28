#include <stdio.h>
void Reverse(int i,int* a,int len)
{
	while (i < len) 
	{
		int temp = a[i];
		a[i] = a[len];
		a[len] = temp;
		return Reverse(i+1, a, len-1);
	}
}

int main()
{
	int A[10] = { 0,1,2,3,4,5,6,7,8,9 };
	int len = sizeof(A) / sizeof(int);
	for (int i = 0; i < len; i++)
	{
		printf("%d", A[i]);
	}
	printf("\nReverse:\n");
	Reverse(0,A, --len);
	for (int i = 0; i < len + 1; i++)
	{
		printf("%d", A[i]);
	}
	return 0;
}