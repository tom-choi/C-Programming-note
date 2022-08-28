#include <stdio.h>
#define STUDENTS 10

int main()
{
	//test
	//int ID[STUDENTS] = { 1010,1002,1001,1005,1003,1008,1004,1006,1007,1009 };
	//int SCORE[STUDENTS] = { 90,70,66,80,79,93,96,85,87,76 };
	int ID[STUDENTS];
	int SCORE[STUDENTS];
	printf("Student id: ");
	for (int i = 0; i < STUDENTS - 1; i++)
	{
		scanf("%d ", &ID[i]);
	}
	printf("\nCorresponding score: ");
	for (int i = 0; i < STUDENTS - 1; i++)
	{
		scanf("%d ", &SCORE[i]);
	}
	for (int i = 0; i < STUDENTS - 1; i++)
	{
		for (int j = 0; j < STUDENTS - 1 - i; j++)
		{
			if (SCORE[j] > SCORE[j + 1])
			{
				int temp = SCORE[j];
				SCORE[j] = SCORE[j + 1];
				SCORE[j + 1] = temp;
				temp = ID[j];
				ID[j] = ID[j + 1];
				ID[j + 1] = temp;
			}
		}
	}
	printf("Student id: %d\nStudent score: %d", ID[STUDENTS - 1], SCORE[STUDENTS - 1]);
}