#include<iostream>
#include <list>
using namespace std;

void printlist(const list<int>& l)
{
	for (list<int>::const_iterator it = l.begin(); it != l.end(); it++)
	{
		cout << *it << ' ';
	}
	cout << endl;
}




void test01()
{
	list<int>L1;

	L1.push_back(20);
	L1.push_back(10);
	L1.push_back(50);
	L1.push_back(40);
	L1.push_back(70);

	cout << "���Dǰ: " << endl;
	printlist(L1);

	L1.reverse();
	cout << "���D��: " << endl;
	printlist(L1);

}

bool myCompare(int v1,int v2)
{
	//���� v1 > v2
	return v1 > v2;
}


void test02()
{
	list<int>L1;

	L1.push_back(20);
	L1.push_back(10);
	L1.push_back(50);
	L1.push_back(40);
	L1.push_back(70);

	cout << "����ǰ: " << endl;
	printlist(L1);

	//���в�֧���S�C�L���ĵ�������������ʹ�Ø˜��㷨
	//sort(L1.begin(), L1.end());

	//����
	L1.sort();
	cout << "������: " << endl;
	printlist(L1);

	//����
	L1.sort(myCompare);
	printlist(L1);

}


int main()
{
	test01(test02);
	test02();
}