#include <iostream>
#include <set>
using namespace std;

void test01()
{
	//查找
	set<int>s1;
	s1.insert(10);
	s1.insert(20); 
	s1.insert(30);
	s1.insert(40);

	set<int>::iterator pos = s1.find(30);

	if (pos != s1.end())
	{
		cout << "找到元素: " << *pos << endl;
	}
	else
	{
		cout << "沒找到元素: " << endl;
	}
}

void test02()
{
	set<int>s1;
	s1.insert(10);
	s1.insert(20);
	s1.insert(30);
	s1.insert(40);

	int num = s1.count(30);
	//對於set，只有1和0
	cout << "num = " << num << endl;
}

int main()
{
	test01();
	test02();
}