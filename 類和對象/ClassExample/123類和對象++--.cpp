#include <iostream>
#include <string>

using namespace std;

class MyIntetger
{
	friend ostream& operator<<(ostream& cout, MyIntetger& myint);
public:
	MyIntetger()
	{
		m_Num = 0;
	}
	
	//���d++�\��(ǰ)
	MyIntetger& operator++()
	{
		//���M�У���
		m_Num++;
		//���M�з�������
		return *this;
	}

	//���d++�\��(��) //ռλ����
	MyIntetger& operator++(int)
	{
		//��ӛ�
		MyIntetger temp = *this;
		//����ֵ
		m_Num++;
		//���ؼo� //�ȴ�������
		return temp;
	}
	MyIntetger& operator--()
	{
		m_Num--;
		return *this;
	}
	MyIntetger& operator--(int)
	{
		MyIntetger temp = *this;
		m_Num--;
		return temp;
	}
private:
	int m_Num;


};

ostream& operator<<(ostream& cout, MyIntetger& myint)
{
	cout << myint.m_Num;
	return cout;
}



void test01()
{
	MyIntetger myint;

	cout << ++myint << endl;
}
void test02()
{
	MyIntetger myint_2;
	cout << myint_2++ << endl;
	cout << myint_2 << endl;
}
void test03()
{
	MyIntetger myint_3;
	cout << myint_3-- << endl;
	cout << myint_3 << endl;

}


int main()
{
	test03();
	return 0;
}