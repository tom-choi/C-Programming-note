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

	//在父类中创建一个公有函数，来访问其私有成员，
	//然后在派生类中再创建一个函数来获得父类中访问其私有成员的函数返回值。
	//这样就可以完成子类访问父类私有成员获得其值。
	zhong_1.set_english();
	zhong_1.get_english();
	return 0;
}