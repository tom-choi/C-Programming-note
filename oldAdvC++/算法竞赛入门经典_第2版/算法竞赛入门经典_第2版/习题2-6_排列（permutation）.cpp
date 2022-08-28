#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	int ilist[10] = { 0 };
	for (int i = 111; i < 333; i++)
	{
		memset(ilist, 0, sizeof ilist);
		ilist[i / 100] = 1;
		ilist[i / 10 % 10] = 1;
		ilist[i % 10] = 1;
		ilist[(i * 2) / 100] = 1;
		ilist[(i * 2) / 10 % 10] = 1;
		ilist[(i * 2) % 10] = 1;
		ilist[(i * 3) / 100] = 1;
		ilist[(i * 3) / 10 % 10] = 1;
		ilist[(i * 3) % 10] = 1;
		int sum = 0;
		for (int j = 1; j < 10; j++)
		{
			sum += ilist[j];
		}
		if (sum == 9)
		{
			cout << i << " " << i * 2 << " " << i * 3 << endl;
		}
	}
	return 0;
}