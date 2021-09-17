#include <iostream>

using namespace std;

//��ǰ֪��
template<class T1, class T2>
class Person;

template<class T1, class T2>
void printperson2(Person<T1, T2>& p)
{
	cout << "�������:" << p.m_name << "���g: " << p.m_age << endl;
}
//

template<class T1,class T2>
class Person
{
public:
	//ȫ�ֺ�����Ȍ��F
	friend void printperson1(Person<T1, T2>& p)
	{
		cout << "����:" << p.m_name << "���g: " << p.m_age << endl;
	}
	//ȫ�ֺ�������⌍�F
	//Ҫ��<>ģ�兢���б�
	//���ȫ�ֺ�������Ҫ��ǰ֪���@�������Ĵ���
	friend void printperson2<>(Person<T1, T2>& p);
public:
	Person(T1 name, T2 age)
	{
		this->m_name = name;
		this->m_age = age;
	}
private:
	T1 m_name;
	T2 m_age;
};

void test01()
{
	Person<string, int>p("Tom", 18);
	printperson2(p);

}

int main()
{
	test01();
}