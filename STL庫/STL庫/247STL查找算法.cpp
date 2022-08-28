#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void test01()
{
	vector<int>v;
	v.push_back(2);
	v.push_back(0);
	v.push_back(1);
	v.push_back(2);
	v.push_back(0);
	v.push_back(2);
	v.push_back(0);
	v.push_back(0);

	vector<int>::iterator pos = adjacent_find(v.begin(), v.end());

	if (pos == v.end())
	{
		cout << "沒有找到相鄰元素" << endl;
	}
	else
	{
		cout << "找到" << *pos << endl;
	}

}





int main()
{
	test01();
}