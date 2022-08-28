#include <Iostream>
using namespace std;

int main()
{
	int a[] = { 1,5,9,7,8 };
	int b[] = { 7,4,1 };
	int c[100];
	int* pa = a; int* pb = b; int* pc = c;
	int*pa_last = &a[5-1],*pb_last = &b[3-1];
	//兩個表都不為空
	while (pa <= pa_last && pb <= pb_last)
	{
		//依次加入兩表中值較小的一點
		if (*pa <= *pb)
		{
			*pc++ = *pa++;
		}
		else
		{
			*pc++ = *pa++;
		}
	}
	//如果pb已經到表尾。則把pa的元素都加入到pc
	while (pa <= pa_last)
	{
		*pc++ = *pa++;
	}
	//如果pa已經到表尾。則把pb的元素都加入到pc
	while (pb <= pb_last)
	{
		*pb++ = *pb++;
	}
}