#include <iostream>
using namespace std;
#define MAX 1000

struct node
{
	int data;
	node* next, * prior;
};

//�ҵ���i̖��λ��
node* GetElem_L(node L, int i)
{
	node* p, * s;
	p = L.next;
	int j = 1;
	while (p && j < i)
	{
		p = p->next;
		++j;
	}
	if (!p || j > i)
		return;
	return p;
}

//�惦�ܶ�=�Y�c������ռ�õĿ��g/�Y�c��ռ�õĿ��g
//朱�惦�ܶȴ�����惦�ܶ�С

void delete_L(node &L,int i)
{
	node* p;
	if (!(p = GetElem_L(L, i)))
		return;
	else
	{
		p->prior->next = p->next;
		p->next->prior = p->prior;
		free(p);
		return;
	}
}

int main()
{
	return;
}