#include "manager.h"

Manager::Manager(int id, string name, int diD)
{
	this->m_ID = id;
	this->m_Name = name;
	this->m_DeptmentID = diD;
}
void Manager::showinfo()
{
	cout << "����̖: " << this->m_ID
		<< "\t������: " << this->m_Name
		<< "\tλ: " << this->getDeptName()
		<< "\tλ؟: ����ϰ�o����΄գ��°l�΄սo�T��" << endl;
}
string Manager::getDeptName()
{
	return string("����");
}