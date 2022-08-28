#include <iostream>
using namespace std;

int main()
{
	char s[20],buf[99];
	int count = 0;
	//在“scanf("%s", s)”中，不要在s前面加上“&”符号。
	//如果是字符串数组char，s[maxn][maxl]，
	//可以用“scanf("%s", s[i])”读取第i个字符串。
	//注意，“scanf("%s", s)”遇到空白字符会停下来。
	scanf("%s", s);
	for (int abc = 111; abc <= 999; abc++)
	{
		for (int de = 11; de <= 99; de++)
		{
			int x = abc * (de % 10), y = abc * (de / 10), z = abc * de;
			//printf输出到屏幕，fprintf输出到文件，而sprintf输出到字符串
			sprintf(buf, "%d%d%d%d%d", abc, de, x, y, z);
			int ok = 1;
			for (int i = 0; i < strlen(buf); i++)
			{
				//strchr的作用是在一个字符串中查找单个字符
				if (strchr(s, buf[i]) == NULL)
				{
					ok = 0;
				}
			}

			if (ok)
			{
				printf("<%d>\n", ++count); 
				printf("%5d\nX%4d\n-----\n%5d\n%4d\n-----\n%5d\n\n", abc, de, x, y, z);
			}
		}
	}
	printf("The number of solutions = %d\n", count); 
	return 0;
}