#include<iostream>
#include<map>
using namespace std;

void test01()
{
	map<int, int>m;
	m.insert(pair<int, int>(1, 10));
	m.insert(pair<int, int>(2, 20));
	m.insert(pair<int, int>(3, 30));
	m.insert(pair<int, int>(3, 40));
	m.insert(pair<int, int>(3, 50));

	//查找
	map<int, int>::iterator pos = m.find(3);

	if (pos != m.end())
	{
		cout << "找到元素key = " << (*pos).first << " value: " << (*pos).second << endl;
	}
	else
	{
		cout << "沒有找到元素key" << endl;
	}

	//統計
	//map不允許插入重複key，count只有零和一
	int num = m.count(3);
	cout << "num = " << num << endl;
}


int main()
{
	test01();
}