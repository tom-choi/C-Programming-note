#include <Iostream>
#include <vector>
#include <algorithm>
using namespace std;

void m_print(int val)
{
	cout << val << ' ';
}






void test01()
{
	vector<int>v;

	v.push_back(10);
	v.push_back(30);
	v.push_back(50);
	v.push_back(20);
	v.push_back(10);

	cout << "·´ÞDÇ°: " << endl;
	for_each(v.begin(), v.end(), m_print);
	cout << endl;

	cout << "·´ÞDáá: " << endl;
	reverse(v.begin(), v.end());
	for_each(v.begin(), v.end(), m_print);
}

int main()
{
	test01();
}