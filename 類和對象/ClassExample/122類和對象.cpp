#include <iostream>
#include <string>

using namespace std;

class Person
{
public:
	Person(int a, int b)
	{
		m_A = a;
		m_B = b;
	}
	friend ostream& operator<<(ostream& cout, Person& p);
private:
	int m_A;
	int m_B;
	//�������d
	//void operator<<(Person& p)
	//{
		
	//}
};

//ֻ��ʹ��ȫ�ֺ����������d
//ostream & cout

ostream & operator<<(ostream &cout,Person &p)
{
	cout << "m_A = " << p.m_A << endl << "m_B = " << p.m_B << endl;
	return cout;
}

void test()
{
	Person p(30,10);
	cout << p << endl;
}



int main()
{
	test();


	return 0;
}
