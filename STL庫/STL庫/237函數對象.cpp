#include <iostream>
using namespace std;


class MyAdd
{
public:
	int operator()(int v1, int v2)
	{
		return v1 + v2;
	}
};

//�������������ͨ�����ĸ����������������Լ���B
class MyPrint
{
public:
	MyPrint()
	{
		this->count = 0;
	}
	void operator()(string test)
	{
		cout << test << endl;
		this->count++;
	}

	int count; //�Ȳ���B
};

void doPrint(MyPrint& mp, string test)
{
	mp(test);
}


//�����������酢�����f
void test03()
{
	MyPrint myprint;
	doPrint(myprint, "Hello c++");
}



int main()
{
	MyAdd myadd;
	cout << myadd(10, 10) << endl;
	MyPrint Myprint;
	Myprint("hello world!");
	Myprint("hello world!");
	Myprint("hello world!");
	Myprint("hello world!");
	
	cout << "myPrint�{�ôΔ�: " << Myprint.count << endl;

	test03();
}