#include <iostream>
#include <map>
using namespace std;

void printMap(map<int, int>& m)
{
	for (map<int, int>::const_iterator it = m.begin(); it != m.end(); it++)
	{
		cout << "key = " << (*it).first << " value: " << (*it).second << endl;
	}
	cout << endl;
}

void test01()
{
	map<int, int>m;

	//插入
	//第一種
	m.insert(pair<int, int>(1, 10));

	//第二種(自動識別類型)
	m.insert(make_pair(2, 20));

	//第三種
	m.insert(map<int, int>::value_type(3, 30));

	//第四種(下標)
	m[4] = 10;

	//第五種，直接加進去
	cout << m[5] << endl;

	cout << (m[6] = 10) << endl;
	printMap(m);

	//刪除
	m.erase(m.begin());
	printMap(m);

	m.erase(3);
	printMap(m);
}





int main()
{
	test01();
}