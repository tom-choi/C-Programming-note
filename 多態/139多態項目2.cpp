#include <iostream>
#include <string>

using namespace std;


//һ�N�ӿ��ж�N�͑B���ж��B
class AbstractDrinking
{
public:
	//��ˮ
	virtual void Boil() = 0;
	//�_��
	virtual void Brew() = 0;
	//����
	virtual void Pourincup() = 0;
	//����
	virtual void Putsomething() = 0;

	//�����Ʒ
	void makedrink()
	{
		Boil();
		Brew();
		Pourincup();
		Putsomething();
	}
};
class coffee : public AbstractDrinking
{
public:
	//��ˮ
	virtual void Boil()
	{
		cout << "��ˮ" << endl;
	}
	//�_��
	virtual void Brew()
	{
		cout << "�_��coffee......" << endl;
	}
	//�������
	virtual void Pourincup()
	{
		cout << "�������" << endl;
	}
	//����
	virtual void Putsomething()
	{
		cout << "����ţ�̺���" << endl;
	}
};
class Tea : public AbstractDrinking
{
public:
	//��ˮ
	virtual void Boil()
	{
		cout << "��ˮ" << endl;
	}
	//�_��
	virtual void Brew()
	{
		cout << "�_��Tea......" << endl;
	}
	//�������
	virtual void Pourincup()
	{
		cout << "�������" << endl;
	}
	//����
	virtual void Putsomething()
	{
		cout << "�������" << endl;
	}
};
void dowork(AbstractDrinking* abs)
{
	abs->makedrink();
	delete[]abs; //ጷ�
}
void test01()
{
	dowork(new coffee);
	cout << "------------" << endl;
	dowork(new Tea);
}


int main()
{
	test01();
	return 0;
}