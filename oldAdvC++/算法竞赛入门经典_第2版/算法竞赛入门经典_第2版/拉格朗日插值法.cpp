#include <stdio.h>
int Percentagearr[] = { 100,93,88,83,78,73,68,63,58,53,50 };

int main()
{
    int x, select = 1;
    printf("Please enter your exam mark(0--100): ");
    scanf("%d", &x);
    for (int i = 0; (i <= sizeof(Percentagearr) / 4); i++)
    {
        // 90  select 
        select = (x*x*x*x*x*x*x*x*x*x/907200)-
            (x*x*x*x*x*x*x*x*x/15120)+
            (x*x*x*x*x*x*x*x*53/30240)
        switch (select)
        {
        case 0:
            break;
        case 1:
            printf("Your grade is A\n");
            goto here;
        case 2:
            printf("Your grade is A-\n");
            goto here;
        case 3:
            printf("Your grade is B+\n");
            goto here;
        case 4:
            printf("Your grade is B\n");
            goto here;
        case 5:
            printf("Your grade is B-\n");
            goto here;
        case 6:
            printf("Your grade is C+\n");
            goto here;
        case 7:
            printf("Your grade is C\n");
            goto here;
        case 8:
            printf("Your grade is C-\n");
            goto here;
        case 9:
            printf("Your grade is D+\n");
            goto here;
        case 10:
            printf("Your grade is D\n");
            goto here;
        case 11:
            printf("Your grade is F\n");
            goto here;
        }
    }
here:return 0;
}
