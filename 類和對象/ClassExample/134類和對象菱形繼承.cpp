#include <iostream>
#include <string>

using namespace std;

//̓���
class Animal
{
public:
	int m_Age;

};

//̓�^��
//׃��vbptr (̓�e�۱�)
//v - virtual
//b - base
//ptr - pointer

class sheep : virtual public Animal
{

};

class eamal : virtual public Animal
{
	

};

class alpaca : public sheep, public eamal
{

};

void test01()
{
	alpaca st;
	st.sheep::m_Age = 18;
	st.eamal::m_Age = 29;
	//�����^�У���Ҫ��������
	cout << "st.sheep::m_Age = " << st.sheep::m_Age << endl;
	cout << "st.eamal::m_Age = " << st.eamal::m_Age << endl;
}



int main()
{
	test01();

}