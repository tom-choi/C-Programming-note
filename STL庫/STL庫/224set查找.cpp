#include <iostream>
#include <set>
using namespace std;

void test01()
{
	//����
	set<int>s1;
	s1.insert(10);
	s1.insert(20); 
	s1.insert(30);
	s1.insert(40);

	set<int>::iterator pos = s1.find(30);

	if (pos != s1.end())
	{
		cout << "�ҵ�Ԫ��: " << *pos << endl;
	}
	else
	{
		cout << "�]�ҵ�Ԫ��: " << endl;
	}
}

void test02()
{
	set<int>s1;
	s1.insert(10);
	s1.insert(20);
	s1.insert(30);
	s1.insert(40);

	int num = s1.count(30);
	//���set��ֻ��1��0
	cout << "num = " << num << endl;
}

int main()
{
	test01();
	test02();
}