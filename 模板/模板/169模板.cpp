#include <iostream>
#include <string>

using namespace std;

//2.ģ����Ҫݔ��T�Ĕ�����ͣ��ſ���ʹ��
template<class T>
void func()
{
	cout << "func �{��" << endl;
}

void test02()
{
	func<int>();
}

int myAdd01(int a, int b)
{
	return a + b;
}

void test01()
{
	int a = 10;
	int b = 20;
	char c = 'c';
	cout << myAdd01(a, c) << endl;
}



int main()
{
	test01();
}