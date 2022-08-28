#include <iostream>
#include <string>

using namespace std;

class Building
{
	friend void goodguy(Building* bud1);
public:
	string m_sittingroom;
	Building()
	{
		m_sittingroom = "客廳";
		m_Bedroom = "客房";
	}

private:
	string m_Bedroom;
};

void goodguy(Building *bud1)
{
	cout << "goodguy全局函數 正在訪問 : " << bud1->m_sittingroom << endl;
	cout << "goodguy全局函數 正在訪問 : " << bud1->m_Bedroom << endl;
}



int main()
{
	Building bud_1;
	goodguy(&bud_1);
}