#include <iostream>
#include <string>
#include <fstream>

using namespace std;

//typedef struct LNOode
//{
//	int data;
//	LNOode* next;
//}*LinkList;

//Ios::in


void test01()
{
	//1.����������
	ofstream ofs;
	//2.ָ�����_��ʽ
	ofs.open("test.txt",ios::out);

	//3.������
	ofs << "����:����" << endl;
	ofs << "�Ԅe:��" << endl;
	ofs << "���g:18" << endl;
	
	ofs.close();
}



int main()
{
	test01();
}