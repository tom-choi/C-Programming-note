#include <iostream>
#include <string>

using namespace std;

class Base
{
public:
	//��̓����
	//�����
	//�o������������
	virtual void func() = 0;
	
};
class Son :public Base
{
public:
	//һ��Ҫ�l���،�����t�o������������
	virtual void func() 
	{
		cout << "func()�{��" << endl;
	};
};
void test01()
{
	//Base b; //����o������������
	//new Base //����o������������

	//Son s; //����o������������
	Son s;
	Base* base = new Son;
	base->func();
}

int main()
{
	test01();


}