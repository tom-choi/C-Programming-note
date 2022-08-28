#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// <vector>容器存放內置數據類型 

void myPrint(int val)
{
	cout << val << endl;
}




void test01()
{
	vector<int>v;
	v.push_back(10);
	v.push_back(20);
	v.push_back(30);
	v.push_back(40);

	//進過迭代器訪問vector
	//vector<int>::iterator itBegin = v.begin(); //起始迭代器 指第一個元素
	//vector<int>::iterator itEnd = v.end(); //結束迭代器 指最後一個元素的後一個位置

	//while (itBegin != itEnd)
	//{
	//	cout << *itBegin << endl;
	//	itBegin++;
	//}

	//通過for訪問
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << *it << endl;
	}

	//通過STL算法訪問 //回調函數技術
	for_each(v.begin(),v.end(), myPrint);



}


int main()
{
	test01();
}