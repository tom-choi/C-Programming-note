#include <iostream>
#include <string>

using namespace std;

#pragma pack(push)
#pragma pack(1)//解除內存對齊
class Cstudent
{
public:
	char name[50];
	char sex;
	int num;
	int age;
	//rule1:默認內存對齊
	//rule2:不包括成員函數的內存空間
	void print_name()
	{
		cout << "name = " << name << endl;
		//函數內部運行為:cout << "name = " << this->name << endl;
	}
	
	//什么情况下需要手动加上this:
	void set_age(int age)
	{
		//this->age 
		this->age = age;
	}
};
#pragma pack (pop)

int main()
{
	int a = 5; // 佔用4個字節空間
	Cstudent stu_1, stu_2;
	strcpy_s(stu_1.name, "zhang_san"); // 內存空間固定
	strcpy_s(stu_2.name, "lisi"); //默認使用this指針
	stu_1.print_name();
	stu_2.print_name();
	
	cout << sizeof(a) << endl; // 佔用4個字節空間
	cout << sizeof(stu_1) << endl; //佔用了多少個字節空間?
	return 0;
}