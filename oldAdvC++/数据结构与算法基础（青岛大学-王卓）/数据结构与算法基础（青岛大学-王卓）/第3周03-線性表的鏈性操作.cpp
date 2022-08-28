#include <iostream>
using namespace std;

//æœ±í
typedef struct Lnode
{
	int data;
	struct Lnode* next;
}Lnode, * Linklist;

int ListEmpty(Linklist L)
{
	if (L->next)
		return 0;
	else
		return -1;
}

int main()
{
	Linklist L;
	L = (Linklist)malloc(sizeof(Lnode));
	L->next = NULL;
	cout << ListEmpty(L);

}