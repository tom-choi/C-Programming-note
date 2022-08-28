#include <iostream>
#include <string>

using namespace std;

class Person {
public:
	int m_age{};
	int* m_height{};
	Person() {
		cout << "無參構造函數" << endl;
	}
	Person(const Person &p)
	{
		cout << "Person copy 函數調用" << endl;
		m_age = p.m_age;
		//m_height = p.m_height; 編譯器默認使用
		m_height = new int(*p.m_height);
	}

	Person(int age,int height) 
	{
		cout << "有參構造函數" << endl;
		m_height = new int(height);
		m_age = age;
 	}
	~Person()
	{
		if (m_height != NULL)
		{
			delete[] m_height;
			m_height = NULL; //防止出現野指針
		}
		cout << "Person的析構函數" << endl;
	}
};

void test()
{
	Person p1(18,156);
	cout << "p1的年齡為:" << p1.m_age << " p1的身高為:" << *p1.m_height << endl;
	Person p2(p1);
	cout << "p2的年齡為:" << p2.m_age << " p2的身高為:" << *p2.m_height << endl;
}

int main()
{
	test();
	return 0;
}