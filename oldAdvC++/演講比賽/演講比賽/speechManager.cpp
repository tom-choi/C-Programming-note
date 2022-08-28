#include "speechManager.h"

SpeechManager::SpeechManager()
{
	//初始化容器
	this->initSpeech();

	//創建12名選手
	this->createSpeaker();

	//加載csv
	this->loadRecord();
}

void SpeechManager::show_Menu()
{
	cout << "********************************" << endl;
	cout << "********歡迎參加演講比賽********" << endl;
	cout << "******** 1.開始演講比賽 ********" << endl;
	cout << "******** 2.查看演講比賽 ********" << endl;
	cout << "******** 3.清空演講比賽 ********" << endl;
	cout << "******** 0.退出演講比賽 ********" << endl;
	cout << "********************************" << endl;
	cout << endl;
}

void SpeechManager::exitSystem()
{
	cout << "歡迎下次使用" << endl;
	system("pause");
	exit(0);
}

void SpeechManager::initSpeech()
{
	this->v1.clear();
	this->v2.clear();
	this->vVictory.clear();
	this->m_speaker.clear();

	this->m_Index = 1;

	//初始化紀錄容器
	this->m_Record.clear();
}

void SpeechManager::createSpeaker()
{
	string nameseed = "ABCDEFGHIJKL";
	for (int i = 0; i < nameseed.size(); i++)
	{
		string name = "選手";
		name += nameseed[i];

		Speaker sp;
		sp.m_Name = name;

		for (int j = 0; j < 2; j++)
		{
			sp.m_Score[j] = 0;
		}

		//創建選手編號
		this->v1.push_back(i + 10001);

		this->m_speaker.insert(make_pair(i + 10001, sp));
	}
}

void SpeechManager::speechContest()
{
	cout << "------------第<<" << this->m_Index << ">>輪比賽正式開始---------" << endl;

	//準備臨時容器
	multimap<double, int, greater<double>> groupScore;

	int num = 0; //紀錄人員個數



	vector<int>v_Src;
	if (this->m_Index == 1)
	{
		v_Src = v1;
	}
	else
	{
		v_Src = v2;
	}

	for (vector<int>::iterator it = v_Src.begin(); it != v_Src.end(); it++)
	{
		num++;
		deque<double>d;
		for (int i = 0; i < 10; i++)
		{
			double score = (rand() % 401 + 600) / 10.f;
			//cout << score << ' ';
			d.push_back(score);
		}
		//cout << endl;
		
		sort(d.begin(), d.end(),greater<double>());
		d.pop_front();//不要最高分
		d.pop_back();//不要最低分

		double sum = accumulate(d.begin(), d.end(), 0.0f);
		double avg = sum / (double)d.size();

		//打印平均分
		//cout << "編號: " << *it << " 姓名: " << this->m_speaker[*it].m_Name << " 獲取平均分: " << avg;

		//將平均分放入到map容器中
		this->m_speaker[*it].m_Score[this->m_Index - 1] = avg;

		//將打分分數放入mutilmap容器中
		groupScore.insert(make_pair(avg, *it)); // key為得分

		//每6人取出三名
		if (num % 6 == 0)
		{
			cout << "第" << num / 6 << "小組比賽名次: " << endl;
			for (multimap<double, int, greater<double>>::iterator it = groupScore.begin(); it != groupScore.end(); it++)
			{
				cout << "編號: " << it->second << " 姓名: " << this->m_speaker[it->second].m_Name << " 成績: "
					<< this->m_speaker[it->second].m_Score[this->m_Index - 1] << endl;
			}

			//取前三名
			int count = 0;
			for (multimap<double, int, greater<double>>::iterator it = groupScore.begin(); it != groupScore.end() && count < 3; it++,count++)
			{
				if (this->m_Index == 1)
				{
					v2.push_back((*it).second);
				}
				else
				{
					vVictory.push_back((*it).second);
				}
			}
			groupScore.clear(); //清空
		}
	}
	cout << "------------第<<" << this->m_Index << ">>輪比賽正式完畢---------" << endl;
	system("pause");
}

void SpeechManager::showScore()
{
	cout << "------------第<<" << this->m_Index << ">>晉級選手信息如下---------" << endl;

	vector<int>v;
	if (this->m_Index == 1)
	{
		v = v2;
	}
	else
	{
		v = vVictory;
	}

	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << "選手編號: " << *it << " 姓名: " << this->m_speaker[*it].m_Name <<
			" 得分: " << this->m_speaker[*it].m_Score[this->m_Index - 1] << endl;
	}
	cout << endl;

	system("pause");
	system("cls");
	this->show_Menu();
	
}

