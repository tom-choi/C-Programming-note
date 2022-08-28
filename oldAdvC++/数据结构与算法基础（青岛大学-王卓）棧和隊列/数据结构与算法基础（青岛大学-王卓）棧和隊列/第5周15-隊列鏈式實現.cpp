#include <iostream>
using namespace std;

//函數結果狀態代碼
#define TRUE 1
#define FALSE 0
#define OK 1
#define ERROR 0
#define INFEASIBLE -1
#define OVERFLOW -2

#define MAXSIZE 100

typedef int QElemType;

typedef struct Qnode
{
	QElemType data;
	Qnode* next;
}Qnode,* QnodePtr;

typedef struct
{
	QnodePtr front;
	QnodePtr rear;
}*LinkQueue;

int InitQueue(LinkQueue& Q)
{
	Q->front = new Qnode;
	Q->rear = Q->front;
	Q->front->next = NULL;
	return OK;
}

//銷毀鏈隊
int destoryQueue(LinkQueue& Q)
{
	while (Q->front)
	{
		QnodePtr p = Q->front->next;
		free(Q->front);
		Q->front = p;
	}
	return OK;
}

//插入元素
int PushQueue(LinkQueue& Q, QElemType e)
{
	QnodePtr S = new Qnode;
	if (!S)
		return OVERFLOW;
	S->data = e;S->next = NULL;
	Q->rear->next = S;
	Q->rear = S;
	delete(S);
	return OK;
}

//出隊
int PopQueue(LinkQueue& Q, QElemType &e)
{
	if (Q->front == Q->rear)
		return ERROR;
	QnodePtr p = Q->front->next;
	e = p->data;
	Q->front->next = p->next;
	//如果是最後一個元素，則需要順便修改Q->rear尾指針
	if (Q->rear == p)
		Q->rear = Q->front;

	delete(p);
	return OK;
}

int main()
{
	return 0;
}