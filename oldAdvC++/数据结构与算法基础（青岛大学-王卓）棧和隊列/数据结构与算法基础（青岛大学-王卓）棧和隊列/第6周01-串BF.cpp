#include <iostream>
using namespace std;

#define MAXLEN 255

//�ַ���
typedef struct
{
	char ch[MAXLEN+1];
	int length;
}SString;

#define CHUNKSIZE 80
//�ʽ�Y��
typedef struct
{
	char ch[CHUNKSIZE];
	struct Chunk* next;
}Chunk;
typedef struct
{
	Chunk* head;//�^ָ�
	Chunk* tail;//βָ�
	int curlen;//�L��
}LString;

int Index_BF(SString& S, SString T)
{
	int i = 1, j = 1;
	while (i <= S.length && j <= T.length)
	{
		if (S.ch[i] == T.ch[j])
		{
			++i;
			++j;
		}
		else
		{
			i = i - j + 2; //�������Ӵ�ָᘻ��������_ʼ
			j = 1;
		}
	}
	if (j >= T.length)
		return i - T.length;//����ƥ��ĵ�һ���ַ�����λ��
	else
		return 0;
}


int main()
{
	return 0;
}