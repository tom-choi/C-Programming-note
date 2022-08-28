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
	
	//重載++運算(前)
	MyIntetger& operator++()
	{
		//先進行＋＋
		m_Num++;
		//再進行返回引用
		return *this;
	}

	//重載++運算(後) //占位參數
	MyIntetger& operator++(int)
	{
		//先記錄
		MyIntetger temp = *this;
		//再增值
		m_Num++;
		//返回紀錄 //內存會被清除
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