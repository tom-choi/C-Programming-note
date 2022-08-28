#include<iostream>
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

	L1.push_back(20);
	L1.push_back(10);
	L1.push_back(50);
	L1.push_back(40);
	L1.push_back(70);

	cout << "反轉前: " << endl;
	printlist(L1);

	L1.reverse();
	cout << "反轉後: " << endl;
	printlist(L1);

}

bool myCompare(int v1,int v2)
{
	//降序 v1 > v2
	return v1 > v2;
}


void test02()
{
	list<int>L1;

	L1.push_back(20);
	L1.push_back(10);
	L1.push_back(50);
	L1.push_back(40);
	L1.push_back(70);

	cout << "排序前: " << endl;
	printlist(L1);

	//所有不支持隨機訪問的迭代器，不可以使用標準算法
	//sort(L1.begin(), L1.end());

	//升序
	L1.sort();
	cout << "排序後: " << endl;
	printlist(L1);

	//降序
	L1.sort(myCompare);
	printlist(L1);

}


int main()
{
	test01(test02);
	test02();
}