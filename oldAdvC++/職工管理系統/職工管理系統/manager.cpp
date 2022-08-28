#include "manager.h"

Manager::Manager(int id, string name, int diD)
{
	this->m_ID = id;
	this->m_Name = name;
	this->m_DeptmentID = diD;
}
void Manager::showinfo()
{
	cout << "職工編號: " << this->m_ID
		<< "\t職工姓名: " << this->m_Name
		<< "\t職位: " << this->getDeptName()
		<< "\t職位職責: 完成老板給予的任務，下發任務給員工" << endl;
}
string Manager::getDeptName()
{
	return string("經理");
}