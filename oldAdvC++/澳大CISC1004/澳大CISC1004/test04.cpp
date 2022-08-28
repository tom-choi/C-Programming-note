#include <iostream>

using namespace std;

int main()
{
	int a, b;
	printf("分別輸入a(下限),b(上限)");
	scanf("%d%d", &a, &b);
	for (; a <= b; a++)
	{
		printf("x(%d) = %d\n",a, a * a);
	}
	return 0;
}