#include <iostream>
#include <string>
#include <fstream>

using namespace std;

class Person
{
public:
	char m_Name[64];
	int m_Age;
};

void test01()
{
	//1.包含頭文件

	//2.創建流對象
	ifstream ifs;
	//3.打開文件
	ifs.open("person.txt", ios::in | ios::binary);

	if (!ifs.is_open())
	{
		cout << "文件打開失敗!" << endl;
	}
	Person p;

	ifs.read((char*)&p, sizeof(Person));
	cout << "姓名: " << p.m_Name << "年齡: " << p.m_Age << endl;

}



int main()
{
	test01();
}
