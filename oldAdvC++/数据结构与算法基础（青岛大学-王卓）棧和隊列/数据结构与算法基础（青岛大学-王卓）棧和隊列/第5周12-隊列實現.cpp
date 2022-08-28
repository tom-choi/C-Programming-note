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
//先進先出
typedef struct Queue
{
	QElemType* base; //動態分配內存
	int front; //頭指針
	int rear; //尾指針
};

int initQueue(Queue& Q)
{
	Q.base = new QElemType[MAXSIZE];
	Q.front = 0;
	Q.rear = Q.front;
	return OK;
}

int destoryQueue(Queue& Q)
{
	if (Q.base)
	{
		delete[]Q.base;
		Q.front = 0;
		Q.rear = Q.front;
	}
	return OK;
}

//隊空: front == rear
//隊滿: front == rear

//解決方法: 少用一個元素空間

//隊空: front == rear
//隊滿: front == (rear + 1 ) % MAXSIZE

int PushQueue(Queue& Q, QElemType x)
{
	if (Q.rear == MAXSIZE && Q.front == 0)
		return ERROR;
	//插入元素
	Q.base[Q.rear] = x;
	//base[0]接在base[MAXSIZE-1]之後，若rear + 1 == M，則令rear = 0
	//方法: 利用mod運算 Q.rear = (Q.rear + 1) % MAXSIZE
	//原方法: Q.rear = Q.rear + 1
	Q.rear = (Q.rear + 1) % MAXSIZE;
}

int PopQueue(Queue& Q, QElemType x)
{
	//隊空: front == rear
	if (Q.rear == Q.front)
		return ERROR;
	x = Q.base[Q.front];
	Q.front = (Q.rear + 1) % MAXSIZE;
}

int QueueLength(Queue& Q)
{
	return (Q.rear - Q.front + MAXSIZE) % MAXSIZE;
}

int GetTop(Queue& Q)
{
	if (Q.front != Q.rear)
		return Q.base[Q.front];
}

int main()
{
	return 0;
}