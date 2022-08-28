#include <iostream>
#include <string>

using namespace std;

class person
{
public:
	//只有函數剛開始運行才會調用構造函數
	person()
	{
		cout << "調用構造函數" << endl;
	}
	//只有函數運行完之後才會調用析構函數
	~person()
	{
		cout << "調用析構函數" << endl;
	}
};

void test01()
{
	person p1; //調用了構造和析構函數
}



int main()
{
	//person p1; //只調用了構造函數
	system("pause");
}