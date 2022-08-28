#include <iostream>
using namespace std;

typedef int Data;
typedef int QuadTreeNode;


//示例：一个四叉树节点的简单结构
struct QuadtreeNode {
	Data data;
	QuadtreeNode* children[2][2];
	int divide;  //表示这个区域的划分长度
};

//示例：找到x,y位置对应的四叉树节点
QuadTreeNode* findNode(int x, int y, QuadtreeNode* root) {
    if (!root)return;

    QuadtreeNode* node = root;

    for (int i = 0; i < N && n; ++i) {
        //通过diliver来将x,y归纳为0或1的值，从而索引到对应的子节点。
        int divide = node->divide;
        int divideX = x / divide;
        int divideY = y / divide;

        QuadtreeNode* temp = node->children[divideX][divideY];
        if (!temp) { break; }
        node = temp;

        //如果归纳为1的值，还需要减去该划分长度，以便进一步划分
        x -= (divideX == 1 ? divide : 0);
        y -= (divideY == 1 ? divide : 0);
    }

    return node;
}

int main()
{
	return 0;
}