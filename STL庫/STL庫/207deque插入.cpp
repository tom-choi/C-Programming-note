#include <iostream>
#include <deque>
using namespace std;

void printdeque(deque<int>& d)
{
	for (deque<int>::iterator it = d.begin(); it != d.end(); it++)
	{
		cout << *it << ' ';
	}
	cout << endl;
}




//É…∂À≤Ÿ◊˜
void test01()
{
	deque<int>d1;

	//Œ≤≤Â
	d1.push_back(100);
	d1.push_back(200);

	//Ó^≤Â
	d1.push_front(300);
	d1.push_front(400);
	printdeque(d1);

	//Ó^Ñh
	d1.pop_front();
	printdeque(d1);


}

void test02()
{
	deque<int>d2;
	d2.push_back(10);
	d2.push_back(20);
	d2.push_front(100);
	d2.push_front(200);

	printdeque(d2);
	
	//≤Â»Î
	d2.insert(d2.begin(),2, 1000);
	printdeque(d2);

	//∞¥’’Ö^Èg≤Â»Î
	d2.clear();
	d2.push_back(1);
	d2.push_back(2);
	d2.push_back(3);

	deque<int>d1;
	d1.insert(d1.begin(), d2.begin(), d2.end());
	printdeque(d1);
}

void test03()
{
	deque<int>d1;
	d1.push_back(10);
	d1.push_back(20);
	d1.push_front(100);
	d1.push_front(200);

	//Ñh≥˝
	deque<int>::iterator it = d1.begin();
	it++;
	d1.erase(it);
	printdeque(d1);

	d1.erase(d1.begin(), d1.end());
	printdeque(d1);
}



int main()
{
	test03();
}