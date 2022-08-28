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

typedef char TElemType;

//二叉樹鏈式存儲
typedef struct BiNode
{
	TElemType data;
	struct BiNode* Lchild, * Rchild; //左右孩子指針  
	struct BiNode* parent; //雙親指針
}BiNode, * BiTree;

typedef BiTree SElemType;

typedef struct stack
{
	SElemType* base; //棧底
	SElemType* top; //棧頂
	int stacksize; //棧的容量
};

//給予順序: ABC##DE#G##F###
//用前序遍歷創建二叉樹
int CreateBiTree(BiTree& T)
{
	char ch;
	scanf("%c", &ch); //cin >> ch; 輸入字符
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

//複製二叉樹
int copy_T(BiTree T, BiTree& NewT)
{
	//如果是空樹，遞歸結束
	if (T == NULL)
	{
		NewT = NULL;
		return 0;
	}
	//否則，申請新的結點空間，複製根結點
	else
	{
		NewT = new BiNode;
		NewT->data = T->data;

		//遞歸複製左子樹
		copy_T(T->Lchild, NewT->Lchild);
		//遞歸複製右子樹
		copy_T(T->Rchild, NewT->Rchild);
	}
}

//計算二叉樹的深度
//如果為空樹，則深度為0
//否則記左子樹深度為m，記右子樹深度為n
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

//計算二叉樹的結點數
//結點數 = 左子樹結點數 + 右子樹結點數 + 1(根節點)
int NodeCount(BiTree T)
{
	if (T == NULL)
		return 0;
	else
	{
		return NodeCount(T->Lchild) + NodeCount(T->Rchild) + 1;
	}
}

//計算二叉樹的葉子結點數
//結點數 = 左子樹結點數 + 右子樹結點數
int NodeCount(BiTree T)
{
	if (T == NULL)
		return 0; //如果是空樹返回0
	if (T->Lchild == NULL && T->Rchild == NULL)
		return 1; //如果是葉子結點返回1
	else
	{
		return NodeCount(T->Lchild) + NodeCount(T->Rchild);
	}
}
 

