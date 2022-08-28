#include <stdio.h>

int Percentagearr[] = { 100,93,88,83,78,73,68,63,58,53,50};
char Gradearr[] = "AABBBCCCDD";
char Gradear[] = " -+";
int main()
{
	int score;
	printf("Enter your exam mark (0..100): ");
	scanf("%d", &score);
	if (score < 50)
	{
		printf("Your grade is F");
		return 0;
	}
	for (int i = 0; i < sizeof(Percentagearr)/4; i++)
	{
		if (((Percentagearr[i] == 100? Percentagearr[i]:Percentagearr[i]-1) >= score) && score >= Percentagearr[i + 1])
		{
			printf("Your grade is %c%c", Gradearr[i],Gradear[i%3]);
			break;
		}
	}
	return 0;
}