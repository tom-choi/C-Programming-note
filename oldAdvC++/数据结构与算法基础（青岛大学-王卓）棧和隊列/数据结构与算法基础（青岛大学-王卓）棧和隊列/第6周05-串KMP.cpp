#include <iostream>
using namespace std;

#define MAXLEN 255

//�ַ���
typedef struct
{
	char ch[MAXLEN + 1];
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

void get_next(SString T, int KMP_next[])
{
	int i = 1;
	KMP_next[1] = 0;
	int j = 0;
	while (i < T.length)
	{
		if (j == 0 || T.ch[i] == T.ch[j])
		{
			++i; ++j;
			KMP_next[i] = j;
		}
		else
		{
			j = KMP_next[j];
		}
	}
}
void get_nextval(SString T, int nextval[])
{
	int i = 1; nextval[1] = 0; int j = 0;
	while (i < T.length)
	{
		if (j == 0 || T.ch[i] == T.ch[j])
		{
			++i; ++j;
			if (T.ch[i] != T.ch[j])
				nextval[i] = j;
			else
				nextval[i] = nextval[j];
		}
		else
			j = nextval[j];
	}
}

int Index_KMP(SString S, SString T, int pos)
{
	int i = pos;
	int j = 1;
	while (i < S.length && j < T.length)
	{
		if (j == 0 || S.ch[i] == T.ch[j])
		{
			++i;
			++j;
		}
		else
		{
			j = KMP_next[j]; //i��׃��j����
		}
	}
	if (j > T.length)
		return i - T.length;
	else
		return 0;
}

int main()
{
	return 0;
}