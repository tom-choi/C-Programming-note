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

typedef char TElemType;

//1.�p�H��ʾ��
//����һ���Y�����M����Ř�ĽY�c
//�Y�c��: ������ + �p�H�� �M��
//r  ��ʾ���ڵ���±꣬n��ʾ�ڵ���Ԫ�صĸ���

typedef struct PTNode
{
	TElemType data;
	int parent;
}PTNode;

//��Y��
#define MAX 100
typedef struct
{
	PTNode nodes[MAX];
	int r, n;
};

//2.�����ֵܱ�ʾ��(������ʾ��)
//���ֺ��ӣ������ֵ�
typedef struct CSNode
{
	TElemType data;
	struct CSNode* firstchild, * nextsibling;
}CSNode,*CSTree;


void fun(int N)
{
	cout << N;
	if (N < 5)
	{
		fun(N + 2);
		cout << N;
	}
}

//ɭ��:

int main()
{
	fun(0);
}