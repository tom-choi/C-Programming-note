#include <iostream>
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
	bool Ltag; // ����I�� 0: ������ 1: ǰ�
	bool Rtag; // �Ҙ��I�� 0: ���Һ��� 1: ���
}BiNode, * BiTree;

//��Ό����ض����е��ж�����ǰ�����
//��֪�� n ���Y�c�Ķ����朱��У��� 2n ��ָ���
//��� n ���Y�c�У��� n-1 �����ӣ����� 2n ��ָ���
//�� n-1 ��ָ���ָ�����Һ��ӣ��� n+1 ��ָ�����


//���ÿ�ָᘿ�����ָ��ǰ򌣬���Һ���ָ�����
//�@�N��׃ָ���ָᘽУ�����

// Threaded binary tree ���������

// �Ѷ���䰴ĳ��v����ʹ��׃�龀�������У�Threading ������

//�����v: CBEGDFA

//HDIBEAFCG



int main()
{
	return 0;
}