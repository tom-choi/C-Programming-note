#include <iostream>
#include <list>
using namespace std;

void printlist(const list<int>& L)
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

	//β��
	L1.push_back(10);
	L1.push_back(20);
	L1.push_back(30);

	//�^��
	L1.push_front(100);
	L1.push_front(200);
	L1.push_front(300);
	printlist(L1);

	//β�h
	L1.pop_back();
	printlist(L1);

	//�^�h
	L1.pop_front();
	printlist(L1);

	list<int>::iterator it = L1.begin();
	L1.insert(++it, 990);
	printlist(L1);

	//�h��
	it = L1.begin();
	L1.erase(++it);
	printlist(L1);

	//�Ƴ�
	L1.push_back(10000);
	printlist(L1);

	L1.clear();
	printlist(L1);
}

int main()
{
	test01();
}