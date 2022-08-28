#include <iostream>
using namespace std;

typedef int TElemtype;

//使用順序存儲
//一維結構數組
typedef struct HTNode {
	int weight;
	int lchild, rchild, parent;
}*HuffmanTree;

//以s1,s2返回兩個weight最小的節點的索引
void select(HuffmanTree H, int n, int& s1, int& s2)
{
	s1 = 0;
	s2 = 0;
	//先0
	for (int i = 1; i < n; i++)
	{
		if (H[i].parent == 0)
		{
			s1 = i;
			break;
		}
	}
	for (int i = 1; i < n; i++)
	{
		if (H[i].parent != 0)
		{
			continue;
		}
		if (H[i].weight < H[s1].weight)
			s1 = i;
	}
}
//哈夫曼樹構造算法
void CreateHuffmanTree(HuffmanTree& H, int n) 
{
	//初始化
	if (n <= 1)return;
	int m = 2 * n - 1;  //數組共有2n - 1個元素
	H = new HTNode[m + 1];  //0號下標不用，H[m]表示根結點
	//將2n-1個元素lch,rch,parent置為0
	for (int i = 1; i <= m; i++) 
	{
		H[i].lchild = 0;
		H[i].rchild = 0;
		H[i].parent = 0;
	}
	//輸入前n個元素的weight(權重)
	for (int i = 1; i <= n; i++) 
	{
		cin >> H[i].weight;
	}

	//合拼產生n-1個結點
	///////////////////// 具體實現 /////////////////////
	for (int i = n + 1; i <= m; i++) {
		int s1, s2;
		select(H, i, s1, s2);
		//創建新節點表
		H[i].weight = H[s1].weight + H[s2].weight;
		//將s1,s2變成左孩子和右孩子
		H[i].lchild = s1;
		H[i].rchild = s2;
		//表示刪除s1,s2
		H[s1].parent = i;
		H[s2].parent = i;
	}
}

int main()
{

	return 0;
}