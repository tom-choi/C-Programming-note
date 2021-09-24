#include <iostream>

using namespace std;

template<class Nametype = string, class AgeType = int>
class Person
{
public:
	Person(Nametype name, AgeType age) :m_Age(age), m_Name(name){}

	Nametype m_Name;
	AgeType m_Age;
	void Showperson()
	{
		cout << "Name: " << this->m_Name << " age = " << this->m_Age << endl;
	}
};


int main()
{
	Person<> a("Tom", 18);
	a.Showperson();
}