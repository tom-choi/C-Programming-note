#pragma once //��ֹ�^�ļ����}����
#include <iostream>

using namespace std;
#include "worker.h"
class WorkerManager
{
public:
	//����
	WorkerManager();

	void show_menu();

	void ExitSystem();

	int m_EmpNum;
	bool m_FileisEmpty;
	Worker** m_EmpArray;

	//�����ļ�
	void save();
	
	//�xȡ�ļ�
	void init_Emp();

	//���ӆT��
	void Add_Emp();

	//�yӋ�˔�
	int get_EmpNum();

	//�@ʾ�T��
	void Show_Emp();

	//�h���T��
	void Del_Emp();

	//�z��T���Ƿ���ڣ������ڷ���-1
	int IsExist(int id);
	void IsExist_name(string name);

	//�޸ĆT��
	void Mod_Emp();

	//���҆T��
	void Find_Emp();

	//����T��
	void Sort_Emp();

	//��ՆT��
	void Clean_File();
	~WorkerManager();
};