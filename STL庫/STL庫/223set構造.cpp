#include <iostream>
#include <set>
using namespace std;

void printset(set<int>& s)
{
	for (set<int>::iterator it = s.begin(); it != s.end(); it++)
	{
		cout << *it << ' ';
	}
	cout << endl;
}





void test01()
{
	set<int>s1;

	//只有insert方式
	s1.insert(10);
	s1.insert(20);
	s1.insert(30);
	s1.insert(40);
	s1.insert(30);

	printset(s1);

	//copy
	set<int>s2(s1);
	printset(s2);

	//刪除
	s1.erase(30);
	printset(s1);

	//清空
	s1.clear();
	printset(s1);
}


int main()
{
	test01();
}