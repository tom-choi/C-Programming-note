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

//鄰接矩陣
//用兩個數組分別儲存頂點表和鄰接矩陣
#define MaxInt 32767
#define MVNum 100 //最大頂點數
typedef char VertexType;
typedef int ArcType;   //設邊的權值類型為整型
typedef int OtherInfo;   //和邊相關的信息的類型

//弧(邊)的結點結構
struct ArcNode {
	int adjvex;   //該邊所指向的頂點的位置
	ArcNode* nextarc;  //指向下一條邊的指針
	OtherInfo info;   //和邊相關的信息(如：權)
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

//鄰接表(鏈式)
//按編號順序存儲在一維數組中
typedef struct
{
	VertexType data;
	ArcNode *firstarc;

}VNode, AdjList[MVNum];

//圖的結構定義
typedef struct
{
	AdjList vertices; //vertices--vertiex的複數
	int vexnum, arcnum; //圖的當前頂點數和弧數
}ALGraph;

void ALGraph_move()
{
	ALGraph G;
	G.vexnum = 5;//5個頂點
	G.arcnum = 5;//5條邊
	G.vertices[1].data = 'b';//第二個頂點的字母為b
	ArcNode*p = G.vertices[1].firstarc; //指針p指向b的第一條邊結點
	p->adjvex = 4;//p指針結點到下標為4的結點的邊
}

//返回指定頂點在頂點數組的下標
int LocateVex(ALGraph G, VertexType target) {
	for (int i = 0; i < G.vexnum; i++) {
		if (G.vertices[i].data == target)
			return i;
	}
	return -1;
}

//采用鄰接表表示法創建無向網
int CreateUDG(ALGraph& G)
{
	cin >> G.vexnum >> G.arcnum; //輸入總頂點數，總邊數
	for (int i = 0; i < G.vexnum; ++i) //輸入每一點，構造表頭表
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

		ArcNode* p1 = new ArcNode; //生成一個結點
		p1->adjvex = j; //鄰接點序號為j
		p1->nextarc = G.vertices[i].firstarc;
		G.vertices[i].firstarc = p1; //將新結點*p1插入頂點vi的邊表頭部
		
		ArcNode* p2 = new ArcNode; //生成一個結點
		p2->adjvex = i; //鄰接點序號為i
		p2->nextarc = G.vertices[j].firstarc;
		G.vertices[j].firstarc = p2; //將新結點*p1插入頂點vj的邊表頭部
	}
	return OK;
}