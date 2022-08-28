#include <iostream>
#include <string>
using namespace std;

//�����Y����B���a
#define TRUE 1
#define FALSE 0
#define OK 1
#define ERROR 0
#define INFEASIBLE -1
#define OVERFLOW -2

#define MAXSIZE 100

typedef char SElemType;

//���Y��
typedef struct stack
{
	SElemType* base; //����
	SElemType* top; //���
	int stacksize; //��������
};

//��������ʽ
int initstack(stack& s)
{
	s.base = new SElemType[MAXSIZE];
	//C�Z��
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
	e = *(--s.top); //�Ȝp
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