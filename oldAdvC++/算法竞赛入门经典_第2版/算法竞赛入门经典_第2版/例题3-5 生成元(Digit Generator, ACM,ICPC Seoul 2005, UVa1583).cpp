#include <iostream>
#define MaxN 100009
int narr[MaxN];
using namespace std;

int main()
{
	memset(narr, 0, sizeof(narr));
	//�O����Ԫ��i
	for (int i = 1; i < MaxN; i++)
	{
		int x = i, y = i;
		while (x > 0)
		{
			y += x % 10; //y = 216 + (216 %10) = 6 // 222 //y = 222 +(21%10) = 2 // y = 224 //y=225
			x /= 10; //21 //2 //1 //0
		}
		//narry[y]λ��գ�������ԪС�Ԫ����
		if (narr[y] == 0 || i < narr[y])
		{
			narr[y] = i;
		}
	}
	int Test, n;
	scanf("%d", &Test);
	while (Test--)
	{
		scanf("%d", &n);
		printf("%d\n", narr[n]);
	}
	return 0;
}