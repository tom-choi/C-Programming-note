#pragma once //防止頭文件重複包含
#include <iostream>

using namespace std;
#include "worker.h"
class WorkerManager
{
public:
	//構造
	WorkerManager();

	void show_menu();

	void ExitSystem();

	int m_EmpNum;
	bool m_FileisEmpty;
	Worker** m_EmpArray;

	//保存文件
	void save();
	
	//讀取文件
	void init_Emp();

	//增加員工
	void Add_Emp();

	//統計人數
	int get_EmpNum();

	//顯示員工
	void Show_Emp();

	//刪除員工
	void Del_Emp();

	//檢查員工是否存在，不存在返回-1
	int IsExist(int id);
	void IsExist_name(string name);

	//修改員工
	void Mod_Emp();

	//查找員工
	void Find_Emp();

	//排序員工
	void Sort_Emp();

	//清空員工
	void Clean_File();
	~WorkerManager();
};