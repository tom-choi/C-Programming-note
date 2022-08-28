#include "workerManager.h"
#include "employee.h"
#include "Boss.h"
#include "manager.h"
#include <fstream>
#define FILENAME "empFile.txt"
WorkerManager::WorkerManager()
{
	//��ʼ��
	this->m_EmpNum = 0;
	//this->m_EmpArray = 0;
	this->m_EmpArray = new Worker * [this->m_EmpNum];




	ifstream ifs;
	ifs.open(FILENAME, ios::in);
	if (!ifs.is_open())//�ļ�������
	{
		/*cout << "!!!!�ļ�������!!!!" << endl;*/
		this->m_EmpNum = 0;
		this->m_EmpArray = NULL;
		this->m_FileisEmpty = false;
		ifs.close();
		return;
	}
	char ch;
	ifs >> ch;
	if (ifs.eof()) //�ļ����
	{
		/*cout << "�ļ����!" << endl;*/
		this->m_EmpNum = 0;
		this->m_EmpArray = NULL;
		//��ʼ���ļ��Ƿ���
		this->m_FileisEmpty = true;
		ifs.close();
		return;
	}

	//�ļ����ڣ����Д���
	int num = this->get_EmpNum();
	/*cout << "���˔���: " << num << endl;*/
	this->m_EmpNum = num;

	this->m_EmpArray = new Worker * [this->m_EmpNum];
	this->init_Emp();

	//Testing
	//for (int i = 0; i < this->m_EmpNum; i++)
	//{
	//	cout << "����̖: " << this->m_EmpArray[i]->m_ID
	//		 << " ����: " << this->m_EmpArray[i]->m_Name
	//		 << " ���T��̖: " << this->m_EmpArray[i]->m_DeptmentID << endl;
	//}
}

void WorkerManager::show_menu()
{
	cout << "*****************************" << endl;
	cout << "*** �gӭʹ��������ϵ�y! ***" << endl;
	cout << "******* 0.�˳�������� ******" << endl;
	cout << "******* 1.��������Ϣ ******" << endl;
	cout << "******* 2.�@ʾ����Ϣ ******" << endl;
	cout << "******* 3.�h������Ϣ ******" << endl;
	cout << "******* 4.�޸�����Ϣ ******" << endl;
	cout << "******* 5.��������Ϣ ******" << endl;
	cout << "******* 6.���վ�̖���� ******" << endl;
	cout << "******* 7.��������ęn ******" << endl;
	cout << "*****************************" << endl;
	cout << endl;
}

void WorkerManager::ExitSystem()
{
	cout << "�gӭ�´�ʹ��" << endl;
	system("pause");
	system("cls");
}

void WorkerManager::save()
{
	ofstream ofs;
	ofs.open(FILENAME, ios::out);
	
	for (int i = 0; i < this->m_EmpNum; i++)
	{
		ofs << this->m_EmpArray[i]->m_ID << " "
			<< this->m_EmpArray[i]->m_Name << " "
			<< this->m_EmpArray[i]->m_DeptmentID << endl;
	}
	ofs.close();
}


void WorkerManager::Add_Emp()
{
	cout << "ݔ��Ҫ�������Ĕ���" << endl;
	int addNum = 0;
	cin >> addNum;
	if (addNum > 0)
	{
		int newsize = this->m_EmpNum + addNum;
		
		//�_�¿��g
		Worker ** newSpace = new Worker* [newsize];

		//��ԭ����g����
		if (this->m_EmpArray != NULL)
		{
			for (int i = 0; i < this->m_EmpNum; i++)
			{
				newSpace[i] = this->m_EmpArray[i];
			}
		}
		for (int i = 0; i < addNum; i++)
		{
			int id;
			string name;
			int dSelect; //���T
			cout << "Ոݔ��� " << i + 1 << " ��������̖" << endl;
			cin >> id;

			cout << "Ոݔ��� " << i + 1 << " ����������" << endl;
			cin >> name;

			cout << "Ո�x��ԓ�T��λ" << endl;
			cout << "1.��ͨ�T��" << endl;
			cout << "2.����" << endl;
			cout << "3.�ϰ�" << endl;
			cin >> dSelect;

			Worker* worker = NULL;
			switch (dSelect)
			{
			case 1:
				worker = new Employee(id, name, 1);
				break;
			case 2:
				worker = new Manager(id, name, 2);
				break;
			case 3:
				worker = new Boss(id, name, 3);
				break;
			default:
				break;
			}
			//��؟���딵�M
			newSpace[this->m_EmpNum + i] = worker;
		}
		//ጷ�
		delete[]this->m_EmpArray;

		//�����¿��gָ��
		this->m_EmpArray = newSpace;

		//�����µ����˔�
		this->m_EmpNum = newsize;

		//�����������
		this->m_FileisEmpty = false;

		//���浽�ļ���
		this->save();

		cout << "�ɹ�����" << addNum << "���T��" << endl;
	}
	else
	{
		cout << "ݔ�����`" << endl;
	}
	system("pause");
	system("cls");
}

