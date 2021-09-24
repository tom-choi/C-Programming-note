#include <stdio.h>

int main() {
    int x;
    printf("enter your exam mark(0...100):");
    scanf("%d", &x);
    switch ((x + 2) / 5) {
    case 19:
    case 20:
        printf("Your grade is A");
        break;
    case 18:
        printf("Your grade is A-");
        break;
    case 17:
        printf("Your grade is B+");
        break;
    case 16:
        printf("Your grade is B");
        break;
    case 15:
        printf("Your grade is B-");
        break;
    case 14:
        printf("Your grade is c+");
        break;
    case 13:
        printf("Your grade is c");
        break;
    case 12:
        printf("Your grade is c-");
        break;
    case 11:
        printf("Your grade is D+");
        break;
    default:
        switch (x - 50) {
        case 1:
        case 0:
        case 2:
            printf("Your grade is D");
            break;
        default:
            printf("Your grade is F");
        }

    }

    return 0;
}