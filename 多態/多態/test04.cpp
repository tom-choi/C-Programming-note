#include <iostream>
#include <string>

using namespace std;

int main()
{
	int peoplefish[5]; 
	char peoplename[5] = { 'A','B', 'C', 'D', 'E' };
	for (peoplefish[0] = 5;; peoplefish[0]++)
	{
		for (int i = 1; i < 5; i++)
		{
			peoplefish[i] = peoplefish[i - 1] * 4 / 5;
		}
		if (peoplefish[0] % 5 == 1 &&
			peoplefish[1] % 5 == 1 &&
			peoplefish[2] % 5 == 1 &&
			peoplefish[3] % 5 == 1 &&
			peoplefish[4] % 5 == 1)
		{
			cout << "һ��ץ��" << peoplefish[0] << "�l�~" << endl;
			for (int i = 0; i < 5; i++)
			{
				cout << peoplename[i] << "�с�rҊ����" << peoplefish[i] << "�l�~" << endl;
			}
			break;
		}
	}
}
