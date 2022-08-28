#include <iostream>
#include <string>

using namespace std;

struct student
{
	string name;
	int num;
	char sex;
	int age;
};

class c_student
{
private:
	//屬性
	string name{};
	int num{};
	int age{};
	char sex{};

public:
	//行為
	void print_name(int idx)
	{
		cout << "輸入學生名字: "; cin >> name;
		num = idx + 100; 
		cout << "輸入學生年齡: "; cin >> age;
		cout << "輸入學生性別: "; cin >> sex;
	}
	void show_name()
	{
		cout << "學生名字: " << name << " 學號: "<< num << " 年齡: " << age << " 性別: " << sex << endl;
	}
};



int main()
{
	c_student stuarray[10];
	for (int idx = 0; idx < 2; idx++)
	{
		cout << "開始打印第" << (idx + 1) << "名學生" << endl;
		stuarray[idx].print_name(idx);
		cout << "完成打印第" << (idx + 1) << "名學生" << endl;
		system("pause");
		system("cls");
	}
	for (int idx = 0; idx < 2; idx++)
	{
		stuarray[idx].show_name();
	}
	return 0;
}