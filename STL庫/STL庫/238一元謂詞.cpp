#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class GreaterFive
{
public:
	bool operator()(int val)
	{
		return val > 5;
	}
};



void test01()
{
	vector<int>v;
	for (int i = 0; i < 10; i++)
	{
		v.push_back(i);
	}

	//查找有沒有大於5的數字
	vector<int>::iterator it = find_if(v.begin(),v.end(),GreaterFive());
	if (it == v.end())
	{
		cout << "沒有找到" << endl;
	}
	else
	{
		cout << "找到了大於5的數字為: " << *it << endl;
	}
	//for (; it != v.end(); it++)
	//{
	//	cout << "找到了大於5的數字為: " << *it << endl;
	//}
}




int main()
{
	test01();
}