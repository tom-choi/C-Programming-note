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
		m_sittingroom = "�͏d";
		m_Bedroom = "�ͷ�";
	}

private:
	string m_Bedroom;
};

void goodguy(Building *bud1)
{
	cout << "goodguyȫ�ֺ��� �����L�� : " << bud1->m_sittingroom << endl;
	cout << "goodguyȫ�ֺ��� �����L�� : " << bud1->m_Bedroom << endl;
}



int main()
{
	Building bud_1;
	goodguy(&bud_1);
}