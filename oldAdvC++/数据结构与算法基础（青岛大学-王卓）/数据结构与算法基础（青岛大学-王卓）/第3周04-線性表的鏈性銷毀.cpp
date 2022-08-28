#include <iostream>
using namespace std;

//æœ±í
typedef struct Lnode
{
	int data;
	struct Lnode* next;
}Lnode, * Linklist;

void Destorylist_L(Linklist &L)
{
	Lnode* p;
	while (L)
	{
		p = L;
		L = L->next;
		delete p;
	}
}


int main()
{

}