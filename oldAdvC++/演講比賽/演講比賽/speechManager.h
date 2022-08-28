#pragma once
#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
#include <deque>
#include "Speaker.h"
#include <functional>
#include <numeric>
#include <fstream>
using namespace std;

class SpeechManager
{
public:
	SpeechManager();


	//�ˆι���
	void show_Menu();

	//���
	void initSpeech();
	//����
	void createSpeaker();
	void startSpeech();
	////��ӡ
	//void myprint(T t);
	//��`
	void speechdraw();

	//��ِ
	void speechContest();

	//�˳�ϵ�y
	void exitSystem();

	//�@ʾ��ِ�֔�
	void showScore();

	//��һ݆��ِ
	vector<int>v1;
	//�ڶ�݆��ِ
	vector<int>v2;
	vector<int>vVictory;

	//����o�
	void saveRecord();

	//�xȡ�o�
	void loadRecord();

	//�@ʾ���÷֔�
	void showRecord();

	//��ռo�
	void clearRecord();

	//�Д��ļ��Ƿ���
	bool fileisEmpty;

	//������üo���Ϣ
	map<int, vector<string>>m_Record;

	map<int, Speaker>m_speaker;

	int m_Index;

	~SpeechManager();
};