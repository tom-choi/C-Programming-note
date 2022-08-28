#include <iostream>
using namespace std;

typedef struct Lnode
{
	int data;
	struct Londe* next;
}Lnode,*linklist;

int find_length(linklist L)
{
	Londe* p;
	p = L->next;
	int count = 0;
	while (p)
	{
		count++;
		p = L->next;
	}
	return count;
}

int main()
{
	Lnode L;
}