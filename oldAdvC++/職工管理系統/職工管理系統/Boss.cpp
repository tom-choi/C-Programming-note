#include "Boss.h"

Boss::Boss(int id, string name, int diD)
{
	this->m_ID = id;
	this->m_Name = name;
	this->m_DeptmentID = diD;
}
void Boss::showinfo()
{
	cout << "職工編號: " << this->m_ID
		<< "\t職工姓名: " << this->m_Name
		<< "\t職位: " << this->getDeptName()
		<< "\t職位職責: 管理公司所有事務" << endl;
}
string Boss::getDeptName()
{
	return string("老板");
}