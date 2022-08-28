#include <iostream>
#include <string>

using namespace std;

class Phone
{
public:
	Phone(string name):m_Pname(name)
	{
		cout << "Phone 的構造函數" << endl;
	}
	string m_Pname;

};

class Person
{
public:
	Person(string Name, string nPhone) :m_Name(Name),m_Phone(nPhone)
	{
		cout << "Person 的構造函數" << endl;
	}
	~Person()
	{
		cout << "Person 的析構函數" << endl;
	}
	string m_Name;
	
	Phone m_Phone;


};

void test()
{
	Person p("張三", "IPhone X");
	cout << p.m_Name << "拿著" << p.m_Phone.m_Pname << endl;
}



int main()
{
	test();
	system("pause");
	return 0;
}