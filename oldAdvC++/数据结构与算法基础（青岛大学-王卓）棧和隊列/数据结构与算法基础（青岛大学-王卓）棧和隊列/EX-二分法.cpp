#include <stdio.h>
#include <stdlib.h>
typedef struct my_array
{
	int length;
	int* m_array;
};

int find(my_array A, int data)
{
	int a = 0; int b = A.length - 1;
	int i = 0;
	while (a <= b)
	{
		int mid = (a + b) / 2;
		int ele = A.m_array[mid];
		if (ele < data)
			a = mid + 1;
		else if (ele > data)
			b = mid - 1;
		else
			return mid;
		printf("run %d times \n", ++i);

	}
}

int main()
{
	my_array a1;
	a1.length = 10;
	a1.m_array = (int*)malloc(a1.length * sizeof(int));
	for (int i = 0; i < a1.length; i++)
	{
		a1.m_array[i] = i+1;
	}
	int key = 3;
	printf("key(%d) is in A[%d]",key ,find(a1, key));
	free(a1.m_array);
}