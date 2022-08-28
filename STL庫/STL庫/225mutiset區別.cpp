#include <iostream>
#include <set>
using namespace std;

void test01()
{
	set<int>s1;
	pair<set<int>::iterator, bool> ret = s1.insert(10);
	if (ret.second)
	{
		cout << "插入成功" << endl;
	}
	else
	{
		cout << "插入失敗" << endl;
	}

	ret = s1.insert(10);

	if (ret.second)
	{
		cout << "插入成功" << endl;
	}
	else
	{
		cout << "插入失敗" << endl;
	}

	multiset<int>ms;
	ms.insert(10);
	ms.insert(10);

	for (multiset<int>::iterator it = ms.begin(); it != ms.end(); it++)
	{
		cout << *it << ' ';
	}
	cout << endl;
}




int main()
{
	test01();
}