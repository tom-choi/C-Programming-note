#include <stdio.h>

void swap(long int* p, int* q)
{
	int temp = *p;
	*p = *q;
	*q = temp;
}





int main()
{
	int Nums[8];
	for (int i = 0; i < 8; i++)
	{
		Nums[i] = i * i;
	}
	for (int i = 0; i < 8; i++)
	{
		printf("%d ", Nums[i]);
	}
	printf("\nSwaped:\n");
	swap(&Nums[3], &Nums[5]);
	for (int i = 0; i < 8; i++)
	{
		printf("%d ", Nums[i]);
	}

	printf("%p %p %p %p", Nums,&Nums[0], &Nums[1], &Nums[2]);
	return 0;
}