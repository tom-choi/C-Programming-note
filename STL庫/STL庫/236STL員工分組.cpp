#include <iostream>
#include <map>
#include <vector>
#include <Windows.h>
using namespace std;

#define CEHUA 0
#define MEISHU 1
#define YANFA 2


class Worker
{
public:
	string m_Name;
	int m_Salary;
};

void createWorker(vector<Worker>& v)
{
	
	srand(time(NULL));
	string nameseed = "ABCEDFGHIJ";
	for (int i = 0; i < 10; i++)
	{
		Worker worker;
		worker.m_Name = "員工";
		worker.m_Name += nameseed[i];

		worker.m_Salary = rand() % 10000 + 10000; // 10000 ~ 19999
		v.push_back(worker);
	}
}

void setGroup(vector<Worker>& v,multimap<int,Worker>&m)
{
	for (vector<Worker>::const_iterator it = v.begin(); it != v.end(); it++)
	{
		int deptID = int(rand() % 3);

		//插入ID
		m.insert(make_pair(deptID, *it));
	}
}

void showWorkerByGroup(multimap<int, Worker>& m)
{
	cout << "~~~~~~~~~~~~部門A: " << endl;
	multimap<int,Worker>::iterator pos = m.find(CEHUA);
	int count = m.count(CEHUA); //具體人數
	for (int index = 0;pos != m.end() && index < count ; pos++,index++)
	{
		cout << "姓名: " << pos->second.m_Name << " 工資: " << pos->second.m_Salary << endl;
	}

	cout << "~~~~~~~~~~~~~部門B: " << endl;
	pos = m.find(MEISHU);
	count = m.count(MEISHU); //具體人數
	for (int index = 0; pos != m.end() && index < count; pos++, index++)
	{
		cout << "姓名: " << pos->second.m_Name << " 工資: " << pos->second.m_Salary << endl;
	}

	cout << "~~~~~~~~~~~~~部門C: " << endl;
	pos = m.find(YANFA);
	count = m.count(YANFA); //具體人數
	for (int index = 0; pos != m.end() && index < count; pos++, index++)
	{
		cout << "姓名: " << pos->second.m_Name << " 工資: " << pos->second.m_Salary << endl;
	}
	cout << endl;
}

int main()
{
	//1.創建員工
	vector<Worker>vWorker;
	createWorker(vWorker);

	//2.員工分組
	multimap<int,Worker>mWorker;
	setGroup(vWorker, mWorker);

	//3.分組顥示
	showWorkerByGroup(mWorker);


	//for (vector<Worker>::const_iterator it = vWorker.begin(); it != vWorker.end(); it++)
	//{
	//	cout << "姓名: " << it->m_Name << " 工資: " << it->m_Salary << endl;
	//}


}