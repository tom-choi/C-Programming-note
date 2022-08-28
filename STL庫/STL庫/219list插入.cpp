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

	//Î²²å
	L1.push_back(10);
	L1.push_back(20);
	L1.push_back(30);

	//î^²å
	L1.push_front(100);
	L1.push_front(200);
	L1.push_front(300);
	printlist(L1);

	//Î²„h
	L1.pop_back();
	printlist(L1);

	//î^„h
	L1.pop_front();
	printlist(L1);

	list<int>::iterator it = L1.begin();
	L1.insert(++it, 990);
	printlist(L1);

	//„h³ý
	it = L1.begin();
	L1.erase(++it);
	printlist(L1);

	//ÒÆ³ý
	L1.push_back(10000);
	printlist(L1);

	L1.clear();
	printlist(L1);
}

int main()
{
	test01();
}