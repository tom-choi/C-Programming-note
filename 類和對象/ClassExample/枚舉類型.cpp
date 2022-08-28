#include <iostream>
#include <string>

using namespace std;

enum Esex
{
	Esex_1 = 'A',
	Esex_2 = 'B',
	Esex_3 = 'C',
	Esex_4, Esex_5, Esex_6, Esex_7
};


enum Eweekday
{
	Eweekdaya

};


int main()
{
	int lista[10];
	for (int i = 0; i < 10; i++)
	{
		lista[i] = Esex_1;
		cout << lista[i] << endl;
	}
	return 0;
}
