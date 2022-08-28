#include <iostream>
#include <deque>
using namespace std;

void test01()
{
	deque<int>d;
	d.push_back(10);
	d.push_back(20);
	d.push_back(30);
	d.push_front(100);
	d.push_front(200);
	d.push_front(300);

	//[]方式
	for (int i = 0; i < d.size(); i++)
	{
		cout << d[i] << ' ';
	}
	cout << endl;

	//at方式
	for (int i = 0; i < d.size(); i++)
	{
		cout << d.at(i) << ' ';
	}
	cout << endl;

	cout << "第一個元素為: " << d.front() << endl;
	cout << "最後一個元素為: " << d.back() << endl;
}


int main()
{
	test01();
}