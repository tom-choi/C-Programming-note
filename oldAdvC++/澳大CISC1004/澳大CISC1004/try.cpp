#include <stdio.h>

void my_sort(int A[],int n,int target)
{
	int a = 0;
	int b = n-1;
	int times = 0;
	while (a <= b)
	{
		printf("%d\n", ++times);
		int mid = a + (a + b) / 2;
		if (A[mid] == target)
		{
			printf("we find out %d in array", target);
			return;
		}		
		else if (A[mid] < target)
			a = mid + 1;
		else
			b = mid - 1;
	}
	printf("we cannot find out %d in array", target);
}


int main() 
{
	int target = 1;
	int B[] = { 1,2,3,4,5,6,7,8,9 };
	my_sort(B, 9, target);
	return 0;
}