#include <string>
#include <iostream>
#include <fstream>

using namespace std;

void test01()
{
	//1.�����^�ļ�

	//2.����������
	ifstream ifs;

	//3.���_�ļ�
	ifs.open("test.txt", ios::in);
	if ( !ifs.is_open())
	{
		cout << "���_ʧ��" << endl;
		return;
	}

	//��һ�N
	//char buf[1024] = { 0 };
	//while (ifs >> buf) //�٘��I
	//{
	//	cout << buf << endl;
	//}

	//�ڶ��N
	/*char buf[1024] = { 0 };
	while (ifs.getline(buf,sizeof(buf)))
	{
		cout << buf << endl;
	}*/

	//�����N
	/*string buf;
	while (getline(ifs, buf)) 
	{
		cout << buf << endl;
	}*/

	//���ķN Ч�ʵ�
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