#include <iostream>
#include <deque>
#include <algorithm>
using namespace std;

void printdeque(deque<int>& d)
{
	for (deque<int>::iterator it = d.begin(); it != d.end(); it++)
	{
		cout << *it << ' ';
	}
	cout << endl;
}

void test01()
{
	deque<int>d;
	d.push_back(10);
	d.push_back(20);
	d.push_back(30);
	d.push_front(100);

	printdeque(d);

	//Ð¡µ½´ó
	sort(d.begin(), d.end());
	printdeque(d);
}



int main()
{
	test01();
}