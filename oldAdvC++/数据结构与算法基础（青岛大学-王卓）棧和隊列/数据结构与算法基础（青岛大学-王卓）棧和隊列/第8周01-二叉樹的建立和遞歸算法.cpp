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

//������ʽ�惦
typedef struct BiNode
{
	TElemType data;
	struct BiNode* Lchild, * Rchild; //���Һ���ָ�  
	struct BiNode* parent; //�p�Hָ�
}BiNode, * BiTree;

typedef BiTree SElemType;

typedef struct stack
{
	SElemType* base; //����
	SElemType* top; //���
	int stacksize; //��������
};

//�o�����: ABC##DE#G##F###
//��ǰ���v���������
int CreateBiTree(BiTree& T)
{
	char ch;
	scanf("%c", &ch); //cin >> ch; ݔ���ַ�
	if (ch == '#')
		T = NULL;
	else
	{
		if (!(T = (BiNode*)malloc(sizeof(BiNode))))
			return OVERFLOW;
		T->data = ch;
		CreateBiTree(T->Lchild);
		CreateBiTree(T->Rchild);
	}
	return OK;
}

//�}�u�����
int copy_T(BiTree T, BiTree& NewT)
{
	//����ǿ՘䣬�f�w�Y��
	if (T == NULL)
	{
		NewT = NULL;
		return 0;
	}
	//��t����Ո�µĽY�c���g���}�u���Y�c
	else
	{
		NewT = new BiNode;
		NewT->data = T->data;

		//�f�w�}�u���Ә�
		copy_T(T->Lchild, NewT->Lchild);
		//�f�w�}�u���Ә�
		copy_T(T->Rchild, NewT->Rchild);
	}
}

//Ӌ����������
//�����՘䣬�t��Ȟ�0
//��tӛ���Ә���Ȟ�m��ӛ���Ә���Ȟ�n
int Depth(BiTree T)
{
	if (T == NULL)
		return 0;
	else
	{
		int m = Depth(T->Lchild);
		int n = Depth(T->Rchild);
		if (m > n)
			return (m + 1);
		else
			return (n + 1);
	}
}

//Ӌ������ĽY�c��
//�Y�c�� = ���Ә�Y�c�� + ���Ә�Y�c�� + 1(�����c)
int NodeCount(BiTree T)
{
	if (T == NULL)
		return 0;
	else
	{
		return NodeCount(T->Lchild) + NodeCount(T->Rchild) + 1;
	}
}

//Ӌ��������~�ӽY�c��
//�Y�c�� = ���Ә�Y�c�� + ���Ә�Y�c��
int NodeCount(BiTree T)
{
	if (T == NULL)
		return 0; //����ǿ՘䷵��0
	if (T->Lchild == NULL && T->Rchild == NULL)
		return 1; //������~�ӽY�c����1
	else
	{
		return NodeCount(T->Lchild) + NodeCount(T->Rchild);
	}
}
 

