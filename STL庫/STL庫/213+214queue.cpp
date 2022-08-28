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

	//只要隊列不為空，查看隊列
	while (!q.empty())
	{
		cout << "隊頭元素:姓名: " << q.front().m_Name << " 年齡: " << q.front().m_Age << endl;
		cout << "隊尾元素:姓名: " << q.back().m_Name << " 年齡: " << q.back().m_Age << endl;
		q.pop();
	}

	cout << "隊列大小為: " << q.size() << endl;
}





int main()
{
	test01();
}