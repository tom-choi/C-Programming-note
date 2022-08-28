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

	//[]��ʽ
	for (int i = 0; i < d.size(); i++)
	{
		cout << d[i] << ' ';
	}
	cout << endl;

	//at��ʽ
	for (int i = 0; i < d.size(); i++)
	{
		cout << d.at(i) << ' ';
	}
	cout << endl;

	cout << "��һ��Ԫ�؞�: " << d.front() << endl;
	cout << "����һ��Ԫ�؞�: " << d.back() << endl;
}


int main()
{
	test01();
}