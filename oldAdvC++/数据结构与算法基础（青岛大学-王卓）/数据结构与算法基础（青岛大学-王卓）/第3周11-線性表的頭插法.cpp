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

node* head_create(int n)
{
	node* new_head, * p;
	new_head = new node;
	new_head->next = NULL;

	int x = 1;
	cout << "Please input the data for single linker: ";
	for (int i = n; i > 0; --i)
	{
		p = new node;
		scanf_s("%d",&p->data);
		p->next = new_head->next;
		new_head->next = p;
	}
	new_head = new_head->next;
	cout << "Input done!" << endl;
	
	return new_head;
}

int main()
{
	cout << "***½¨Á¢†Îæœ±í***" << endl;
	node* head_a = head_create(3);
	print_L(head_a);
}