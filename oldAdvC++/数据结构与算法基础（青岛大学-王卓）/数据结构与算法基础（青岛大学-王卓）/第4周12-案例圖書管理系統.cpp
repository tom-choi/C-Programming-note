#include <iostream>
using namespace std;

struct book
{
	char id[20];
	char name[50];
	int price;
};

//����
typedef struct
{
	book* elem;
	int length;
}Sqlist;

//朱�
struct node
{
	book elem;
	node* next;
};
