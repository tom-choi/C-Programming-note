#include <iostream>
#include <string>
using namespace std;

char* get_same_string(char* p1, char* p2)
{
	char* result = new char[10]{}; int idx = 0; //��ʼ��char //ʾ����new
	for (int i = 0; i < strlen(p1); i++)
	{
		for (int j = 0; j < strlen(p2); j++)
		{
			if (p1[i] == p2[j])
			{
				result[idx++] = p1[i];
			}
			else
				continue;
		}
	}
	return result;
	delete[]result;//ʾ����delete
}

int main()
{
	char p1[100] = "abcdef";
	char p2[100] = "cdefgh";
	cout <<  "�������е���ͬ�ַ���: " << get_same_string(p1, p2) << endl;
	return 0;
}



//int a1 = 2, a2 = 5;
	//int& b = a1; //��һ�����óɹ�
	//int& b = a2; //�����M�еڶ������ã��e�`

	//int a[5] = { 0 };
	//int& b[5] = a; //�����M�ж�������
	//int& c = a[0]; //�������Ô����еĆ΂���ֵ

	//���õ�����:
	//int a = 3;
	//int& b = a;
	//int& c = b;
	//int& p = c;

/*���Q�����Ì���
void swap(int& a, int& b)
{
	int t = a;
	a = b;
	b = t;
}*/

/*for (int idx = 0; idx < sizeof(result); idx++)
{
	cout << result[idx] << endl;
}*/