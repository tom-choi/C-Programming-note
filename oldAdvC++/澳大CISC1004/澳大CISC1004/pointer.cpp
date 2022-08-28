#include <stdio.h>
using namespace std;

void swap(int* p_a, int* p_b)
{
	int t = *p_a;
	*p_a = *p_b;
	*p_b = t;
}




int main()
{
	int x = 26;
	int* p_x = &x;
	//cout << *p_x << endl;
	printf("%d\n",*p_x);

	int a = 10,b=25;
	swap(&a, &b);
	printf("a = %d b = %d", a,b);
}