#include <iostream>
#include <vector>
using namespace std;
#include <algorithm>

class myPrint
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
		v2.push_back(i + 100);
	}
	cout << "½»“QÇ°:  " << endl;
	for_each(v1.begin(), v1.end(), myPrint());
	cout << endl;
	for_each(v2.begin(), v2.end(), myPrint());
	cout << endl;

	cout << "----------------" << endl;
	cout << "½»“Qáá:  " << endl;

	swap(v1, v2);

	for_each(v1.begin(), v1.end(), myPrint());
	cout << endl;
	for_each(v2.begin(), v2.end(), myPrint());
	cout << endl;
}




int main()
{
	test01();
}