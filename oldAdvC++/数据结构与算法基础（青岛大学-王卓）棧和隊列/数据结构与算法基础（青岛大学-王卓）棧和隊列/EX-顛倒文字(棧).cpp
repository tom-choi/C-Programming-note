#include <iostream>
#include <string>
using namespace std;

//函數結果狀態代碼
#define TRUE 1
#define FALSE 0
#define OK 1
#define ERROR 0
#define INFEASIBLE -1
#define OVERFLOW -2

#define MAXSIZE 100

typedef char SElemType;

//棧結構
typedef struct stack
{
	SElemType* base; //棧底
	SElemType* top; //棧頂
	int stacksize; //棧的容量
};

//棧構建函式
int initstack(stack& s)
{
	s.base = new SElemType[MAXSIZE];
	//C語言
	//s.base = (int*)malloc(MAXSIZE*sizeof(int));
	if (!s.base)
		exit(OVERFLOW);
	s.top = s.base;
	s.stacksize = MAXSIZE;
	return OK;
}

int Push(stack& s, SElemType& e)
{
	if (s.top - s.base == s.stacksize)
		return ERROR;
	*s.top++ = e;
	return OK;
}

int Pop(stack& s, SElemType& e)
{
	if (s.top == s.base)
		return ERROR;
	e = *(--s.top); //先減
	return OK;
}

int main()
{
	stack s;
	initstack(s);
	char str[] = "abcdefg";
	for (int i = 0; i < sizeof(str) / sizeof(char); i++)
	{
		Push(s, str[i]);
	}
	char res;
	for (int i = 0; i < sizeof(str) / sizeof(char); i++)
	{
		Pop(s, res);
		printf("%c", res);
	}
	return 0;
}