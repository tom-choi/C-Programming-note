#include <iostream>
#include <string>

using namespace std;

class cube
{
public:
	int m_H;
	int m_L;
	int m_W;
public:
	//int m_H, int m_L, int m_W
	int get_S();
	int get_V();
	void get_HLW();
	bool isSame(cube& c);
};

int cube::get_S()
{
	int S_sum = 0;
	S_sum = m_H * m_L * 2 + m_L * m_W * 2 + m_W * m_H * 2;
	return S_sum;
}

int cube::get_V()
{
	int V_sum = 0;
	V_sum = m_H * m_L * m_W;
	return V_sum;
}

void cube::get_HLW()
{
	cout << "長: " << m_H <<endl;
	cout << "寬: " << m_L <<endl;
	cout << "高: " << m_W <<endl;
}

bool cube::isSame(cube& c)
{
	if (m_L == c.m_L && m_H == c.m_H && m_W == c.m_W)
	{
		return true;
	}
	return false;
}


int main()
{
	cube cube[2]{ {5,6,7} ,{5,6,7} };
	for (int i = 0; i < 2; i++)
	{
		cout << i + 1 << "號立方體數值為: " << endl; cube[i].get_HLW();
		cout << i + 1 << "號立方體面積為: " << cube[i].get_S() << endl;
		cout << i + 1 << "號立方體體積為: " << cube[i].get_V() << endl;
	}
	cout << "它們是" << ((cube[0].isSame(cube[1]) == true) ? "相等的" : "不一樣的") << "立方體" << endl;
}