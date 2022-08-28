#include <iostream>
#include <ctype.h>
#define Maxn 10000

using namespace std;

int main()
{
	char s[Maxn];
	char MASS[] = "CHON";
	double gmol[] = {12.01,1.008,16.00,14.01},sum = 0;
	int MASSandgmolt = 0;
	scanf("%s", s);
	for (int i = 0; i < strlen(s); i++)
	{
		//字符為數字時直接無視
		if (isdigit(s[i]))
		{
			continue;
		}
		for (int j = 0; j < sizeof(gmol) / 4; j++)
		{
			if (s[i] == MASS[j])
			{
				//記錄當前字符的代表元素與位置
				MASSandgmolt = j;
				break;
			}
		}
		//若下一位字符為數字時則做乘法
		if (isdigit(s[i+1]))
		{
			cout << "test" << endl;
			//1的ASCII碼為49
			sum += gmol[MASSandgmolt] * (s[i+1]-48);
		}
		else
		{
			sum += gmol[MASSandgmolt];
		}
	}
	printf("%s的分子量为%.3lf\ng/mol",s, sum);
}