#include "workerManager.h"
#include "employee.h"
#include "Boss.h"
#include "manager.h"
#include <fstream>
#define FILENAME "empFile.txt"
WorkerManager::WorkerManager()
{
	//初始化
	this->m_EmpNum = 0;
	//this->m_EmpArray = 0;
	this->m_EmpArray = new Worker * [this->m_EmpNum];




	ifstream ifs;
	ifs.open(FILENAME, ios::in);
	if (!ifs.is_open())//文件不存在
	{
		/*cout << "!!!!文件不存在!!!!" << endl;*/
		this->m_EmpNum = 0;
		this->m_EmpArray = NULL;
		this->m_FileisEmpty = false;
		ifs.close();
		return;
	}
	char ch;
	ifs >> ch;
	if (ifs.eof()) //文件為空
	{
		/*cout << "文件為空!" << endl;*/
		this->m_EmpNum = 0;
		this->m_EmpArray = NULL;
		//初始化文件是否為空
		this->m_FileisEmpty = true;
		ifs.close();
		return;
	}

	//文件存在，且有數據
	int num = this->get_EmpNum();
	/*cout << "職工人數為: " << num << endl;*/
	this->m_EmpNum = num;

	this->m_EmpArray = new Worker * [this->m_EmpNum];
	this->init_Emp();

	//Testing
	//for (int i = 0; i < this->m_EmpNum; i++)
	//{
	//	cout << "職工編號: " << this->m_EmpArray[i]->m_ID
	//		 << " 姓名: " << this->m_EmpArray[i]->m_Name
	//		 << " 部門編號: " << this->m_EmpArray[i]->m_DeptmentID << endl;
	//}
}

void WorkerManager::show_menu()
{
	cout << "*****************************" << endl;
	cout << "*** 歡迎使用職工管理系統! ***" << endl;
	cout << "******* 0.退出管理程序 ******" << endl;
	cout << "******* 1.增加職工信息 ******" << endl;
	cout << "******* 2.顯示職工信息 ******" << endl;
	cout << "******* 3.刪除職工信息 ******" << endl;
	cout << "******* 4.修改職工信息 ******" << endl;
	cout << "******* 5.查找職工信息 ******" << endl;
	cout << "******* 6.按照編號排序 ******" << endl;
	cout << "******* 7.清空所有文檔 ******" << endl;
	cout << "*****************************" << endl;
	cout << endl;
}

void WorkerManager::ExitSystem()
{
	cout << "歡迎下次使用" << endl;
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
	cout << "輸入要增加職工的數量" << endl;
	int addNum = 0;
	cin >> addNum;
	if (addNum > 0)
	{
		int newsize = this->m_EmpNum + addNum;
		
		//開新空間
		Worker ** newSpace = new Worker* [newsize];

		//將原來空間下數據
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
			int dSelect; //部門
			cout << "請輸入第 " << i + 1 << " 個新職工編號" << endl;
			cin >> id;

			cout << "請輸入第 " << i + 1 << " 個新職工姓名" << endl;
			cin >> name;

			cout << "請選擇該員工職位" << endl;
			cout << "1.普通員工" << endl;
			cout << "2.經理" << endl;
			cout << "3.老板" << endl;
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
			//將職責存入數組
			newSpace[this->m_EmpNum + i] = worker;
		}
		//釋放
		delete[]this->m_EmpArray;

		//更新新空間指向
		this->m_EmpArray = newSpace;

		//更新新的職工人數
		this->m_EmpNum = newsize;

		//更新職工不為空
		this->m_FileisEmpty = false;

		//保存到文件中
		this->save();

		cout << "成功增加" << addNum << "名新員工" << endl;
	}
	else
	{
		cout << "輸入有誤" << endl;
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
		//紀錄人數
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
		//存放在數組中
		this->m_EmpArray[index] = worker;
		index++;
	}
	ifs.close();
}

