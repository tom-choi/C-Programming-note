#include <iostream>
#include <string>
using namespace std;

void test01()
{
	pair<string, int>p("Tom", 20);
	cout << "����: " << p.first << " ���g: " << p.second << endl;

	pair<string, int>p2 = make_pair("Jerry",32);
	cout << "����: " << p2.first << " ���g: " << p2.second << endl;
}




int main()
{
	test01();
}