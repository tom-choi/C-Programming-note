#include <iostream>
#include <string>

using namespace std;

class Basepage
{
public:
	void header()
	{
		cout << "���" << endl;
	}
	void footer()
	{
		cout << "��������" << endl;
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
		cout << "java�W��ҕ�l" << endl;
	}
};

class Python : public Basepage
{
public:
	void content()
	{
		cout << "Python�W��ҕ�l" << endl;
	}
};

class CPP : public Basepage
{
public:
	void content()
	{
		cout << "C++�W��ҕ�l" << endl;
	}
};

void test01()
{
	cout << "JAVA ���dӰƬ����" << endl;
	Java java01;
	java01.header();
	java01.footer();
	java01.left();
	java01.content();
	cout << endl;
	cout << "c ���dӰƬ����" << endl;
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