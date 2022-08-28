#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define MAX 100
typedef struct Student
{
	char name_M[MAX];
	int Math_M;
	int Phys_M;
	int Chem_M;
	int total_M;
}Student;
struct Student create(char name[], int math, int phys, int chem)
{
	Student std;
	strcpy(std.name_M, name);
	std.Math_M = math;
	std.Phys_M = phys;
	std.Chem_M = chem;
	std.total_M = math + phys + chem;
	return std;
}
typedef struct my_array
{
	int m_arrLen;
	Student* m_p_array;
}my_array;
void rank(my_array &a1)
{
	for (int i = 0; i < a1.m_arrLen - 1; i++)
	{
		for (int j = 0; j < a1.m_arrLen - 1 - i; j++)
		{
			//total
			if (a1.m_p_array[j].total_M < a1.m_p_array[j + 1].total_M)
			{
				Student temp = a1.m_p_array[j];
				a1.m_p_array[j] = a1.m_p_array[j + 1];
				a1.m_p_array[j + 1] = temp;
			}
			if (a1.m_p_array[j].total_M == a1.m_p_array[j + 1].total_M)
			{
				if (a1.m_p_array[j].Math_M == a1.m_p_array[j + 1].Math_M)
				{
					if (a1.m_p_array[j].Phys_M == a1.m_p_array[j + 1].Phys_M)
					{
						if (a1.m_p_array[j].Chem_M == a1.m_p_array[j + 1].Chem_M)
						{
							if (a1.m_p_array[j].name_M[0] < a1.m_p_array[j + 1].name_M[0])
							{
								Student temp = a1.m_p_array[j];
								a1.m_p_array[j] = a1.m_p_array[j + 1];
								a1.m_p_array[j + 1] = temp;
							}
						}
						if (a1.m_p_array[j].Chem_M < a1.m_p_array[j + 1].Chem_M)
						{
							Student temp = a1.m_p_array[j];
							a1.m_p_array[j] = a1.m_p_array[j + 1];
							a1.m_p_array[j + 1] = temp;
						}
					}
					if (a1.m_p_array[j].Phys_M < a1.m_p_array[j + 1].Phys_M)
					{
						Student temp = a1.m_p_array[j];
						a1.m_p_array[j] = a1.m_p_array[j + 1];
						a1.m_p_array[j + 1] = temp;
					}
				}
				if (a1.m_p_array[j].Math_M < a1.m_p_array[j + 1].Math_M)
				{
					Student temp = a1.m_p_array[j];
					a1.m_p_array[j] = a1.m_p_array[j + 1];
					a1.m_p_array[j + 1] = temp;
				}
			}
		}
	}
	printf("The rank is:\n");
	for (int i = 0; i < a1.m_arrLen; i++)
	{
		printf("%s\n", a1.m_p_array[i].name_M);
	}
}
int main()
{
	char seed[] = "ABCDE";
	char name[MAX];
	my_array a1;
	a1.m_arrLen = 3;
	int Math_M, Phys_M, Chem_M;
	a1.m_p_array = (struct Student*)malloc(a1.m_arrLen * sizeof(struct Student));
	for (int i = 0; i < 3; i++)
	{
		printf("input student %c's name ,marks of math,phsics and chemistry(integer)\n", seed[i]);
		scanf("%s %d %d %d", name, &Math_M, &Phys_M, &Chem_M);
		Student std = create(name, Math_M, Phys_M, Chem_M);
		a1.m_p_array[i] = std;
	}
	rank(a1);
}