#include <iostream>
#include <string>

using namespace std;


class Cstudent
{
public:
	char* name;
	char sex;
	int num;
	int age;

	static int master; // 類似全局變量，只是作用域作用在同一個類中

	Cstudent(char* t_name, char t_sex, int t_num, int t_age) :num(t_num), age(t_age), sex(t_sex)
	{
		int len = strlen(t_name);
		name = new char[len + 1];
		memset(name, 0, len + 1);
		strcpy(name, t_name);
	}
	Cstudent(Cstudent& stud)
	{
		num = stud.num;
		age = stud.age;
		sex = stud.sex;
		int len = strlen(stud.name);
		name = new char[len + 1];
		memset(name, 0, len + 1);
		strcpy(name, stud.name);
	}
	static int set_master(int mas)
	{
		master = mas;
	}
	static void get_master()
	{
		printf("master name is %d", master);
	}
	~Cstudent();
};

Cstudent::~Cstudent()
{
	if (name)
	{
		delete[] name;
		name = NULL;
	}
}



int Cstudent::master = 0; // static類型屬性需要在類外進行初始化
int main()
{
	Cstudent stu_A = {"tom",'m',1001,18};
	stu_A.master = 111;
	cout << "stu_A master = " << stu_A.master << endl;

	Cstudent stu_B(stu_A);
	stu_B.master = 222;
	cout << "stu_A master = " << stu_A.master << endl;
	cout << "stu_B master = " << stu_B.master << endl;
	cout << "stu_A master = " << Cstudent::master << endl;//更加常見
	stu_A.get_master();
	return 0;
}