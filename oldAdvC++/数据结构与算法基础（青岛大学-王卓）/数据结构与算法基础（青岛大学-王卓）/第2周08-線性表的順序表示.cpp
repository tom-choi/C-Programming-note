#include <iostream>
using namespace std;
#define MAX 1000
//�ӑB���M
typedef struct
{
	int* arry;
	int length;
}V_array;

//��ͨ���M
typedef struct
{
	int arry[MAX];
	int length;
}M_array;

int main()
{
	V_array v1;
	v1.length = 5;
	v1.arry = (int*)malloc(sizeof(int*)* v1.length);


}