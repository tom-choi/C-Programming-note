#include <iostream>
#include <list>
using namespace std;

void printlist(const list<int>& L)
{
	for (list<int>::const_iterator it = L.begin(); it != L.end(); it++)
	{
		cout << *it << ' ';
	}
	cout << endl;
}




void test01()
{
	list<int>L1;
	L1.push_back(10);
	L1.push_back(20);
	L1.push_back(30);
	L1.push_back(40);

	printlist(L1);

	if (L1.empty())
	{
		cout << "L1為空" << endl;
	}
	else
	{
		cout << "L1不為空" << endl;
		cout << "L1大小為: " << L1.size() << endl;
	}

	//重新指定大小
	L1.resize(10,100);
	printlist(L1);
}





int main()
{
	test01();
}