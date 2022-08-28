#include <iostream>
#define MaxN 100009
int narr[MaxN];
using namespace std;

int main()
{
	memset(narr, 0, sizeof(narr));
	//設生成元為i
	for (int i = 1; i < MaxN; i++)
	{
		int x = i, y = i;
		while (x > 0)
		{
			y += x % 10; //y = 216 + (216 %10) = 6 // 222 //y = 222 +(21%10) = 2 // y = 224 //y=225
			x /= 10; //21 //2 //1 //0
		}
		//narry[y]位為空，且生成元小於元數字
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