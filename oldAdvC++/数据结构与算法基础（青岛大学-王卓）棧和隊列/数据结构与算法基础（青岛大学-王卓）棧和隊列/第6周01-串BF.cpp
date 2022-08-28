#include <iostream>
using namespace std;

#define MAXLEN 255

//字符串
typedef struct
{
	char ch[MAXLEN+1];
	int length;
}SString;

#define CHUNKSIZE 80
//鏈式結構
typedef struct
{
	char ch[CHUNKSIZE];
	struct Chunk* next;
}Chunk;
typedef struct
{
	Chunk* head;//頭指針
	Chunk* tail;//尾指針
	int curlen;//長度
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
			i = i - j + 2; //主串，子串指針回溯重新開始
			j = 1;
		}
	}
	if (j >= T.length)
		return i - T.length;//返回匹配的第一個字符的下標位置
	else
		return 0;
}


int main()
{
	return 0;
}