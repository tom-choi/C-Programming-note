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


	//菜單功能
	void show_Menu();

	//清空
	void initSpeech();
	//創建
	void createSpeaker();
	void startSpeech();
	////打印
	//void myprint(T t);
	//抽籤
	void speechdraw();

	//比賽
	void speechContest();

	//退出系統
	void exitSystem();

	//顯示比賽分數
	void showScore();

	//第一輪比賽
	vector<int>v1;
	//第二輪比賽
	vector<int>v2;
	vector<int>vVictory;

	//保存紀錄
	void saveRecord();

	//讀取紀錄
	void loadRecord();

	//顯示往屆分數
	void showRecord();

	//清空紀錄
	void clearRecord();

	//判斷文件是否為空
	bool fileisEmpty;

	//存放往屆紀錄信息
	map<int, vector<string>>m_Record;

	map<int, Speaker>m_speaker;

	int m_Index;

	~SpeechManager();
};