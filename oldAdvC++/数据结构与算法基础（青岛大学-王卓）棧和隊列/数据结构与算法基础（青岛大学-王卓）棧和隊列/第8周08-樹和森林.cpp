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

//1.雙親表示法
//建立一個結構數組，存放樹的結點
//結點由: 數據域 + 雙親域 組成
//r  表示根节点的下标，n表示节点中元素的个数

typedef struct PTNode
{
	TElemType data;
	int parent;
}PTNode;

//樹結構
#define MAX 100
typedef struct
{
	PTNode nodes[MAX];
	int r, n;
};

//2.孩子兄弟表示法(二叉樹表示法)
//左手孩子，右手兄弟
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

//森林:

int main()
{
	fun(0);
}