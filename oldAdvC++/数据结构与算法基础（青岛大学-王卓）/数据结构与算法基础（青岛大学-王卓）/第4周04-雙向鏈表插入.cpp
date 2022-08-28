#include <iostream>
using namespace std;

struct node
{
	int data;
	node* next, * prior;
};

//找到第i號的位置
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

void Listinsert(node L1, int i, int data)
{
	node* p;
	if (!(p = GetElem_L(L1, i)))
		return;
	else
	{
		node* s = new node;
		s->data = data;
		s->prior = p->prior;
		p->prior->next = s;
		s->next = p;
		p->prior = s;
	}
	return;
}

int main()
{

}