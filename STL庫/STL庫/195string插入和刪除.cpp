#include <iostream>

using namespace std;

int main()
{
	string str = "hello";
	str.insert(1, "AAA");
	cout << str << endl;

	str.erase(1, 3);
	cout << str << endl;
}