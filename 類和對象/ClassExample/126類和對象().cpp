#include <iostream>
#include <string>

using namespace std;


class Myprint
{
public:
	
	void operator()(string test)
	{
		cout << test << endl;
	}

};

class MyAdd
{
public:
	int operator()(int num1, int num2)
	{
		return num1 + num2;
	}
};



void test01()
{
	Myprint test;
	test("hello world!"); //�º�������������񺯔�
}

void test02()
{
	MyAdd add;
	cout << add(100, 25) << endl;

	//�������󌑷�
	cout << MyAdd()(100, 5) << endl;
}



int main()
{
	test01();
	system("pause");
	return 0;
}