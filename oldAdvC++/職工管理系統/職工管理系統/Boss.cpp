#include "Boss.h"

Boss::Boss(int id, string name, int diD)
{
	this->m_ID = id;
	this->m_Name = name;
	this->m_DeptmentID = diD;
}
void Boss::showinfo()
{
	cout << "����̖: " << this->m_ID
		<< "\t������: " << this->m_Name
		<< "\tλ: " << this->getDeptName()
		<< "\tλ؟: ����˾������" << endl;
}
string Boss::getDeptName()
{
	return string("�ϰ�");
}