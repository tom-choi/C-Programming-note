#include <iostream>
#include <vector>
using namespace std;

void printVector(vector<int>& v1)
{
	for (vector<int>::iterator it = v1.begin(); it != v1.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}



void test01()
{
	vector<int>v1;
	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);
	}
	printVector(v1);

	if (v1.empty())
	{
		cout << "v1為空" << endl;
	}
	else
	{
		cout << "v1不為空" << endl;
		cout << "v1的容量為: " << v1.capacity() << endl;
		cout << "v1的大小為: " << v1.size() << endl;
	}

	//重新指定大小
	v1.resize(15);
	printVector(v1);
}


int main()
{
	test01();
}