#include<stdio.h> 
int main() 
{ 
	int c, q = 1;
	//fgetc和getchar将读取“下一个字符”，
	//因此需要知道在各种情况下，“下一个字符”是哪个

	//个。如果用“scanf("%d", &n)”读取整数n，
	//则要是在输入123后多加了一个空格，
	//用getchar读取的将是这个空格；
	//如果在“123”之后紧跟着换行，则读取到的将是回车符“\n”
	while ((c = getchar()) != EOF)
	{
		if (c == '"')
		{
			printf("%s", q ? "``" : "''");
			q = !q;
		}
		else
			printf("%c", c);
	}
	return 0;
}