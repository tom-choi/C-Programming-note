#include <stdio.h>
#pragma warning(disable : 4996)
int main()
{
	FILE* fp;

	fp = fopen("file.txt", "w+");
	fprintf(fp, "%s %s %s%d", "test", "code", "for CISC", 1001);
	fclose(fp);

	fp = fopen("file.txt", "r");
	int c;
	while (true)
	{
		c = fgetc(fp);
		if (feof(fp))
		{
			break;
		}
		printf("%c", c);
	}

	fclose(fp);

	return(0);
}