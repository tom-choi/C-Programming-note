#include <stdio.h>

int sort_char(char a[])
{
	int length = sizeof(a);
	for (int i = 0; i < length - 1; i++)
	{
		for (int j = 0; j < length - i - 1; j++)
		{
			char temp = a[j];
			a[j] = a[j + 1];
			a[j + 1] = temp;
		}
	}
	return length;
}





int main()
{
	char a[] = { 'a','b','c','d' };
	for (int i = 0; i < sizeof(a); i++)
	{
		printf("%c ", a[i]);
	}
	printf("\nlength = %d\n", sort_char(a));
	for (int i = 0; i < sizeof(a); i++)
	{
		printf("%c ", a[i]);
	}
	return 0;
}