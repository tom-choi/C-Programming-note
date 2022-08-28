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

typedef struct StackNode
{
	int data;
	StackNode* next;
}*LinkStack;

int InitStack(LinkStack& S) 
{
	S = NULL;
	return OK;
}

int emptyStack(LinkStack& S)
{
	if (S == NULL)
		return TRUE;
	return FALSE;
}

//�뗣
int PushStack(LinkStack& S, int &e)
{
	StackNode* p = new StackNode;
	p->data = e;
	p->next = S;
	S = p;
	return OK;
}

//����
int PopStack(LinkStack& S, int &e)
{
	if (!S)
		return ERROR;
	StackNode* p = S;
	e = S->data;
	S = S->next;
	delete p;
	return OK;
}

int GetTop(LinkStack& S)
{
	if (!S)
		return ERROR;
	return S->data;
}

int main()
{
	return 0;
}