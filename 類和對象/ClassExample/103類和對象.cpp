#include <iostream>
#include <string>

using namespace std;

class Person
{
public:

	void setName(string name)
	{
		m_name = name;

	}
	string getName()
	{
		return m_name;
	}
	string getLover()
	{
		return m_lover;
	}
	int getage()
	{
		m_age = 0;//初始化
		return m_age;
	}

	void setLover(string lover)
	{
		m_lover = lover;
	}




private:
	string m_name{};
	int m_age{};
	string m_lover{};
};






int main()
{
	Person arry;
	arry.setName("張三"); arry.setLover("AAA");
	cout << "姓名為: " << arry.getName() << endl;
	cout << "年齡為: " << arry.getage() << endl;
	cout << "情人為: " << arry.getLover() << endl;
	return 0;
}