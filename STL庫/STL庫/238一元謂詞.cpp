#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class GreaterFive
{
public:
	bool operator()(int val)
	{
		return val > 5;
	}
};



void test01()
{
	vector<int>v;
	for (int i = 0; i < 10; i++)
	{
		v.push_back(i);
	}

	//�����Л]�д��5�Ĕ���
	vector<int>::iterator it = find_if(v.begin(),v.end(),GreaterFive());
	if (it == v.end())
	{
		cout << "�]���ҵ�" << endl;
	}
	else
	{
		cout << "�ҵ��˴��5�Ĕ��֞�: " << *it << endl;
	}
	//for (; it != v.end(); it++)
	//{
	//	cout << "�ҵ��˴��5�Ĕ��֞�: " << *it << endl;
	//}
}




int main()
{
	test01();
}