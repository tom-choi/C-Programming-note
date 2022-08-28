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
	//左移重載
	//void operator<<(Person& p)
	//{
		
	//}
};

//只能使用全局函數左移重載
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
