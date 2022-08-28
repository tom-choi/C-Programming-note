#include <iostream>
int main()
{
    int x;
    printf("Please enter your exam mark(0--100): ");
    scanf("%d", &x);
    if (x < 50)
    {
        printf("Your grade is F\n");
    }
    if (50 <= x < 53)
    {
        printf("Your grade is D\n");
    }
    if (53 <= x < 58)
    {
        printf("Your grade is D+\n");
    }
    if (58 <= x < 63)
    {
        printf("Your grade is C-\n");
    }
    if (63 <= x < 68)
    {
        printf("Your grade is C\n");
    }
    if (68 <= x < 73)
    {
        printf("Your grade is C+\n");
    }
    if (73 <= x < 78)
    {
        printf("Your grade is B-\n");
    }
    if (78 <= x < 83)
    {
        printf("Your grade is B\n");
    }
    if (83 <= x < 88)
    {
        printf("Your grade is B+\n");
    }
    if (88 <= x < 93)
    {
        printf("Your grade is A-\n");
    }
    if (93 <= x <= 100)
    {
        printf("Your grade is A\n");
    }
    return 0;
}