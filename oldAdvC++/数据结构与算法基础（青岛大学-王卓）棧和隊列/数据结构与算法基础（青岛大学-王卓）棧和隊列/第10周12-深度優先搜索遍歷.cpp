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

//���Ӿ��
//�Ãɂ����M�քe������c������Ӿ��
#define MaxInt 32767
#define MVNum 100 //�����c��
typedef char VertexType;
typedef int ArcType;   //�O߅�ę�ֵ��͞�����
typedef int OtherInfo;   //��߅���P����Ϣ�����

//��(߅)�ĽY�c�Y��
struct ArcNode {
	int adjvex;   //ԓ߅��ָ�����c��λ��
	ArcNode* nextarc;  //ָ����һ�l߅��ָ�
	OtherInfo info;   //��߅���P����Ϣ(�磺��)
};

typedef struct
{
	VertexType vexs[MVNum];
	ArcType arcs[MVNum][MVNum];
	int vexnum, arcnum;
}AMGraph;

int main()
{
	return 0;
}

//���ӱ�(�ʽ)
//����̖���惦��һ�S���M��
typedef struct
{
	VertexType data;
	ArcNode* firstarc;

}VNode, AdjList[MVNum];

//�D�ĽY�����x
typedef struct
{
	AdjList vertices; //vertices--vertiex���}��
	int vexnum, arcnum; //�D�Į�ǰ��c���ͻ���
}ALGraph;

void ALGraph_move()
{
	ALGraph G;
	G.vexnum = 5;//5����c
	G.arcnum = 5;//5�l߅
	G.vertices[1].data = 'b';//�ڶ�����c����ĸ��b
	ArcNode* p = G.vertices[1].firstarc; //ָ�pָ��b�ĵ�һ�l߅�Y�c
	p->adjvex = 4;//pָᘽY�c���˞�4�ĽY�c��߅
}

//����ָ����c����c���M����
int LocateVex(ALGraph G, VertexType target) {
	for (int i = 0; i < G.vexnum; i++) {
		if (G.vertices[i].data == target)
			return i;
	}
	return -1;
}

//�������ӱ��ʾ�������o��W
int CreateUDG(ALGraph& G)
{
	cin >> G.vexnum >> G.arcnum; //ݔ�뿂��c������߅��
	for (int i = 0; i < G.vexnum; ++i) //ݔ��ÿһ�c��������^��
	{
		cin >> G.vertices[i].data;
		G.vertices[i].firstarc = NULL;
	}
	for (int k = 0; k < G.arcnum; ++k)
	{
		VertexType V1, V2;
		cin >> V1 >> V2;
		int i = LocateVex(G, V1);
		int j = LocateVex(G, V2);

		ArcNode* p1 = new ArcNode; //����һ���Y�c
		p1->adjvex = j; //�����c��̖��j
		p1->nextarc = G.vertices[i].firstarc;
		G.vertices[i].firstarc = p1; //���½Y�c*p1������cvi��߅���^��

		ArcNode* p2 = new ArcNode; //����һ���Y�c
		p2->adjvex = i; //�����c��̖��i
		p2->nextarc = G.vertices[j].firstarc;
		G.vertices[j].firstarc = p2; //���½Y�c*p1������cvj��߅���^��
	}
	return OK;
}

#define MVNum 100
bool visited[MVNum] = { false };
void DFS(AMGraph G, int v) // �DG�����Ӿ�����
{
	cout << v; visited[v] = true;
	for (int w = 0; w < G.vexnum; w++) //���Ιz�����Ӿ��v���ڵ���
	{
		if ((G.arcs[v][w] != 0) && (!visited[w]))
			DFS(G, w);
		//w��v�������c�����wζ�L�����t�f�wʹ��DFS
	}
}

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

//BFS�V�ȃ�������
void BFS(ALGraph G, int v)
{
	for (int i = 0; i < G.vexnum; i++)
	{
		cout << v; visited[v] = true;
		Queue Q;
		initQueue(Q);
		PushQueue(Q, v);
		while (Q.rear != Q.front) //���в����
		{
			int u;
			PopQueue(Q, u);
			for (ArcNode* w = G.vertices[i].firstarc; w = NULL; w = w->nextarc)
			{
				if (!visited[w->adjvex])
				{
					cout << G.vertices[w->adjvex].data << ' ';
					visited[w->adjvex] = true;
					PushQueue(Q, w->adjvex);
				}
			}
		}
	}
}