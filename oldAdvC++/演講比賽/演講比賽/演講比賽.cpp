#include <iostream>
using namespace std;
#include "speechManager.h"
#include <ctime>


int main() 
{
	srand((unsigned int)time(NULL));
	//創建對象
	SpeechManager sm;

	int choice = 0;

	//for (map<int, Speaker>::iterator it = sm.m_speaker.begin(); it != sm.m_speaker.end(); it++)
	//{
	//	cout << "選手編號: " << it->first << " 姓名: " << it->second.m_Name << " 分數: "<< it->second.m_Score[0] << endl;
	//}






	while (true)
	{
		sm.show_Menu();
		cout << "請輸入你的選擇：";
		cin >> choice;

		switch (choice)
		{
		case 1://開始比賽
			sm.startSpeech();
			break;
		case 2://查看演講比賽
			sm.showRecord();
			break;
		case 3://清空演講比賽
			sm.clearRecord();
			break;
		case 0:
			sm.exitSystem();
			break;
		default:
			system("cls");
			break;
		}
	}








	system("pause");
	return 0;
}
