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
		//�ַ��锵�֕rֱ�ӟoҕ
		if (isdigit(s[i]))
		{
			continue;
		}
		for (int j = 0; j < sizeof(gmol) / 4; j++)
		{
			if (s[i] == MASS[j])
			{
				//ӛ䛮�ǰ�ַ��Ĵ���Ԫ���cλ��
				MASSandgmolt = j;
				break;
			}
		}
		//����һλ�ַ��锵�֕r�t���˷�
		if (isdigit(s[i+1]))
		{
			cout << "test" << endl;
			//1��ASCII�a��49
			sum += gmol[MASSandgmolt] * (s[i+1]-48);
		}
		else
		{
			sum += gmol[MASSandgmolt];
		}
	}
	printf("%s�ķ�����Ϊ%.3lf\ng/mol",s, sum);
}