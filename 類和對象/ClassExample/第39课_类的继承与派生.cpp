#include <iostream>
#include <string>
#include "Cstudent.h"

using namespace std;


class Cxiaostudent : public Cstudent
{
public:
	int chinese_score;
	void get_english()
	{
		cout << "english score is " << english_score << endl;
	}
	void set_english()
	{
	    cin >> english_score;
	}
protected:
	int math_score;
private:
	int english_score;
};

class Czhongstudent : public Cxiaostudent
{
public:
	int yuwen_score;
	int shuxue_score;
};



int main()
{
	Czhongstudent zhong_1;
	zhong_1.yuwen_score = 90; // from Cxiaostudent
	zhong_1.age = 18; //from Cstudent

	//�ڸ����д���һ�����к�������������˽�г�Ա��
	//Ȼ�������������ٴ���һ����������ø����з�����˽�г�Ա�ĺ�������ֵ��
	//�����Ϳ������������ʸ���˽�г�Ա�����ֵ��
	zhong_1.set_english();
	zhong_1.get_english();
	return 0;
}