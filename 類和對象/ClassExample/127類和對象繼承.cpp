#include <iostream>
#include <string>

using namespace std;

class Basepage
{
public:
	void header()
	{
		cout << "首頁" << endl;
	}
	void footer()
	{
		cout << "幫肋中心" << endl;
	}
	void left()
	{
		cout << "Java Python C++" << endl;
	}
};

class Java: public Basepage
{
public:
	void content()
	{
		cout << "java學科視頻" << endl;
	}
};

class Python : public Basepage
{
public:
	void content()
	{
		cout << "Python學科視頻" << endl;
	}
};

class CPP : public Basepage
{
public:
	void content()
	{
		cout << "C++學科視頻" << endl;
	}
};

void test01()
{
	cout << "JAVA 下載影片如下" << endl;
	Java java01;
	java01.header();
	java01.footer();
	java01.left();
	java01.content();
	cout << endl;
	cout << "c 下載影片如下" << endl;
	CPP cpp01;
	cpp01.header();
	cpp01.footer();
	cpp01.left();
	cpp01.content();
}



int main()
{
	test01();


	return 0;
}