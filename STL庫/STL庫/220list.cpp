#include <iostream>
#include <list>
using namespace std;

void printlist(const list<int>& l)
{
	for (list<int>::const_iterator it = l.begin(); it != l.end(); it++)
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

	//L1[0] 不可以用[]訪問

	//L1.at(0) 不可以用at

	//list內存空間不連續，迭代器也不行

	cout << "第一個元素為: " << L1.front() << endl;
	cout << "最後一個元素為: " << L1.back() << endl;

	//迭代器也不支持隨機訪問
	list<int>::iterator it = L1.begin();
	//it = it +1;

	//支持雙向
	it++;
	it--;

	//支持單向
	it++;

}


int main()
{
	test01();
}