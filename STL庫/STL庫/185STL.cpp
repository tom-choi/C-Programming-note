#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// <vector>������Ń��Ô������ 

void myPrint(int val)
{
	cout << val << endl;
}




void test01()
{
	vector<int>v;
	v.push_back(10);
	v.push_back(20);
	v.push_back(30);
	v.push_back(40);

	//�M�^�������L��vector
	//vector<int>::iterator itBegin = v.begin(); //��ʼ������ ָ��һ��Ԫ��
	//vector<int>::iterator itEnd = v.end(); //�Y�������� ָ����һ��Ԫ�ص���һ��λ��

	//while (itBegin != itEnd)
	//{
	//	cout << *itBegin << endl;
	//	itBegin++;
	//}

	//ͨ�^for�L��
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << *it << endl;
	}

	//ͨ�^STL�㷨�L�� //���{�������g
	for_each(v.begin(),v.end(), myPrint);



}


int main()
{
	test01();
}