#include <iostream>
using namespace std;

//æœ±í
typedef struct Lnode
{
	int data;
	struct Lnode* next;
}Lnode, * Linklist;

//Çå¿Õ
void Clearlist(Linklist& L)
{
	Lnode* p, * q;
	p = L->next;
	while (p)
	{
		q = p->next;
		delete p;
		p = q;
	}
	L->next = NULL;
	return;
}

int main()
{
	Linklist L;
	Clearlist(L);
}
