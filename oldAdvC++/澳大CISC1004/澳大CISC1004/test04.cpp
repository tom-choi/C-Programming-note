#include <iostream>

using namespace std;

int main()
{
	int a, b;
	printf("�քeݔ��a(����),b(����)");
	scanf("%d%d", &a, &b);
	for (; a <= b; a++)
	{
		printf("x(%d) = %d\n",a, a * a);
	}
	return 0;
}