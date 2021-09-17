#include <iostream>
#include <string>

using namespace std;

class Animal
{
public:
	Animal()
	{
		cout << "Animal 構造函數" << endl;
	}
	virtual ~Animal()
	{
		cout << "Animal 析構函數" << endl;
	}
	//純虛函數
	virtual void speak() = 0;
};

class Cat : public Animal
{
public:
	string* m_Name;
	Cat(string name)
	{
		m_Name = new string(name);
	}
	virtual void speak()
	{
		cout << *m_Name << "小貓在說話" << endl;
	}
	virtual ~Cat()
	{
		if (m_Name != NULL)
		{
			cout << "cat析構函數調用" << endl;
			m_Name = NULL;
		}
	}
};
void test01()
{
	Animal* animal = new Cat("Tom");
	animal->speak();
	//父類指針在析構的時候，不會調用子類的析構函數
	delete[]animal;
}




int main()
{
	test01();
}
/*~Cat()
	{
		if (m_Name != NULL)
		{
			cout << "cat析構函數調用" << endl;
			delete[]m_Name;
			m_Name = NULL;
		}
	*/