#include <iostream>

//�ģ���гɆT���������r�C���{���A�Σ����·��ļ��o���xȡ
//��һ�N��ֱ�Ӱ���Դ�ļ�
//#include "180person.cpp"
//�ڶ��N:��.h ��.cpp����һ��׃��.hpp
#include "180ģ��person.hpp"
using namespace std;

//�ģ����ļ��������}�Լ���Q 
//template<class T1,class T2>
//class Person
//{
//public:
//	Person(T1 name, T2 age);
//
//	void showperson();
//
//	T1 m_Name;
//	T2 m_Age;
//};
//template<class T1, class T2>
//Person<T1, T2>::Person(T1 name, T2 age)
//{
//	this->m_Name = name;
//	this->m_Age = age;
//}
//
//template<class T1, class T2>
//void Person<T1, T2>::showperson()
//{
//	cout << "����: " << m_Name << " ���g: " << m_Age;
//}

void test01()
{
	Person<string, int>P("ALice",14);
	P.showperson();
}

int main()
{
	test01();
	return 0;
}