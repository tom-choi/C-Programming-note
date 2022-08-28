#include <stdio.h>

int main()
{
	int a, b, c;
	scanf_s("%d%d%d", &a, &b, &c);
	int arr[3] = { a,b,c };
	for (int i = 0; i < 3-1; i++)
	{
		for (int j = i; j < 3 - 1 - i; j++)
		{
			if (arr[j] < arr[i])
			{
				int temp = arr[j];
				arr[j] = arr[i];
				arr[i] = temp;
			}
		}
	}
	for (int i = 0; i < 3; i++)
	{
		printf("%d ", arr[i]);
	}
}

