#include <iostream>
using namespace std;

struct book
{
	char id[20];
	char name[50];
	int price;
};

//í˜Ðò±í
typedef struct
{
	book* elem;
	int length;
}Sqlist;

//æœ±í
struct node
{
	book elem;
	node* next;
};
