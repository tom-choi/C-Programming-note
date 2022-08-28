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

//函數對象起出普通函數的概念。函數對象可以有自己狀態
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

	int count; //內部狀態
};

void doPrint(MyPrint& mp, string test)
{
	mp(test);
}


//函數對象作為參數傳遞
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
	
	cout << "myPrint調用次數: " << Myprint.count << endl;

	test03();
}