#include <stdio.h>

int main()
{
	/*int n, m, r;
	scanf("%d%d", &n, &m);
	for (;;)
	{
		r = n % m;
		if (r == 0)
		{
			printf("%d", n);
			break;
		}
		m = n;
		n = r;
		r = n % m;
	}*/

	//A ASCII 
	printf("A	ASCII: %d\n\n", int('A'));
	//¡ú ASCII
	printf("¡ú	ASCII: %d\n\n", int('¡ú'));

	//A ASCII 
	char string1[] = "A";
	for (int i = 0; i < sizeof(string1) - 1; i++)
	{
		printf("strig1[] ASCII: %d\n\n", int(string1[i]));
	}

	//¡ú ASCII
	char string2[] = "¡ú";
	for (int i = 0; i < sizeof(string2) - 1; i++)
	{
		printf("strig2[] ASCII: %d\n\n", int(string2[i]));
	}
}