#include "180Ä£°åperson.h"
template<class T1, class T2>
Person<T1, T2>::Person(T1 name, T2 age)
{
	this->m_Name = name;
	this->m_Age = age;
}

template<class T1, class T2>
void Person<T1, T2>::showperson()
{
	cout << "ÐÕÃû: " << m_Name << " Äêýg: " << m_Age;
}