#include <iostream>
using namespace std;

void myPrint(int a, int b)
{
	cout << "�{�õ���ͨ����" << endl;
}

template<class T>
void myPrint(T a, T b)
{
	cout << "�{�õ�ģ��" << endl;
}

void test01()
{
	int a = 10;
	int b = 20;
	myPrint<>(a, b);
}



int main()
{
	test01();
	system("pause");
	return 0;
}