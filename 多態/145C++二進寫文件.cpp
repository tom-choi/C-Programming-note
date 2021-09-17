#include <iostream>
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
	ofstream ofs("person.txt", ios::out | ios::binary);
	//3.打開文件
	/*ofs.open("person.txt", ios::out | ios::binary);*/
	//4.寫文件
	Person p = { "張三",18 };
	ofs.write((const char*)&p, sizeof(Person));
	ofs.close();
}

int main()
{
	test01();
}