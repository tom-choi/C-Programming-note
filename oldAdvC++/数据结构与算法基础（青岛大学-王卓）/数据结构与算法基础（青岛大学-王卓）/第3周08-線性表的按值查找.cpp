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
	//head = head->next;
	p->next = NULL;

	return head;
}

int LocateElem_L(node *L, int data)
{
	node* p;
	p = L;
	int j = 1;
	while (p && p->data != data)
	{
		p = p->next;
		j++;
	}
	if (p)
	{
		return j;
	}
	else
	{
		return -1;
	}
}

void printL(node* head)
{
	node* p = head;
	for (int i = 1; p != NULL; i++)
	{
		cout << "第" << i << "個位置的數值為: " << p->data << endl;
		p = p->next;
	}
}


int main()
{
	cout << "***建立單鏈表***" << endl;
	node* head = create();
	printL(head);
	if (LocateElem_L(head, 5) != -1)
		cout << "5的位置為:" << "第" << LocateElem_L(head, 5) << "個";
	else
		cout << "5不存在!";
}