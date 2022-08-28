#include <iostream>
using namespace std;
#define MAX 1000

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

//存儲密度=結點數據所占用的空間/結點所占用的空間
//鏈表存儲密度大，順序表存儲密度小

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