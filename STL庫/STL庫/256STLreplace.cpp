#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>

void myprint(int val)
{
	cout << val << ' ';
}


void test01()
{
	vector<int>v;
	v.push_back(10);
	v.push_back(20);
	v.push_back(30);
	v.push_back(50);
	v.push_back(60);
	v.push_back(10);
	v.push_back(10);
	
	cout << "Ìæ“QÇ°: " << endl;
	for_each(v.begin(), v.end(), myprint);
	cout << endl;

	replace(v.begin(), v.end(), 20, 2000);
	cout << "Ìæ“Qáá: " << endl;
	for_each(v.begin(), v.end(), myprint);
	cout << endl;
}

int main()
{
	test01();

}