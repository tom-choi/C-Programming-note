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
	m.insert(pair<int, int>(1, 10));
	m.insert(pair<int, int>(2, 20));
	m.insert(pair<int, int>(3, 30));

	if (!m.empty())
	{
		cout << "m不為空 " << endl;
	}
	else
	{
		cout << "m為空" << endl;
		cout << "m的大小為: " << m.size() << endl;
	}
}

//交換
void test02()
{
	cout << "交換前: " << endl;
	map<int, int>m1;
	m1.insert(pair<int, int>(1, 10));
	m1.insert(pair<int, int>(2, 20));
	m1.insert(pair<int, int>(3, 30));
	printMap(m1);
	map<int, int>m2;
	m2.insert(pair<int, int>(1, 100));
	m2.insert(pair<int, int>(2, 200));
	m2.insert(pair<int, int>(3, 300));
	printMap(m2);

	cout << "交換後: " << endl;
	m1.swap(m2);
	printMap(m1);
	printMap(m2);
}






int main()
{
	test02();
}
