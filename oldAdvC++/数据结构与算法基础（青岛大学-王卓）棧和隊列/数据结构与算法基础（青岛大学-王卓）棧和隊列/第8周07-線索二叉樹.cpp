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
	bool Ltag; // 左標誌域 0: 為左孩子 1: 前驅
	bool Rtag; // 右標誌域 0: 為右孩子 1: 後驅
}BiNode, * BiTree;

//如何尋找特定序列的中二叉樹的前驅的後驅
//已知有 n 個結點的二叉樹鏈表中，有 2n 個指針域
//因為 n 個結點中，有 n-1 個孩子，即有 2n 個指針域
//有 n-1 個指針域指向左右孩子，有 n+1 個指針域為空


//利用空指針空左孩子指向前驅，空右孩子指向後驅
//這種改變指向的指針叫：線索

// Threaded binary tree 線索二叉樹

// 把二叉樹按某遍歷次序使其變為線索二叉樹叫：Threading 線索化

//中序遍歷: CBEGDFA

//HDIBEAFCG



int main()
{
	return 0;
}