#include <iostream>
#include <string>

using namespace std;

//虛基類
class Animal
{
public:
	int m_Age;

};

//虛繼承
//變成vbptr (虛積累表)
//v - virtual
//b - base
//ptr - pointer

class sheep : virtual public Animal
{

};

class eamal : virtual public Animal
{
	

};

class alpaca : public sheep, public eamal
{

};

void test01()
{
	alpaca st;
	st.sheep::m_Age = 18;
	st.eamal::m_Age = 29;
	//菱形繼承，需要加作用域
	cout << "st.sheep::m_Age = " << st.sheep::m_Age << endl;
	cout << "st.eamal::m_Age = " << st.eamal::m_Age << endl;
}



int main()
{
	test01();

}