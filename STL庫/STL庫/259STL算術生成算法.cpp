#include <Iostream>
using namespace std;
#include <vector>
#include <algorithm>
#include <functional>
#include <numeric>

void test01()
{
	vector<int>v;
	

	for (int i = 0; i <= 100; i++)
	{
		v.push_back(i);
	}
	
	int total = accumulate(v.begin(), v.end(), 0);

	cout << "total = " << total << endl;
}

int main()
{
	test01();
}