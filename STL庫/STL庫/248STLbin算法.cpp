#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

//binary_search
// 
//�ڟo�����в�����

void test01()
{
	vector<int>v;
	for (int i = 0; i < 10; i++)
	{
		v.push_back(i);
	}

	bool ret = binary_search(v.begin(), v.end(),9);

	if (ret)
	{
		cout << "�ҵ���Ԫ��" << endl;
	}
	else
	{
		cout << "�]�ҵ�" << endl;
	}
}


int main()
{
	test01();
}