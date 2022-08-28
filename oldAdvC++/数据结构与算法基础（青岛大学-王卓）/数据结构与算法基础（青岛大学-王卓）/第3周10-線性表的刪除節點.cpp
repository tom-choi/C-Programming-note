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

	int x = 1;
	cout << "Please input the data for single linker: ";
	while (cin >> x && x != 0)
	{
		node* s = new node;
		s->data = x;
		cout << "Input data: " << x << endl;

		p->next = s;
		p = s;
	}
	cout << "Input done!" << endl;
	head = head->next;
	p->next = NULL;

	return head;
}

int delete_L(node* head,int i)
{
	node* p = head;
	int j;
	for (j = 0; p && j < i-1; j++)
	{
		p = p->next;
	}

 	if (!p || j > i- 1)
		return -1;
	node* q = p->next;
	p->next = p->next->next;
	delete q;
	return 0;
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
	node* head = create();
	print_L(head);
	delete_L(head, 2);
	cout << endl << "Deleted: " << endl;
	print_L(head);
}