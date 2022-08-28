#include <iostream>
#include <string.h>
#define MAX 1000
int main()
{
	char OX[MAX];
	scanf("%s", OX);
	int len = sizeof(OX)/4, counts = 1,sum = 0;
	for (int i = 0; i < len; i++)
	{
		if (OX[i] == 'O')
		{
			sum += counts++;
		}
		else
		{
			counts = 1;
		}
	}
	printf("%d", sum);
	return 0;
}