#include <stdio.h>

int main()
{
	char str[] = "Hello World!";
	//printf("%d", sizeof(str));
	for (int i = 0; i < sizeof(str); i++)
	{
		if (str[i] == ' ')
		{
			for (int j = i; j < sizeof(str)-1; j++)
			{
				str[j] = str[j + 1];
			}
		}
		printf("%c", str[i]);
	}
}