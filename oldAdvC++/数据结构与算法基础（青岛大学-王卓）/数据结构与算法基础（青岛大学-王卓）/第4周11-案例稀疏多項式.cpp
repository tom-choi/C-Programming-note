#include <iostream>
using namespace std;

int main()
{
	int a[] = { (7,0),(5,1),(3,5) };
	int b[] = { (2,0),(3,2),(4,6),(7,7) };

	int c[(sizeof(a) + sizeof(b)) / sizeof(int)];
	int i = 0, j = 0;
	int* pa = a, * pb = b, * pc = c;
	int* pa_last = &a[sizeof(a) / sizeof(int)], * pb_last = &b[sizeof(b) / sizeof(int)];
	while (pa != pa_last && pb != pb_last)
	{
		if (*pa <= *pb)
		{
			*pc++ = *pa++;
		}
		else
		{
			*pc++ = *pb++;
		}
	}
	while (pa != pa_last)
		*pc++ = *pa++;
	while (pb != pb_last)
		*pc++ = *pb++;
	for (int i = 0; i < (sizeof(a) + sizeof(b)) / sizeof(int); i++)
	{
		printf("%d ", c[i]);
	}
}