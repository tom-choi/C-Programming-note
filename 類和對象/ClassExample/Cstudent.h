#pragma once
#include <string>


class Cstudent
{
public:
	char* name;
	char sex;
	int num;
	int age;

	Cstudent& operator=(Cstudent& stud)
	{
		name = NULL;
		if (name)
		{
			delete[]name;
			name = NULL;
		}

		int len = strlen(name) + 1;
		name = new char[len];
		memset(name, 0, len);
		strcpy(name, stud.name);
		sex = stud.sex;
		num = stud.num;
		age = stud.age;
		return *this;
	}
};