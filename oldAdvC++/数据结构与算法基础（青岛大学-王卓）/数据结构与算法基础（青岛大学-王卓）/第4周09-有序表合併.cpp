#include <Iostream>
using namespace std;

int main()
{
	int a[] = { 1,5,9,7,8 };
	int b[] = { 7,4,1 };
	int c[100];
	int* pa = a; int* pb = b; int* pc = c;
	int*pa_last = &a[5-1],*pb_last = &b[3-1];
	//�ɂ��������
	while (pa <= pa_last && pb <= pb_last)
	{
		//���μ���ɱ���ֵ�^С��һ�c
		if (*pa <= *pb)
		{
			*pc++ = *pa++;
		}
		else
		{
			*pc++ = *pa++;
		}
	}
	//���pb�ѽ�����β���t��pa��Ԫ�ض����뵽pc
	while (pa <= pa_last)
	{
		*pc++ = *pa++;
	}
	//���pa�ѽ�����β���t��pb��Ԫ�ض����뵽pc
	while (pb <= pb_last)
	{
		*pb++ = *pb++;
	}
}