#include <iostream>
#include <deque>
using namespace std;

void PrintDeque(const deque<int>& d)
{
	for (deque<int>::const_iterator it = d.begin(); it != d.end(); it++)
	{
		cout << *it << ' ';
	}
	cout << endl;
}

void test01()
{
	deque<int>d1;
	for (int i = 0; i < 10; i++)
	{
		d1.push_back(i);
	}
	PrintDeque(d1);

	if (d1.empty())
	{
		cout << "d1為空" << endl;
	}
	else
	{
		cout << "d1不為空" << endl;
		cout << "d1的大小為: " << d1.size() << endl;
	}

	//重新指定大小
	d1.resize(15,1);
	PrintDeque(d1);

	d1.resize(5);
	PrintDeque(d1);
}


int main()
{
	test01();
}
