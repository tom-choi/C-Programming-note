#include <iostream>
#include <deque>
#include <vector>
#include <string>
#include <random>
#include <algorithm>
#include <time.h>
using namespace std;


class Person
{
public:
	Person(string name, int score)
	{
		this->m_name = name;
		this->m_score = score;
	}
	string m_name;
	int m_score;
};

void createPerson(vector<Person>& v)
{
	string nameseed = "ABCDE";
	for (int i = 0; i < 5; i++)
	{
		string name = "選手";
		name += nameseed[i];
		int score = 0;

		Person p(name, score);
		v.push_back(p);
	}
}

void setScore(vector<Person>& v)
{
	for (vector<Person>::iterator it = v.begin(); it != v.end(); it++)
	{
		//將分數放入deque中
		deque<int>d;
		for (int i = 0; i < 10; i++)
		{
			int score = rand() % 41 + 60; //60~100
			d.push_back(score);
		}
		sort(d.begin(), d.end());

		//去掉最高和最低分
		d.pop_back();
		d.pop_front();

		//取平均分
		int sum = 0;
		for (deque<int>::iterator dit = d.begin(); dit != d.end(); dit++)
		{
			sum += *dit;
		}
		int avg = sum / d.size();

		//將平均分賦值到選手中
		it->m_score = avg;
	}
}

void showscore(vector<Person>&v)
{
	for (vector<Person>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << "姓名: " << it->m_name << " 平均分: " << it->m_score << endl;
	}
}


int main()
{
	srand((unsigned)time(NULL));
	vector<Person>v;
	createPerson(v);
	for (vector<Person>::iterator it = v.begin(); it != v.end(); it++)
	{
		//cout << "姓名" << (*it).m_name << " 分數: " << (*it).m_score << endl;
	}
	setScore(v);
	showscore(v);



}