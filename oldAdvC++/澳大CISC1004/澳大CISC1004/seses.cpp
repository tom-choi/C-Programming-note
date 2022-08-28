#include <stdio.h>


using namespace std;

void test01()
{
	char colour = 'g';
	switch (colour)
	{
	case'r':
		printf("red\n");
		break;
	case'g':
		printf("green\n");
		break;
	case'b':
		printf("blue\n");
		break;
	default:
		printf("unknown colour\n");
	}
}

int main()
{
	//test01();
	/*int number = 0;
	printf("%d", number / 10);*/
	int number = 10;
}