int WorkerManager::get_EmpNum()
{
	ifstream ifs;
	ifs.open(FILENAME, ios::in);

	int id;
	string name;
	int did;

	int num = 0;

	while (ifs >> id && ifs >> name && ifs >> did)
	{
		//�o��˔�
		num++;
	}
	ifs.close();

	return num;
}

void WorkerManager::init_Emp()
{
	ifstream ifs;
	ifs.open(FILENAME, ios::in);
	
	int id;
	string name;
	int did;

	int index = 0;
	while (ifs >> id && ifs >> name && ifs >> did)
	{
		Worker* worker = NULL;

		if (did == 1)
		{
			worker = new Employee(id, name, did);
		}
		else if (did == 2)
		{
			worker = new Manager(id, name, did);
		}
		else
		{
			worker = new Boss(id, name, did);
		}
		//����ڔ��M��
		this->m_EmpArray[index] = worker;
		index++;
	}
	ifs.close();
}

void WorkerManager::Show_Emp()
{
	if (this->m_FileisEmpty)
	{
		cout << "�ļ���ջ򲻴���!" << endl;
	}
	else
	{
		for (int i = 0; i < this->m_EmpNum; i++)
		{
			this->m_EmpArray[i]->showinfo();
		}
	}
	system("pause");
	system("cls");
}

void WorkerManager::Del_Emp()
{
	if (this->m_FileisEmpty)
	{
		cout << "�ļ���ջ򲻴���!" << endl;
	}
	else
	{
		cout << "ݔ����Ҫ�h��������̖" << endl;
		int id = 0;
		cin >> id;

		int index = this->IsExist(id);
		if (index != -1)
		{
			for (int i = index; i < (this->m_EmpNum - 1); i++)
			{
				this->m_EmpArray[i] = this->m_EmpArray[i + 1];
			}
			
			this->m_EmpNum--;//�����M�мo��ˆT����
			this->save();
			cout << "�h���ɹ�!" << endl;
		}
		else
		{
			cout << "��o����" << endl;
		}
	}
	system("pause");
	system("cls");
}

int WorkerManager::IsExist(int id)
{
	int index = -1;
	for (int i = 0; i < this->m_EmpNum; i++)
	{
		if (this->m_EmpArray[i]->m_ID == id)
		{
			index = i;
			break;
		}
	}
	return index;
}

void WorkerManager::IsExist_name(string name)
{
	bool flag = false;

	for (int i = 0; i < this->m_EmpNum; i++)
	{
		if (this->m_EmpArray[i]->m_Name == name)
		{
			cout << "���ҳɹ�����������: " << endl;
			this->m_EmpArray[i]->showinfo();
			flag = true;
		}
	}
	if (flag == false)
	{
		cout << "��o����" << endl;
	}
}

void WorkerManager::Mod_Emp()
{
	if (this->m_FileisEmpty)
	{
		cout << "�ļ���ջ򲻴���!" << endl;
	}
	else
	{
		cout << "ݔ����Ҫ�޸ĵ�����̖" << endl;
		int id = 0;
		cin >> id;

		int ret = this->IsExist(id);
		if (ret != -1)
		{
			delete this->m_EmpArray[ret];

			int newid = 0;
			string newName = "";
			int dSelect = 0;

			cout << "�鵽" << id << "̖�T����Ոݔ������̖: " << endl;
			cin >> newid;

			cout << "ݔ��������" << endl;
			cin >> newName;

			cout << "Ո�x��ԓ�T��λ" << endl;
			cout << "1.��ͨ�T��" << endl;
			cout << "2.����" << endl;
			cout << "3.�ϰ�" << endl;
			cin >> dSelect;

			Worker* worker = NULL;
			switch (dSelect)
			{
			case 1:
				worker = new Employee(newid, newName, 1);
				break;
			case 2:
				worker = new Manager(newid, newName, 2);
				break;
			case 3:
				worker = new Boss(newid, newName, 3);
				break;
			default:
				break;
			}
			//��؟���딵�M
			this->m_EmpArray[ret] = worker;

			cout << "�޸ĳɹ�!" << endl;
			this->save();
		}
		else
		{
			cout << "�޸�ʧ������o����" << endl;
		}
	}
	system("pause");
	system("cls");
}

