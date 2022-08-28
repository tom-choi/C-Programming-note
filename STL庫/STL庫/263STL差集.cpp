#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Myprint
{
public:
	void operator()(int val)
	{
		cout << val << ' ';
	}
};

void test01()
{
	vector<int>v1;
	vector<int>v2;

	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);
		v2.push_back(i + 5);
	}

	vector<int>vTarget;
	vTarget.resize(v1.size() + v2.size());
	vector<int>::iterator itEND = set_difference(v1.begin(), v1.end(), v2.begin(), v2.end(), vTarget.begin());
	cout << "v1ºÍv2µÄ²î¼¯žé: " << endl;
	for_each(vTarget.begin(), itEND, Myprint());

	
}



int main()
{
	test01();
}