void WorkerManager::Show_Emp()
{
	if (this->m_FileisEmpty)
	{
		cout << "文件為空或不存在!" << endl;
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
		cout << "文件為空或不存在!" << endl;
	}
	else
	{
		cout << "輸入想要刪除的職工編號" << endl;
		int id = 0;
		cin >> id;

		int index = this->IsExist(id);
		if (index != -1)
		{
			for (int i = index; i < (this->m_EmpNum - 1); i++)
			{
				this->m_EmpArray[i] = this->m_EmpArray[i + 1];
			}
			
			this->m_EmpNum--;//更新數組中紀錄人員個數
			this->save();
			cout << "刪除成功!" << endl;
		}
		else
		{
			cout << "查無此人" << endl;
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
			cout << "查找成功，查找如下: " << endl;
			this->m_EmpArray[i]->showinfo();
			flag = true;
		}
	}
	if (flag == false)
	{
		cout << "查無此人" << endl;
	}
}

void WorkerManager::Mod_Emp()
{
	if (this->m_FileisEmpty)
	{
		cout << "文件為空或不存在!" << endl;
	}
	else
	{
		cout << "輸入想要修改的職工編號" << endl;
		int id = 0;
		cin >> id;

		int ret = this->IsExist(id);
		if (ret != -1)
		{
			delete this->m_EmpArray[ret];

			int newid = 0;
			string newName = "";
			int dSelect = 0;

			cout << "查到" << id << "號員工，請輸入新職工號: " << endl;
			cin >> newid;

			cout << "輸入新姓名" << endl;
			cin >> newName;

			cout << "請選擇該員工職位" << endl;
			cout << "1.普通員工" << endl;
			cout << "2.經理" << endl;
			cout << "3.老板" << endl;
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
			//將職責存入數組
			this->m_EmpArray[ret] = worker;

			cout << "修改成功!" << endl;
			this->save();
		}
		else
		{
			cout << "修改失敗，查無此人" << endl;
		}
	}
	system("pause");
	system("cls");
}

void WorkerManager::Find_Emp()
{
	if (this->m_FileisEmpty)
	{
		cout << "文件為空或不存在!" << endl;
	}
	else
	{
		cout << "輸入要查找的方式" << endl;
		cout << "1.職工編號" << endl;
		cout << "2.職工姓名" << endl;
		
		int select = 0;
		cin >> select;

		if (select == 1)
		{
			cout << "輸入想要查找的職工編號" << endl;
			int id = 0;
			cin >> id;
			int index = this->IsExist(id);
			if (index != -1)
			{
				cout << "查找成功，查找如下: " << endl;
				this->m_EmpArray[index]->showinfo();
			}
			else
			{
				cout << "查無此人" << endl;
			}
		}
		else if (select == 2)
		{
			cout << "輸入想要查找的職工姓名" << endl;
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
		cout << "文件為空或不存在!" << endl;
		system("pause");
		system("cls");
	}
	else
	{
		cout << "請選擇排序方式" << endl;
		cout << "1.按職工編號進行升序" << endl;
		cout << "2.按職工編號進行降序" << endl;

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

			//最小值or最大值 是不是最小或最大
			if (i != min0rMax)
			{
				Worker* temp = this->m_EmpArray[i];
				this->m_EmpArray[i] = this->m_EmpArray[min0rMax];
				this->m_EmpArray[min0rMax] = temp;
			}
		}
		cout << "排序完成，結果如下: " << endl;
		this->save();
		this->Show_Emp();
	}
}

void WorkerManager::Clean_File()
{
	cout << "確認清空?" << endl;
	cout << "1. 確定" << endl;
	cout << "2. 返回" << endl;

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
		cout << "清空成功!" << endl;
	}
	system("pause");
	system("cls");
}

WorkerManager::~WorkerManager()
{
	if (this->m_EmpArray != NULL)
	{
		//把每一個元素置空
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
