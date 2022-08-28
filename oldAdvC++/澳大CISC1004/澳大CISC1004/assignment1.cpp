#include <stdio.h>
#define rate 0.1449

int main()
{
	int numberarray[] = { 1, 5 ,10, 20, 50, 100 };
	int inputnumber;
	int sum = 0; double ratesum;
	for (int idx = 0; idx < sizeof(numberarray) / 4; ++idx)
	{
		printf("Number of %d Yuan: ", numberarray[idx]);
		scanf("%d", &inputnumber);
		if (inputnumber >= 0)
		{
			sum += numberarray[idx] * inputnumber;
		}
		else
		{
			printf("the input number should not be negative");
			return 0;
		}
	}
	printf("The sum of RMB is %d, worth %.2f dollars.", sum, sum * rate);
}
//
/*#include <stdio.h>
#define rate 0.1449;

int main()
{
	float inputnumber[6] = {};
	int numberarray[6] = { 1, 5, 10, 20, 50, 100 };
	double sum = 0; double ratesum = 0;
	for (int idx = 0; idx < sizeof(numberarray)/4; idx++)
	{
		printf("Number of %d Yuan: ", numberarray[idx]);
		scanf("%f\n",&inputnumber[idx]);
		sum += numberarray[idx] * inputnumber[idx];
	}
	ratesum += rate * sum;
	printf("The sum of RMB is %0.f, worth %2.f dollars.",sum,ratesum);
}*/