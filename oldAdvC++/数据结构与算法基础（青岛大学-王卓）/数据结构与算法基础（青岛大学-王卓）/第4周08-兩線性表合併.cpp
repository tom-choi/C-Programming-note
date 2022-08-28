#include <iostream>
using namespace std;

int main()
{
	//bitmap
	int a[] = { 1,5,9,8 };
	int b[] = { 7,5,3,1 };
	bool result[100] = {};
	for (int i = 0; i < sizeof(a) / sizeof(int); i++)
	{
		result[a[i]] = 1;
	}
	for (int i = 0; i < sizeof(b) / sizeof(int); i++)
	{
		result[b[i]] = 1;
	}
	for (int i = 0; i < sizeof(result) / sizeof(int); i++)
	{
		if (result[i] == 1)
		{
			printf("%d ",i);
		}
	}
}