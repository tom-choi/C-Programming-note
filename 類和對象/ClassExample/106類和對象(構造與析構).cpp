#include <iostream>
#include <string>

using namespace std;

class person
{
public:
	//ֻ�к������_ʼ�\�вŕ��{�Ø��캯��
	person()
	{
		cout << "�{�Ø��캯��" << endl;
	}
	//ֻ�к����\����֮��ŕ��{����������
	~person()
	{
		cout << "�{����������" << endl;
	}
};

void test01()
{
	person p1; //�{���˘������������
}



int main()
{
	//person p1; //ֻ�{���˘��캯��
	system("pause");
}