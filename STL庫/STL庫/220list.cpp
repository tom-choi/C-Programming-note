#include <iostream>
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
	L1.push_back(10);
	L1.push_back(20);
	L1.push_back(30);
	L1.push_back(40);

	//L1[0] ��������[]�L��

	//L1.at(0) ��������at

	//list�ȴ���g���B�m��������Ҳ����

	cout << "��һ��Ԫ�؞�: " << L1.front() << endl;
	cout << "����һ��Ԫ�؞�: " << L1.back() << endl;

	//������Ҳ��֧���S�C�L��
	list<int>::iterator it = L1.begin();
	//it = it +1;

	//֧���p��
	it++;
	it--;

	//֧�ֆ���
	it++;

}


int main()
{
	test01();
}