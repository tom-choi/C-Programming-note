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

typedef char TElemType;

//������ʽ�惦
typedef struct BiNode
{
	TElemType data;
	struct BiNode* Lchild, * Rchild; //���Һ���ָ�  
	struct BiNode* parent; //�p�Hָ�
}BiNode,* BiTree;

typedef BiTree SElemType;

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

int emptyStack(stack& S)
{
	if (S.top == S.base)
		return TRUE;
	return FALSE;
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
	e = *s.top--;
	return OK;
}


//����ԓ���c�����Һ��ӹ��c
int addBi(BiNode* T, TElemType data,char Rotate)
{
	BiNode* S = new BiNode;
	S->data = data;
	switch (Rotate)
	{
	case 'R':
		if (T->Rchild)
			return ERROR;
		T->Rchild = S;
	case 'L':
		if (T->Lchild)
			return ERROR;
		T->Lchild = S;
	}
	S->parent = T;
	return OK;
}

int visit(BiTree T)
{
	cout << T->data << endl;
	return T->data;
}

//��v�����(�����v) (�f�w)
int PreOrderTraverse(BiTree T)
{
	//�ն����
	if (T == NULL)
		return OK;
	else
	{
		//�L�������c
		visit(T);
		//�L�����Ә�
		PreOrderTraverse(T->Lchild);
		//�L�����Ә�
		PreOrderTraverse(T->Rchild);
	}
}

//��v�����(�����v) (�f�w)
int InOrderTraverse(BiTree T)
{
	//�ն����
	if (T == NULL)
		return OK;
	else
	{
		//�L�����Ә�
		InOrderTraverse(T->Lchild);
		//�L�������c
		visit(T);
		//�L�����Ә�
		InOrderTraverse(T->Rchild);
	}
}

//��v�����(�����v) (�f�w)
int PostOrderTraverse(BiTree T)
{
	//�ն����
	if (T == NULL)
		return OK;
	else
	{
		//�L�����Ә�
		PostOrderTraverse(T->Lchild);
		//�L�����Ә�
		PostOrderTraverse(T->Rchild);
		//�L�������c
		visit(T);
	}
}

//��v�����(�����v) (��)
int InOrderTraverse_stack(BiTree T)
{
	BiTree p,q; stack S;
	initstack(S);
	p = T;
	while (p || !emptyStack(S))
	{
		if (p)
		{
			Push(S, p);
			p = p->Lchild;
		}
		else
		{
			//q�闣�Ԫ�أ�pop�����Ԫ��֮����q׃���o�
			Pop(S, q);
			printf("%d ", q->data);
			p = q->Rchild;
		}
	}
	return OK;
}

int CreateBiTree(BiTree& T)
{
	char ch;
	scanf("%c", &ch);
	if (ch == '#')
		T = NULL;
	else
	{
		//C�Z��
		//if (!(T = (BiNode*)malloc(sizeof(BiNode))))
			//return OVERFLOW;
		//C++�Z��
		if (!(T = new BiNode))
			return OVERFLOW;
		T->data = ch;
		CreateBiTree(T->Lchild); //�������Ә�
		CreateBiTree(T->Rchild); //�������Ә�
	}
	return OK;
}









int main()
{
	return 0;
}