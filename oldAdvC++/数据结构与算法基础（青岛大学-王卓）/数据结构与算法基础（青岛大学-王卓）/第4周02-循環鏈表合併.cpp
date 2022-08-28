#include <iostream>
using namespace std; 

struct node
{
	int data;
	node* next;
};

node* create()
{
	node* head, * p;
	head = new node;
	head->next = NULL;
	p = head;

	int x, cycle = 1;
	while (cycle)
	{
		cout << "Please input the data for single linker : ";
		cin >> x;
		if (x != 0)
		{
			node* s = new node;
			s->data = x;
			cout << "Input data: " << x << endl;

			p->next = s;
			p = s;
		}
		else
		{
			cycle = 0;
			cout << "Input done" << endl;
		}
	}
	head = head->next;
	p->next = head;

	return head;
}

node connect(node L1, node L2)
{
	node* p;
	p = L1.next;
	L1.next = L2.next->next;
	delete L2.next;
	L2.next = p;
	return L2;
}

int main()
{

}