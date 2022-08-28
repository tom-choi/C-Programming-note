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
		cout << "第" << i + 1 << "名學生的學號為:" << stu[i].number << endl;
	}
	
	return 0;
}