#include <iostream>
#include <string>
#include <fstream>

using namespace std;

//typedef struct LNOode
//{
//	int data;
//	LNOode* next;
//}*LinkList;

//Ios::in


void test01()
{
	//1.創建流對象
	ofstream ofs;
	//2.指定打開方式
	ofs.open("test.txt",ios::out);

	//3.寫內容
	ofs << "姓名:張三" << endl;
	ofs << "性別:男" << endl;
	ofs << "年齡:18" << endl;
	
	ofs.close();
}



int main()
{
	test01();
}