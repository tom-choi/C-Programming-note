#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>
using namespace std;

//tranform
class tranform
{
public:
	int operator()(int v)
	{
		return v +1000;
	}

};

class MyPrint
{
public:
	void operator()(int val)
	{
		cout << val << ' ';
	}
};






void test01()
{
	vector<int>v;
	for (int i = 0; i < 10; i++)
	{
		v.push_back(i);
	}
	vector<int>vTarget;
	vTarget.resize(v.size());

	transform(v.begin(), v.end(), vTarget.begin(), tranform());

	for_each(vTarget.begin(), vTarget.end(), MyPrint());
	cout << endl;
}





int main()
{
	test01();
}