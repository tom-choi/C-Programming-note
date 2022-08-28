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
	cout << "職工編號: " << this->m_ID
		<< "\t職工姓名: " << this->m_Name
		<< "\t職位: " << this->getDeptName()
		<< "\t職位職責: 完成經理給予的任務" << endl;
}
string Employee::getDeptName()
{
	return string("員工");
}