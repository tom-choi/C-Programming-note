#include <iostream>
using namespace std;

typedef int Data;
typedef int QuadTreeNode;


//ʾ����һ���Ĳ����ڵ�ļ򵥽ṹ
struct QuadtreeNode {
	Data data;
	QuadtreeNode* children[2][2];
	int divide;  //��ʾ�������Ļ��ֳ���
};

//ʾ�����ҵ�x,yλ�ö�Ӧ���Ĳ����ڵ�
QuadTreeNode* findNode(int x, int y, QuadtreeNode* root) {
    if (!root)return;

    QuadtreeNode* node = root;

    for (int i = 0; i < N && n; ++i) {
        //ͨ��diliver����x,y����Ϊ0��1��ֵ���Ӷ���������Ӧ���ӽڵ㡣
        int divide = node->divide;
        int divideX = x / divide;
        int divideY = y / divide;

        QuadtreeNode* temp = node->children[divideX][divideY];
        if (!temp) { break; }
        node = temp;

        //�������Ϊ1��ֵ������Ҫ��ȥ�û��ֳ��ȣ��Ա��һ������
        x -= (divideX == 1 ? divide : 0);
        y -= (divideY == 1 ? divide : 0);
    }

    return node;
}

int main()
{
	return 0;
}