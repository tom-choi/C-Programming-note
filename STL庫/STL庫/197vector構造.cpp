#include <iostream>
#include <vector>
using namespace std;

void printVector(vector<int>&v)
{
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}



void test01()
{
	vector<int> v;
	for (int i = 0; i < 10; i++)
	{
		v.push_back(i);
	}
	printVector(v);

	//ʹ�Å^�g�ķ�ʽ���x
	vector<int>v2(v.begin(), v.end());
	printVector(v2);

	//n��elem��ʽ����
	vector<int>v3(10, 0);
	printVector(v3);

	//copy����
	vector<int>v4(v3);
	printVector(v4);
}

int main()
{
	test01();
}