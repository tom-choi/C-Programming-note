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
		m_age = 0;//��ʼ��
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
	arry.setName("����"); arry.setLover("AAA");
	cout << "������: " << arry.getName() << endl;
	cout << "���g��: " << arry.getage() << endl;
	cout << "���˞�: " << arry.getLover() << endl;
	return 0;
}