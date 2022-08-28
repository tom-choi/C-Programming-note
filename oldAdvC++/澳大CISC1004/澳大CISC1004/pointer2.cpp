#include <stdio.h>

void increase(int* p,int* n)
{
	*p += *n;
}

int main()
{
	int n = 2;
	int m = 2;
	increase(&n,&m);
	printf("%d", n);
}