#include <iostream>
using namespace std;
#include <string>

void test01()
{
	string str = "hello";
	cout << "str = " << str << endl;
	//Í¨ß^[]ÔL†–
	for (int i = 0; i < str.size(); i++)
	{
		cout << str[i] << " ";
	}
	cout << endl;
	//Í¨ß^atÔL†–
	for (int i = 0; i < str.size(); i++)
	{
		cout << str.at(i) << " ";
	}
	cout << endl;

	str[0] = 'x';
	cout << "str = " << str << endl; //xello
	str[1] = 'x';
	cout << "str = " << str << endl; //xxllo

}




int main()
{
	test01();
}