#include <iostream>
#include <string>

using namespace std;

#pragma pack(push)
#pragma pack(1)//����ȴ挦�R
class Cstudent
{
public:
	char name[50];
	char sex;
	int num;
	int age;
	//rule1:Ĭ�J�ȴ挦�R
	//rule2:�������ɆT�����ăȴ���g
	void print_name()
	{
		cout << "name = " << name << endl;
		//�����Ȳ��\�О�:cout << "name = " << this->name << endl;
	}
	
	//ʲô�������Ҫ�ֶ�����this:
	void set_age(int age)
	{
		//this->age 
		this->age = age;
	}
};
#pragma pack (pop)

int main()
{
	int a = 5; // ����4���ֹ����g
	Cstudent stu_1, stu_2;
	strcpy_s(stu_1.name, "zhang_san"); // �ȴ���g�̶�
	strcpy_s(stu_2.name, "lisi"); //Ĭ�Jʹ��thisָ�
	stu_1.print_name();
	stu_2.print_name();
	
	cout << sizeof(a) << endl; // ����4���ֹ����g
	cout << sizeof(stu_1) << endl; //�����˶��ق��ֹ����g?
	return 0;
}