#include <iostream>
using namespace std;

struct my_array
{
	int length;
	int* m_array;
};

int main()
{
	my_array a1,a2,a3;
	a1.length = 5;
	a1.m_array = (int*)malloc(a1.length * sizeof(int));
	for (int i = 0; i < a1.length; i++)
	{
		a1.m_array[i] = i;
	}

	a2.length = 7;
	a2.m_array = (int*)malloc(a2.length * sizeof(int));
	for (int i = 0; i < a2.length; i++)
	{
		a2.m_array[i] = i + 5;
	}

	a3.length = a2.length;
	a3.m_array = (int*)malloc(a3.length * sizeof(int));
	int i;
	for (i = 0; i < a3.length; i++)
	{
		if (a1.m_array[i] != NULL && a2.m_array[i] != NULL)
			a3.m_array[i] = a1.m_array[i] + a2.m_array[i];
		else
			break;
	}
	while (a1.m_array[i] != NULL)
		a3.m_array[i] = a1.m_array[i++];
	while (a2.m_array[i] != NULL)
		a3.m_array[i] = a2.m_array[i++];

	for (int j = 0; j < a3.length; j++)
	{
		printf("%d ", a3.m_array[j]);
	}
	return 0;
}