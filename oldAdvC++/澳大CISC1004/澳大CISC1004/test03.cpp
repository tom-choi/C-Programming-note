#include <iostream>

using namespace std;

int main()
{
    int n, sum = 1;
    printf("ender n=");
    scanf("%d", &n);
    for (; n > 1; n--)
    {
        sum *= n;
    }
    printf("%d", sum);
}