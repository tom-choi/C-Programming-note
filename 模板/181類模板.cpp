#include <iostream>

using namespace std;

//提前知道
template<class T1, class T2>
class Person;

template<class T1, class T2>
void printperson2(Person<T1, T2>& p)
{
	cout << "類外姓名:" << p.m_name << "年齡: " << p.m_age << endl;
}
//

template<class T1,class T2>
class Person
{
public:
	//全局函數，類內實現
	friend void printperson1(Person<T1, T2>& p)
	{
		cout << "姓名:" << p.m_name << "年齡: " << p.m_age << endl;
	}
	//全局函數，類外實現
	//要加<>模板參數列表
	//如果全局函數，需要提前知道這個函數的存在
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