#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

//binary_search
// 
//在無序序列不可用

void test01()
{
	vector<int>v;
	for (int i = 0; i < 10; i++)
	{
		v.push_back(i);
	}

	bool ret = binary_search(v.begin(), v.end(),9);

	if (ret)
	{
		cout << "找到了元素" << endl;
	}
	else
	{
		cout << "沒找到" << endl;
	}
}


int main()
{
	test01();
}