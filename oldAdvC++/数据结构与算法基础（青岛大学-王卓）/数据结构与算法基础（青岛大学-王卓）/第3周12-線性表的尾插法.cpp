#include <iostream>
using namespace std;

struct node
{
	int data;
	node* next;
};

void print_L(node* head)
{
	node* p = head;
	while (p != NULL)
	{
		cout << "Single Linker data is " << p->data << endl;
		p = p->next;
	}
	cout << "\n";
}

node* createlist(int n)
{
	node* L = new node;
	L->next = NULL;
	node* r = L; // βָ�rָ���^�Y�c

	cout << "Please input the data for single linker: ";
	for (int i = n; i > 0; i--)
	{
		node* p = new node; // �����½Y�c
		cin >> p->data;
		p->next = NULL;
		r->next = p; // ���뵽��β
		r = p; // rָ���µ�β���c
	}
	L = L->next;
	cout << "Input done!" << endl;

	return L;
}

int main()
{
	node* head = createlist(3);
	print_L(head);
}