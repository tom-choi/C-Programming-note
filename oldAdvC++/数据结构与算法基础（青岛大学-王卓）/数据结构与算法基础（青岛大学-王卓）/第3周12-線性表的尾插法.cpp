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
	node* r = L; // 尾指針r指向頭結點

	cout << "Please input the data for single linker: ";
	for (int i = n; i > 0; i--)
	{
		node* p = new node; // 生成新結點
		cin >> p->data;
		p->next = NULL;
		r->next = p; // 插入到表尾
		r = p; // r指向新的尾節點
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