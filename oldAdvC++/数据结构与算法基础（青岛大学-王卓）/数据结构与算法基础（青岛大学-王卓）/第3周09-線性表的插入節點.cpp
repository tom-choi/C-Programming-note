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

int insert(node* head,int i,int data)
{
	node* p = head;
	int j;
	for (j = 0; p && j < i-1; j++)
	{
		p = p->next;
	}
	if (!p || j > i - 1)
		return -1;
	node* s = new node;
	s->data = data;
	s->next = p->next; 
	p->next = s;
}


int main()
{

}