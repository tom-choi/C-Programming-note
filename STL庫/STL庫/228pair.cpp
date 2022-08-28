#include <iostream>
#include <string>
using namespace std;

void test01()
{
	pair<string, int>p("Tom", 20);
	cout << "姓名: " << p.first << " 年齡: " << p.second << endl;

	pair<string, int>p2 = make_pair("Jerry",32);
	cout << "姓名: " << p2.first << " 年齡: " << p2.second << endl;
}




int main()
{
	test01();
}