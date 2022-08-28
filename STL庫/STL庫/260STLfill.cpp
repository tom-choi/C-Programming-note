#include <Iostream>
#include <vector>
using namespace std;
#include <numeric>
#include <algorithm>

void myprint(int val)
{
	cout << val << ' ';
}

void test01()
{
	vector<int>v;
	v.resize(10);

	//ááÆÚÖØÐÂÌî
	fill(v.begin(), v.end(), 100);

	for_each(v.begin(), v.end(), myprint);
	cout << endl;
}
int main()
{
	test01();
}