#include <iostream>
#include <string>

using namespace std;

class Cstudent
{
public:
	int number;
};





int main()
{
	Cstudent stu[100];
	for (int i = 0; i < 10; i++)
	{
		stu[i].number = (i + 101);
		cout << "��" << i + 1 << "���W���ČW̖��:" << stu[i].number << endl;
	}
	
	return 0;
}