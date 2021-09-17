#include <iostream>
#include <string>

using namespace std;

//îÄ£°å
template<class NameType,class AgeType>
class Person
{
public:
	Person(NameType Name, AgeType Age)
	{
		this->m_Name = Name;
		this->m_Age = Age;
	}

	NameType m_Name;
	AgeType m_Age;

	void ShowPerson()
	{
		cout << "Name: " << m_Name << endl <<"Age: " << m_Age;
	}
};

int main()
{
	Person<string,int> p1("Tom", 18);
	p1.ShowPerson();
}