void WorkerManager::Find_Emp()
{
	if (this->m_FileisEmpty)
	{
		cout << "�ļ���ջ򲻴���!" << endl;
	}
	else
	{
		cout << "ݔ��Ҫ���ҵķ�ʽ" << endl;
		cout << "1.����̖" << endl;
		cout << "2.������" << endl;
		
		int select = 0;
		cin >> select;

		if (select == 1)
		{
			cout << "ݔ����Ҫ���ҵ�����̖" << endl;
			int id = 0;
			cin >> id;
			int index = this->IsExist(id);
			if (index != -1)
			{
				cout << "���ҳɹ�����������: " << endl;
				this->m_EmpArray[index]->showinfo();
			}
			else
			{
				cout << "��o����" << endl;
			}
		}
		else if (select == 2)
		{
			cout << "ݔ����Ҫ���ҵ�������" << endl;
			string name;
			cin >> name;
			IsExist_name(name);
		}
	}
	system("pause");
	system("cls");
}

void WorkerManager::Sort_Emp()
{
	if (this->m_FileisEmpty)
	{
		cout << "�ļ���ջ򲻴���!" << endl;
		system("pause");
		system("cls");
	}
	else
	{
		cout << "Ո�x������ʽ" << endl;
		cout << "1.������̖�M������" << endl;
		cout << "2.������̖�M�н���" << endl;

		int select = 0;
		cin >> select;

		for (int i = 0; i < this->m_EmpNum; i++)
		{
			int min0rMax = i;
			for (int j = i + 1; j < this->m_EmpNum; j++)
			{
				if (select == 1)
				{
					if (this->m_EmpArray[min0rMax]->m_ID > (this->m_EmpArray[j]->m_ID))
					{
						min0rMax = j;
					}
				}
				else
				{
					if (this->m_EmpArray[min0rMax]->m_ID < (this->m_EmpArray[j]->m_ID))
					{
						min0rMax = j;
					}
				}
			}

			//��Сֵor���ֵ �ǲ�����С�����
			if (i != min0rMax)
			{
				Worker* temp = this->m_EmpArray[i];
				this->m_EmpArray[i] = this->m_EmpArray[min0rMax];
				this->m_EmpArray[min0rMax] = temp;
			}
		}
		cout << "������ɣ��Y������: " << endl;
		this->save();
		this->Show_Emp();
	}
}

void WorkerManager::Clean_File()
{
	cout << "�_�J���?" << endl;
	cout << "1. �_��" << endl;
	cout << "2. ����" << endl;

	int select = 0;
	cin >> select;

	if (select == 1)
	{
		ofstream ofs(FILENAME, ios::trunc);
		ofs.close();
		if (this->m_EmpArray != NULL)
		{
			for (int i = 0; i < this->m_EmpNum; i++)
			{
				if (this->m_EmpArray[i] != NULL)
				{
					delete this->m_EmpArray[i];
				}
			}
			this->m_EmpNum = 0;
			delete[]this->m_EmpArray;
			this->m_EmpArray = NULL;
			this->m_FileisEmpty = true;
		}
		cout << "��ճɹ�!" << endl;
	}
	system("pause");
	system("cls");
}

WorkerManager::~WorkerManager()
{
	if (this->m_EmpArray != NULL)
	{
		//��ÿһ��Ԫ���ÿ�
		for (int i = 0; i < this->m_EmpNum; i++)
		{
			if (this->m_EmpArray[i] != NULL)
			{
				delete this->m_EmpArray[i];
			}
		}
		delete[] this->m_EmpArray;
		this->m_EmpArray = NULL;
	}
}
