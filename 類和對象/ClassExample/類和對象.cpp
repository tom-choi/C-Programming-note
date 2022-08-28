#include <iostream>
#include <string>

using namespace std;

class person
{
public:

	//無參 : 沒有參數的函數
	person()
	{
		cout << "這是構造函數" << endl;
	}
	~person()
	{
		cout << "這是析構函數" << endl;
	}

};





int main()
{
	system("pause");

}