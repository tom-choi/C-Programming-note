#include "speechManager.h"

SpeechManager::SpeechManager()
{
	//��ʼ������
	this->initSpeech();

	//����12���x��
	this->createSpeaker();

	//���dcsv
	this->loadRecord();
}

void SpeechManager::show_Menu()
{
	cout << "********************************" << endl;
	cout << "********�gӭ�������v��ِ********" << endl;
	cout << "******** 1.�_ʼ���v��ِ ********" << endl;
	cout << "******** 2.�鿴���v��ِ ********" << endl;
	cout << "******** 3.������v��ِ ********" << endl;
	cout << "******** 0.�˳����v��ِ ********" << endl;
	cout << "********************************" << endl;
	cout << endl;
}

void SpeechManager::exitSystem()
{
	cout << "�gӭ�´�ʹ��" << endl;
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

	//��ʼ���o�����
	this->m_Record.clear();
}

void SpeechManager::createSpeaker()
{
	string nameseed = "ABCDEFGHIJKL";
	for (int i = 0; i < nameseed.size(); i++)
	{
		string name = "�x��";
		name += nameseed[i];

		Speaker sp;
		sp.m_Name = name;

		for (int j = 0; j < 2; j++)
		{
			sp.m_Score[j] = 0;
		}

		//�����x�־�̖
		this->v1.push_back(i + 10001);

		this->m_speaker.insert(make_pair(i + 10001, sp));
	}
}

void SpeechManager::speechContest()
{
	cout << "------------��<<" << this->m_Index << ">>݆��ِ��ʽ�_ʼ---------" << endl;

	//�ʂ��R�r����
	multimap<double, int, greater<double>> groupScore;

	int num = 0; //�o��ˆT����



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
		d.pop_front();//��Ҫ��߷�
		d.pop_back();//��Ҫ��ͷ�

		double sum = accumulate(d.begin(), d.end(), 0.0f);
		double avg = sum / (double)d.size();

		//��ӡƽ����
		//cout << "��̖: " << *it << " ����: " << this->m_speaker[*it].m_Name << " �@ȡƽ����: " << avg;

		//��ƽ���ַ��뵽map������
		this->m_speaker[*it].m_Score[this->m_Index - 1] = avg;

		//����ַ֔�����mutilmap������
		groupScore.insert(make_pair(avg, *it)); // key��÷�

		//ÿ6��ȡ������
		if (num % 6 == 0)
		{
			cout << "��" << num / 6 << "С�M��ِ����: " << endl;
			for (multimap<double, int, greater<double>>::iterator it = groupScore.begin(); it != groupScore.end(); it++)
			{
				cout << "��̖: " << it->second << " ����: " << this->m_speaker[it->second].m_Name << " �ɿ�: "
					<< this->m_speaker[it->second].m_Score[this->m_Index - 1] << endl;
			}

			//ȡǰ����
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
			groupScore.clear(); //���
		}
	}
	cout << "------------��<<" << this->m_Index << ">>݆��ِ��ʽ�ꮅ---------" << endl;
	system("pause");
}

void SpeechManager::showScore()
{
	cout << "------------��<<" << this->m_Index << ">>�x���x����Ϣ����---------" << endl;

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
		cout << "�x�־�̖: " << *it << " ����: " << this->m_speaker[*it].m_Name <<
			" �÷�: " << this->m_speaker[*it].m_Score[this->m_Index - 1] << endl;
	}
	cout << endl;

	system("pause");
	system("cls");
	this->show_Menu();
	
}

void SpeechManager::saveRecord()
{
	ofstream ofs;
	ofs.open("speech.csv", ios::out | ios::app);//ʹ��׷�ӷ�ʽ���ļ�

	//��ÿ���Ĕ��������ļ���
	for (vector<int>::iterator it = vVictory.begin(); it != vVictory.end(); it++)
	{
		ofs << *it << "," << this->m_speaker[*it].m_Score[1] << ",";
	}
	ofs << endl;

	//�P�]�ļ�
	ofs.close();
	cout << "�o��ѽ�����" << endl;

	//�ѽ��мo��ˣ��ļ������
	this->fileisEmpty = false;
}

void SpeechManager::startSpeech()
{
	//��һ݆�_ʼ
	this->speechdraw();
	this->speechContest();

	this->showScore();

	//�ڶ�݆�_ʼ
	this->m_Index++;
	this->speechdraw();
	this->speechContest();

	this->showScore();
	//����֔�
	this->saveRecord();

	//���ñ�ِ
	this->initSpeech();
	this->createSpeaker();
	this->loadRecord();


	cout << "���ñ�ِ�ꮅ!" << endl;
	system("pause");
	system("cls");
}

void SpeechManager::loadRecord()
{
	ifstream ifs("speech.csv", ios::in); //�x�ļ�
	if (!ifs.is_open())
	{
		this->fileisEmpty = true;
		//cout << "�ļ�������" << endl;
		ifs.close();
		return;
	}
	
	char ch;
	ifs >> ch;
	if (ifs.eof())
	{
		//cout << "�ļ����" << endl;
		this->fileisEmpty = true;
		ifs.close();
		return;
	}

	//�ļ������
	this->fileisEmpty = false;

	ifs.putback(ch); // �������xȡ�Ć΂��ļ��Ż؁� 
	
	string data;
	int index = 0;

	while (ifs >> data)
	{

		//cout << data << endl;
		vector<string>v;
		//��ȡ
		int pos = -1; // �鵽","λ�õ�׃��
		int start = 0;

		while (true)
		{

			pos = data.find(",", start);
			if (pos == -1)
			{
				//�]���ҵ���r
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
		cout << it->first << "��܊��̖: " << it->second[0] << " �֔��� " << it->second[1] << endl;
	}*/
}

//��`
void SpeechManager::speechdraw()
{
	cout << "��<<" << this->m_Index << ">>݆��ِ�x�����ڳ�`" << endl;
	cout << "--------------" << endl;
	cout << "��`���������: " << endl;

	if (this->m_Index == 1)
	{
		//��һ݆�_ʼ
		random_shuffle(v1.begin(), v1.end());
		for (vector<int>::iterator it = v1.begin(); it != v1.end(); it++)
		{
			cout << *it << ' ';
		}
		cout << endl;
	}
	else
	{
		//�ڶ�݆�_ʼ
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
		cout << "�ļ������ڻ��ߞ��!!!" << endl;
	}
	else
	{
		for (int i = 0; i < this->m_Record.size(); i++)
		{
			cout << "��" << i + 1 << "�� "
				<< "��܊��̖: " << this->m_Record[i][0]
				<< " �÷�: " << this->m_Record[i][1]
				<< " ��܊��̖: " << this->m_Record[i][2]
				<< " �÷�: " << this->m_Record[i][3]
				<< " ��܊��̖: " << this->m_Record[i][4]
				<< " �÷�: " << this->m_Record[i][5] << endl;
		}
	}
	system("pause");
	system("cls");
}

void SpeechManager::clearRecord()
{
	cout << "�_�J���?" << endl;
	cout << "1. �_�J" << endl;
	cout << "2. ����" << endl;

	int select = 0;

	cin >> select;

	if (select == 1)
	{
		ofstream ofs("speech.csv", ios::trunc);
		ofs.close();

		//���ñ�ِ
		this->initSpeech();
		this->createSpeaker();
		this->loadRecord();

		cout << "��ճɹ�!" << endl;
	}
	system("pause");
	system("cls");
}

//��������
SpeechManager::~SpeechManager()
{

}