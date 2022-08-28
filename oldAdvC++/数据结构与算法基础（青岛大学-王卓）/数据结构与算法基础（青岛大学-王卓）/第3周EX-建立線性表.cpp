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
	p->next = NULL;

	return head;
}

void print_L(node* head)
{
	node* p = head;
	while (p != NULL)
	{
		cout << "Single Linker data is " << p->data << endl;
		p = p->next;
	}
}

int main()
{
	cout << "***½¨Á¢†Îæœ±í***" << endl;
	node* head = create();
	cout << endl;
	print_L(head);
}