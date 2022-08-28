#include <iostream>
#include <map>
using namespace std;

//½µĞò£¬·Âº¯”µ
class Mycompare
{
public:
	bool operator()(int a1,int a2) const
	{
		return a1 > a2;
	}
};

void printMap(map<int, int, Mycompare>& m)
{
	for (map<int, int, Mycompare>::const_iterator it = m.begin(); it != m.end(); it++)
	{
		cout << "key = " << it->first << " value: " << it->second << endl;
	}
	cout << endl;
}

void test01()
{
	map<int, int,Mycompare>m;
	m.insert(make_pair(1, 10));
	m.insert(make_pair(2, 20));
	m.insert(make_pair(3, 30));
	m.insert(make_pair(4, 40));
	m.insert(make_pair(5, 50));

	printMap(m);
	
}

int main()
{
	test01();
}