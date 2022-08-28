#include <stdio.h>


float normal_payroll(float N_hour, float N_rate)
{
	return N_hour * N_rate;
}

float overtime_payroll(float O_hour, float N_rate)
{
	return O_hour * N_rate * 1.5;
}

int main()
{
	float N_hour, O_hour,N_rate;
	printf("Normal hours worked:"); scanf("%f", &N_hour);
	printf("Overtime hours worked:"); scanf("%f", &O_hour);
	printf("Normal hourly rate ($):"); scanf("%f", &N_rate);
	printf("\nTotal pay:$%.2f", normal_payroll(N_hour, N_rate) +overtime_payroll(O_hour, N_rate));
}