#include <iostream>
using namespace std;

//�����Y����B���a
#define TRUE 1
#define FALSE 0
#define OK 1
#define ERROR 0
#define INFEASIBLE -1
#define OVERFLOW -2

#define MAXSIZE 100

typedef int QElemType;
//���M�ȳ�
typedef struct Queue
{
	QElemType* base; //�ӑB����ȴ�
	int front; //�^ָ�
	int rear; //βָ�
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

//꠿�: front == rear
//ꠝM: front == rear

//��Q����: ����һ��Ԫ�ؿ��g

//꠿�: front == rear
//ꠝM: front == (rear + 1 ) % MAXSIZE

int PushQueue(Queue& Q, QElemType x)
{
	if (Q.rear == MAXSIZE && Q.front == 0)
		return ERROR;
	//����Ԫ��
	Q.base[Q.rear] = x;
	//base[0]����base[MAXSIZE-1]֮�ᣬ��rear + 1 == M���t��rear = 0
	//����: ����mod�\�� Q.rear = (Q.rear + 1) % MAXSIZE
	//ԭ����: Q.rear = Q.rear + 1
	Q.rear = (Q.rear + 1) % MAXSIZE;
}

int PopQueue(Queue& Q, QElemType x)
{
	//꠿�: front == rear
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