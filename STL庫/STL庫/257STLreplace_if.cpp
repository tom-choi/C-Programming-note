#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>

class myPrint
{
public:
	void operator()(int val)
	{
		cout << val << ' ';
	}

};

class Greater30
{
public:
	bool operator()(int val)
	{
		return val >= 30;
	}
};

void test01()
{
	vector<int>v;
	v.push_back(10);
	v.push_back(20);
	v.push_back(40);
	v.push_back(50);
	v.push_back(20);
	v.push_back(30);
	v.push_back(40);

	cout << "Ìæ“QÇ°: " << endl;
	for_each(v.begin(), v.end(), myPrint());
	cout << endl;

	//Œ¢´óì¶µÈì¶30 Ìæ“Q3000
	replace_if(v.begin(), v.end(), Greater30(),3000);
	cout << "Ìæ“Qáá: " << endl;
	for_each(v.begin(), v.end(), myPrint());
	cout << endl;
}



int main()
{
	test01();
}