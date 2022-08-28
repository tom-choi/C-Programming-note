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
		worker.m_Name = "�T��";
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

		//����ID
		m.insert(make_pair(deptID, *it));
	}
}

void showWorkerByGroup(multimap<int, Worker>& m)
{
	cout << "~~~~~~~~~~~~���TA: " << endl;
	multimap<int,Worker>::iterator pos = m.find(CEHUA);
	int count = m.count(CEHUA); //���w�˔�
	for (int index = 0;pos != m.end() && index < count ; pos++,index++)
	{
		cout << "����: " << pos->second.m_Name << " ���Y: " << pos->second.m_Salary << endl;
	}

	cout << "~~~~~~~~~~~~~���TB: " << endl;
	pos = m.find(MEISHU);
	count = m.count(MEISHU); //���w�˔�
	for (int index = 0; pos != m.end() && index < count; pos++, index++)
	{
		cout << "����: " << pos->second.m_Name << " ���Y: " << pos->second.m_Salary << endl;
	}

	cout << "~~~~~~~~~~~~~���TC: " << endl;
	pos = m.find(YANFA);
	count = m.count(YANFA); //���w�˔�
	for (int index = 0; pos != m.end() && index < count; pos++, index++)
	{
		cout << "����: " << pos->second.m_Name << " ���Y: " << pos->second.m_Salary << endl;
	}
	cout << endl;
}

int main()
{
	//1.�����T��
	vector<Worker>vWorker;
	createWorker(vWorker);

	//2.�T���ֽM
	multimap<int,Worker>mWorker;
	setGroup(vWorker, mWorker);

	//3.�ֽM�ʾ
	showWorkerByGroup(mWorker);


	//for (vector<Worker>::const_iterator it = vWorker.begin(); it != vWorker.end(); it++)
	//{
	//	cout << "����: " << it->m_Name << " ���Y: " << it->m_Salary << endl;
	//}


}