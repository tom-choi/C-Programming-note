#include <iostream>
using namespace std;
const double pi = 3.14;

class Circle
{
	//權限
public:
	//屬性
	//半徑
	int m_r;
	//行為
	//獲取周長
	double calculateZC()
	{
		return 2 * pi * m_rl;
	}

};




int main()
{
	//創建對象
	Circle cl;
	cl.m_r = 10;

	cout << "圓周長為: " << cl.calculateZC() << endl;
	printf("hi");
	return 0;
}