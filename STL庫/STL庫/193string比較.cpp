#include <iostream>
using namespace std;

void test01()
{
	string str1 = "hello";
	string str2 = "xello";

	if (str1.compare(str2) == 0)
	{
		cout << "str1 µÈì¶ str2" << endl;
	}
	else if (str1.compare(str2) > 0)
	{
		cout << "str1 ´óì¶ str2" << endl;
	}
	else if (str1.compare(str2) < 0)
	{
		cout << "str1 Ð¡ì¶ str2" << endl;
	}

}
int main()
{
	test01();
}