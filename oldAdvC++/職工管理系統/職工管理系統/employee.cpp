#include <iostream>
#include <string>
#include "employee.h"

using namespace std;

Employee::Employee(int id, string name,int diD)
{
	this->m_ID = id;
	this->m_Name = name;
	this->m_DeptmentID = diD;
}
void Employee::showinfo()
{
	cout << "����̖: " << this->m_ID
		<< "\t������: " << this->m_Name
		<< "\tλ: " << this->getDeptName()
		<< "\tλ؟: ��ɽ���o����΄�" << endl;
}
string Employee::getDeptName()
{
	return string("�T��");
}