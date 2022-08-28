#include <iostream>
#include <string>

using namespace std;

class Person
{
public:
	void showclassname()
	{
		cout << "this is Person class" << endl;
	}
	void showpersonage()
	{
		if (this == NULL)
		{
			return;
		}
		cout << "age = " << this->m_age << endl;
	}
	int m_age;
};

void test()
{
	Person* p = NULL;
	p->showclassname();
	p->showpersonage();
}




int main()
{
	
}