#include <iostream>
#include <string>

using namespace std;

struct student
{
	string name;
	int num;
	char sex;
	int age;
};

class c_student
{
private:
	//����
	string name{};
	int num{};
	int age{};
	char sex{};

public:
	//�О�
	void print_name(int idx)
	{
		cout << "ݔ��W������: "; cin >> name;
		num = idx + 100; 
		cout << "ݔ��W�����g: "; cin >> age;
		cout << "ݔ��W���Ԅe: "; cin >> sex;
	}
	void show_name()
	{
		cout << "�W������: " << name << " �W̖: "<< num << " ���g: " << age << " �Ԅe: " << sex << endl;
	}
};



int main()
{
	c_student stuarray[10];
	for (int idx = 0; idx < 2; idx++)
	{
		cout << "�_ʼ��ӡ��" << (idx + 1) << "���W��" << endl;
		stuarray[idx].print_name(idx);
		cout << "��ɴ�ӡ��" << (idx + 1) << "���W��" << endl;
		system("pause");
		system("cls");
	}
	for (int idx = 0; idx < 2; idx++)
	{
		stuarray[idx].show_name();
	}
	return 0;
}