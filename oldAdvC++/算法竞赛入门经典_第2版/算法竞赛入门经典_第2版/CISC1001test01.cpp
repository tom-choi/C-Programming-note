#include <iostream>
int main()
{
    int arr[] = { 1, 5, 15, 20 };

    for (int i = 0; i < 4; i++)
    {
        switch (arr[i])
        {
        case 1 ... 6:
            printf("%d in range 1 to 6\n", arr[i]);
            break;
        case 19 ... 20:
            printf("%d in range 19 to 20\n", arr[i]);
            break;
        default:
            printf("%d not in range\n", arr[i]);
            break;
        }
    }
    return 0;
}