void SpeechManager::saveRecord()
{
	ofstream ofs;
	ofs.open("speech.csv", ios::out | ios::app);//使用追加方式寫文件

	//將每個的數據寫入文件中
	for (vector<int>::iterator it = vVictory.begin(); it != vVictory.end(); it++)
	{
		ofs << *it << "," << this->m_speaker[*it].m_Score[1] << ",";
	}
	ofs << endl;

	//關閉文件
	ofs.close();
	cout << "紀錄已經保存" << endl;

	//已經有紀錄了，文件不為空
	this->fileisEmpty = false;
}

void SpeechManager::startSpeech()
{
	//第一輪開始
	this->speechdraw();
	this->speechContest();

	this->showScore();

	//第二輪開始
	this->m_Index++;
	this->speechdraw();
	this->speechContest();

	this->showScore();
	//保存分數
	this->saveRecord();

	//重置比賽
	this->initSpeech();
	this->createSpeaker();
	this->loadRecord();


	cout << "本屆比賽完畢!" << endl;
	system("pause");
	system("cls");
}

void SpeechManager::loadRecord()
{
	ifstream ifs("speech.csv", ios::in); //讀文件
	if (!ifs.is_open())
	{
		this->fileisEmpty = true;
		//cout << "文件不存在" << endl;
		ifs.close();
		return;
	}
	
	char ch;
	ifs >> ch;
	if (ifs.eof())
	{
		//cout << "文件為空" << endl;
		this->fileisEmpty = true;
		ifs.close();
		return;
	}

	//文件不為空
	this->fileisEmpty = false;

	ifs.putback(ch); // 將上面讀取的單個文件放回來 
	
	string data;
	int index = 0;

	while (ifs >> data)
	{

		//cout << data << endl;
		vector<string>v;
		//截取
		int pos = -1; // 查到","位置的變量
		int start = 0;

		while (true)
		{

			pos = data.find(",", start);
			if (pos == -1)
			{
				//沒有找到情況
				break;
			}
			string temp = data.substr(start, pos - start);
			//cout << temp << endl;
			v.push_back(temp);
			start = pos + 1;
		} 
		this->m_Record.insert(make_pair(index,v));
		index++;
	}
	ifs.close();

	/*for (map<int, vector<string>>::iterator it = m_Record.begin(); it != m_Record.end(); it++)
	{
		cout << it->first << "冠軍編號: " << it->second[0] << " 分數： " << it->second[1] << endl;
	}*/
}

//抽籤
void SpeechManager::speechdraw()
{
	cout << "第<<" << this->m_Index << ">>輪比賽選手正在抽籤" << endl;
	cout << "--------------" << endl;
	cout << "抽籤後順序如下: " << endl;

	if (this->m_Index == 1)
	{
		//第一輪開始
		random_shuffle(v1.begin(), v1.end());
		for (vector<int>::iterator it = v1.begin(); it != v1.end(); it++)
		{
			cout << *it << ' ';
		}
		cout << endl;
	}
	else
	{
		//第二輪開始
		random_shuffle(v2.begin(), v2.end());
		for (vector<int>::iterator it = v2.begin(); it != v2.end(); it++)
		{
			cout << *it << ' ';
		}
		cout << endl;
	}
	
	cout << "------------------" << endl;
	system("pause");
	cout << endl;
}

void SpeechManager::showRecord()
{
	if (this->fileisEmpty)
	{
		cout << "文件不存在或者為空!!!" << endl;
	}
	else
	{
		for (int i = 0; i < this->m_Record.size(); i++)
		{
			cout << "第" << i + 1 << "屆 "
				<< "冠軍編號: " << this->m_Record[i][0]
				<< " 得分: " << this->m_Record[i][1]
				<< " 亞軍編號: " << this->m_Record[i][2]
				<< " 得分: " << this->m_Record[i][3]
				<< " 季軍編號: " << this->m_Record[i][4]
				<< " 得分: " << this->m_Record[i][5] << endl;
		}
	}
	system("pause");
	system("cls");
}

void SpeechManager::clearRecord()
{
	cout << "確認清空?" << endl;
	cout << "1. 確認" << endl;
	cout << "2. 返回" << endl;

	int select = 0;

	cin >> select;

	if (select == 1)
	{
		ofstream ofs("speech.csv", ios::trunc);
		ofs.close();

		//重置比賽
		this->initSpeech();
		this->createSpeaker();
		this->loadRecord();

		cout << "清空成功!" << endl;
	}
	system("pause");
	system("cls");
}

//析構函數
SpeechManager::~SpeechManager()
{

}