#include <iostream>
#define MAX 10
using namespace std;

typedef struct Lnode
{
	int data;
	struct Lnode* next;
}Lnode,*Linklist;

int length(Linklist L)
{
	Lnode* p;
	p = L->next;
	int count = 0;
	while (p)
	{
		p = p->next;
		count++;
	}
	return count;
}

int GetElem_L(Linklist L, int i, int e)
{
	Lnode* p, * s;
	p = L->next;
	int j = 1;
	while (p && j < i)
	{
		p = p->next;
		++j;
	}
	if (!p || j > i)
		return;
	e = p->data;
	return e;
}

int main()
{

}