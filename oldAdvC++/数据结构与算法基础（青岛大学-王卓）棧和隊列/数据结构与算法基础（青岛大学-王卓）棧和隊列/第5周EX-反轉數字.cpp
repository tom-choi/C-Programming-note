#include <iostream>
#include <string>
using namespace std;

//º¯”µ½Y¹û î‘B´ú´a
#define TRUE 1
#define FALSE 0
#define OK 1
#define ERROR 0
#define INFEASIBLE -1
#define OVERFLOW -2

#define MAXSIZE 100

typedef int ElemType;

struct SqStack
{
	ElemType* top;
	ElemType* base;
	int Stacksize;
};

int initStack(SqStack& S)
{
	S.base = new ElemType[MAXSIZE];
	if (!S.base)
		return ERROR;
	S.top = S.base;
	S.Stacksize = MAXSIZE;
	return OK;
}

int PushStack(SqStack& S,ElemType& e)
{
	if (S.top - S.base == S.Stacksize)
		return ERROR;
	*S.top++ = e;
	return OK;
}

int PopStack(SqStack& S, ElemType& e)
{
	if (S.top == S.base)
		return ERROR;
	e = *(--S.top);
	return OK;
}

int DeleteStack(SqStack& S)
{
	if (S.base)
	{
		delete[] S.base;
		S.Stacksize = 0;
		S.base = NULL;
		S.top = NULL;
	}
	return OK;
}

int main()
{
	ElemType x; SqStack S;
	initStack(S);
	while (cin >> x)
	{
		if (x == 0)
			break;
		PushStack(S, x);
	}
	while (PopStack(S, x))
	{
		cout << x << ' ';
	}
	DeleteStack(S);
	return 0;
}