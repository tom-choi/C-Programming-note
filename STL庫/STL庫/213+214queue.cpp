#include <iostream>
#include <queue>
using namespace std;

class Person
{
public:
	Person(string name, int age)
	{
		this->m_Name = name;
		this->m_Age = age;
	}
	string m_Name;
	int m_Age;
};






void test01()
{
	queue<Person>q;

	Person p1("tom", 18);
	Person p2("tom2", 10);
	Person p3("tom3", 14);
	Person p4("m1s4", 12);

	q.push(p1);
	q.push(p2);
	q.push(p3);
	q.push(p4);

	//ֻҪ��в���գ��鿴���
	while (!q.empty())
	{
		cout << "��^Ԫ��:����: " << q.front().m_Name << " ���g: " << q.front().m_Age << endl;
		cout << "�βԪ��:����: " << q.back().m_Name << " ���g: " << q.back().m_Age << endl;
		q.pop();
	}

	cout << "��д�С��: " << q.size() << endl;
}





int main()
{
	test01();
}