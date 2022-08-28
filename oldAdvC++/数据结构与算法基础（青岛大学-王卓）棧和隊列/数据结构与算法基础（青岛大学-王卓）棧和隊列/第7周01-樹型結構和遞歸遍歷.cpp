#include <iostream>
#include <string>
using namespace std;

//函數結果狀態代碼
#define TRUE 1
#define FALSE 0
#define OK 1
#define ERROR 0
#define INFEASIBLE -1
#define OVERFLOW -2

#define MAXSIZE 100

typedef char TElemType;

//二叉樹鏈式存儲
typedef struct BiNode
{
	TElemType data;
	struct BiNode* Lchild, * Rchild; //左右孩子指針  
	struct BiNode* parent; //雙親指針
}BiNode,* BiTree;

typedef BiTree SElemType;

typedef struct stack
{
	SElemType* base; //棧底
	SElemType* top; //棧頂
	int stacksize; //棧的容量
};

//棧構建函式
int initstack(stack& s)
{
	s.base = new SElemType[MAXSIZE];
	//C語言
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


//增加該節點的左右孩子節點
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

//遍歷二叉樹(先序遍歷) (遞歸)
int PreOrderTraverse(BiTree T)
{
	//空二叉樹
	if (T == NULL)
		return OK;
	else
	{
		//訪問根節點
		visit(T);
		//訪問左子樹
		PreOrderTraverse(T->Lchild);
		//訪問右子樹
		PreOrderTraverse(T->Rchild);
	}
}

//遍歷二叉樹(中序遍歷) (遞歸)
int InOrderTraverse(BiTree T)
{
	//空二叉樹
	if (T == NULL)
		return OK;
	else
	{
		//訪問左子樹
		InOrderTraverse(T->Lchild);
		//訪問根節點
		visit(T);
		//訪問右子樹
		InOrderTraverse(T->Rchild);
	}
}

//遍歷二叉樹(後序遍歷) (遞歸)
int PostOrderTraverse(BiTree T)
{
	//空二叉樹
	if (T == NULL)
		return OK;
	else
	{
		//訪問左子樹
		PostOrderTraverse(T->Lchild);
		//訪問右子樹
		PostOrderTraverse(T->Rchild);
		//訪問根節點
		visit(T);
	}
}

//遍歷二叉樹(中序遍歷) (棧)
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
			//q為棧頂元素，pop出棧頂元素之後以q變量紀錄
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
		//C語言
		//if (!(T = (BiNode*)malloc(sizeof(BiNode))))
			//return OVERFLOW;
		//C++語言
		if (!(T = new BiNode))
			return OVERFLOW;
		T->data = ch;
		CreateBiTree(T->Lchild); //構造左子樹
		CreateBiTree(T->Rchild); //構造右子樹
	}
	return OK;
}









int main()
{
	return 0;
}