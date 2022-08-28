#include <iostream>

using namespace std;

int main()
{
	int num[] = { 1,2,3,4 };
	int ans[] = { 2,3,4,1 };
	for (int i = 0; i < sizeof(num) / 4; i++)
	{
		printf("num[%d] = %d\n", i + 1, num[i]);
	}
	printf("\n");
	///
	int temp = num[0];
	for (int i = 0; i < (sizeof(num) / 4) - 1; i++)
	{
		num[i] += temp;
	}
	num[3] = temp;

	///
	for (int i = 0; i < sizeof(num) / 4; i++)
	{
		printf("num[%d] = %d\n", i + 1, num[i]);
	}
	
}