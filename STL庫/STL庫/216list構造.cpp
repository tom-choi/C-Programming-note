#include <iostream>
#include <list>
using namespace std;

void printList(const list<int>& L)
{
	for (list<int>::const_iterator it = L.begin(); it != L.end(); it++)
	{
		cout << *it << ' ';
	}
	cout << endl;
}





void test01()
{
	list<int>L1;
	L1.push_back(10);
	L1.push_back(20);
	L1.push_back(30);
	L1.push_back(40);

	printList(L1);

	//…^ég
	list<int>L2(L1.begin(), L1.end()); 
	printList(L2);

	//copy
	list<int>L3(L2);
	printList(L3);

	//n‚€elem
	list<int>L4(10, 100);
	printList(L4);
}



int main()
{
	test01();
}