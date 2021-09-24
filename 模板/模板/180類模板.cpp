#include <iostream>

//類模板中成員函數創建時機為調用階段，導致分文件無法讀取
//第一種；直接包含源文件
//#include "180person.cpp"
//第二種:將.h 和.cpp放在一起變成.hpp
#include "180模板person.hpp"
using namespace std;

//類模板分文件編寫問題以及解決 
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
//	cout << "姓名: " << m_Name << " 年齡: " << m_Age;
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