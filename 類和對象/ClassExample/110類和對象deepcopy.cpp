#include <iostream>
#include <string>

using namespace std;

class Person {
public:
	int m_age{};
	int* m_height{};
	Person() {
		cout << "�o�����캯��" << endl;
	}
	Person(const Person &p)
	{
		cout << "Person copy �����{��" << endl;
		m_age = p.m_age;
		//m_height = p.m_height; ���g��Ĭ�Jʹ��
		m_height = new int(*p.m_height);
	}

	Person(int age,int height) 
	{
		cout << "�Ѕ����캯��" << endl;
		m_height = new int(height);
		m_age = age;
 	}
	~Person()
	{
		if (m_height != NULL)
		{
			delete[] m_height;
			m_height = NULL; //��ֹ���FҰָ�
		}
		cout << "Person����������" << endl;
	}
};

void test()
{
	Person p1(18,156);
	cout << "p1�����g��:" << p1.m_age << " p1����ߞ�:" << *p1.m_height << endl;
	Person p2(p1);
	cout << "p2�����g��:" << p2.m_age << " p2����ߞ�:" << *p2.m_height << endl;
}

int main()
{
	test();
	return 0;
}