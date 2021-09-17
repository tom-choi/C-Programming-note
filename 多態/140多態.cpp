#include <iostream>
#include <string>

using namespace std;

class Animal
{
public:
	Animal()
	{
		cout << "Animal ���캯��" << endl;
	}
	virtual ~Animal()
	{
		cout << "Animal ��������" << endl;
	}
	//��̓����
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
		cout << *m_Name << "С؈���fԒ" << endl;
	}
	virtual ~Cat()
	{
		if (m_Name != NULL)
		{
			cout << "cat���������{��" << endl;
			m_Name = NULL;
		}
	}
};
void test01()
{
	Animal* animal = new Cat("Tom");
	animal->speak();
	//���ָ��������ĕr�򣬲����{�������������
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
			cout << "cat���������{��" << endl;
			delete[]m_Name;
			m_Name = NULL;
		}
	*/