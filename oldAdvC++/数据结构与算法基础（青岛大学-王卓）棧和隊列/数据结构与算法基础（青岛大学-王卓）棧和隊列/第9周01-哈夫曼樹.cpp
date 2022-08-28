#include <iostream>
using namespace std;

typedef int TElemtype;

//ʹ�����惦
//һ�S�Y�����M
typedef struct HTNode {
	int weight;
	int lchild, rchild, parent;
}*HuffmanTree;

//��s1,s2���؃ɂ�weight��С�Ĺ��c������
void select(HuffmanTree H, int n, int& s1, int& s2)
{
	s1 = 0;
	s2 = 0;
	//��0
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
//�������䘋���㷨
void CreateHuffmanTree(HuffmanTree& H, int n) 
{
	//��ʼ��
	if (n <= 1)return;
	int m = 2 * n - 1;  //���M����2n - 1��Ԫ��
	H = new HTNode[m + 1];  //0̖�˲��ã�H[m]��ʾ���Y�c
	//��2n-1��Ԫ��lch,rch,parent�Þ�0
	for (int i = 1; i <= m; i++) 
	{
		H[i].lchild = 0;
		H[i].rchild = 0;
		H[i].parent = 0;
	}
	//ݔ��ǰn��Ԫ�ص�weight(����)
	for (int i = 1; i <= n; i++) 
	{
		cin >> H[i].weight;
	}

	//��ƴ�a��n-1���Y�c
	///////////////////// ���w���F /////////////////////
	for (int i = n + 1; i <= m; i++) {
		int s1, s2;
		select(H, i, s1, s2);
		//�����¹��c��
		H[i].weight = H[s1].weight + H[s2].weight;
		//��s1,s2׃�����Ӻ��Һ���
		H[i].lchild = s1;
		H[i].rchild = s2;
		//��ʾ�h��s1,s2
		H[s1].parent = i;
		H[s2].parent = i;
	}
}

int main()
{

	return 0;
}