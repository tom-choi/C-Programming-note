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

	bool operator==(Cstudent& stud);
	bool operator!=(Cstudent& stud);

	//Cstudent& operator=(const Cstudent& stud);
	Cstudent& operator=(const Cstudent& stud)
	{
		name = NULL;
		if (name)
		{
			delete[] name;
			name = NULL;
		}

		int name_len = strlen(stud.name) + 1;
		name = new char[name_len];
		memset(name, 0, name_len);

		strcpy(name, stud.name);
		sex = stud.sex;
		num = stud.num;
		age = stud.age;
		return *this;
	}
	void get_data()
	{
		printf("name = %s\n", name);
		cout << "sex = " << sex << endl;
		printf("num = %d\n", num);
	}
	~Cstudent()
	{
		cout << "Cstudent& operator=(const Cstudent& stud)" << endl;
	}
};


bool Cstudent::operator==(Cstudent& stud)
{
	if (name == stud.name && sex == stud.sex && num == stud.num && age == stud.age)
	{
		return true;
	}
	else
	{
		return false;
	}
}

bool Cstudent::operator!=(Cstudent& stud)
{
	if (name == stud.name && sex == stud.sex && num == stud.num && age == stud.age)
	{
		return false;
	}
	else
	{
		return true;
	}
}

void test()
{
	Cstudent stu_A = { "tom", 'm',1001};
	Cstudent stu_B;
	stu_B = stu_A;
	stu_B.get_data();
	cout << ((stu_B.operator!=(stu_A) == true)? ("true") : ("false")) << endl;
}

int main()
{
	test();
	return 0;
}