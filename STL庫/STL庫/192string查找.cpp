#include <iostream>

using namespace std;
 
//1.≤È’“
void test01()
{
	string str1 = "abcdefgde";
	int pos = str1.find("de");
	if (pos == -1)
	{
		cout << "õ]’“µΩ◊÷∑˚¥Æ" << endl;
	}
	else
	{
		cout << "’“µΩ◊÷∑˚¥Æ pos = " << pos << endl;
	}

	//rfind∫ÕfindµƒÖ^Ñe
	//rfind «èƒ”“Õ˘◊Û≤È’“
	pos = str1.rfind("de");
	cout << "pos = " << pos << endl;
}

//2. ÃÊìQ
void test02()
{
	string str1 = "abcdefg";
	str1.replace(1, 3, "1111");
	cout << "str1 = " << str1 << endl; //ï˛›î≥ˆ…ı¸N?
}




int main()
{
	test01();
	test02();
}