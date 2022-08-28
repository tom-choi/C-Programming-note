#include <iostream>
#include <vector>
using namespace std;

void printVector(vector<int>& p)
{
	for (vector<int>::iterator it = p.begin(); it < p.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}





//����ʹ��
void test01()
{
	vector<int>v1;
	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);
	}
	printVector(v1);
	
	vector<int>v2;
	for (int i = 10; i > 0; i--)
	{
		v2.push_back(i);
	}
	printVector(v2);

	cout << "���Q��:" << endl;
	v1.swap(v2);

	printVector(v1);
	printVector(v2);
}


//���H��;���տs�ȴ���g
void test02()
{
	vector<int> v;
	for (int i = 0; i < 10000; i++)
	{
		v.push_back(i);
	}
	cout << "v ��������: " << v.capacity() << endl;
	cout << "v �Ĵ�С��: " << v.size() << endl;

	v.resize(3);
	cout << "v ��������: " << v.capacity() << endl;
	cout << "v �Ĵ�С��: " << v.size() << endl;

	//�տs�ȴ���g
	vector<int>(v).swap(v);
	cout << "v ��������: " << v.capacity() << endl;
	cout << "v �Ĵ�С��: " << v.size() << endl;
}





int main()
{
	test01();
	test02();
}