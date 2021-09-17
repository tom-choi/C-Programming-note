#include <string>
#include <iostream>
#include <fstream>

using namespace std;

void test01()
{
	//1.包含頭文件

	//2.創建流對象
	ifstream ifs;

	//3.打開文件
	ifs.open("test.txt", ios::in);
	if ( !ifs.is_open())
	{
		cout << "打開失敗" << endl;
		return;
	}

	//第一種
	//char buf[1024] = { 0 };
	//while (ifs >> buf) //假標誌
	//{
	//	cout << buf << endl;
	//}

	//第二種
	/*char buf[1024] = { 0 };
	while (ifs.getline(buf,sizeof(buf)))
	{
		cout << buf << endl;
	}*/

	//第三種
	/*string buf;
	while (getline(ifs, buf)) 
	{
		cout << buf << endl;
	}*/

	//第四種 效率低
	char c;
	while ((c = ifs.get()) != EOF) //end of file
	{
		cout << c;
	}

	ifs.close();

}




int main()
{
	test01();
}