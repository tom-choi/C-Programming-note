#include <iostream>
using namespace std;

int main()
{
	char s[20],buf[99];
	int count = 0;
	//�ڡ�scanf("%s", s)���У���Ҫ��sǰ����ϡ�&�����š�
	//������ַ�������char��s[maxn][maxl]��
	//�����á�scanf("%s", s[i])����ȡ��i���ַ�����
	//ע�⣬��scanf("%s", s)�������հ��ַ���ͣ������
	scanf("%s", s);
	for (int abc = 111; abc <= 999; abc++)
	{
		for (int de = 11; de <= 99; de++)
		{
			int x = abc * (de % 10), y = abc * (de / 10), z = abc * de;
			//printf�������Ļ��fprintf������ļ�����sprintf������ַ���
			sprintf(buf, "%d%d%d%d%d", abc, de, x, y, z);
			int ok = 1;
			for (int i = 0; i < strlen(buf); i++)
			{
				//strchr����������һ���ַ����в��ҵ����ַ�
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