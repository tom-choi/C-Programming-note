#include <iostream>
using namespace std;

int main()
{
    int n, k;
    while (cin >> n >> k)
    {
        int num = 1, ans = 0, counter = 0;
        while (counter < k)
        {
            while (counter < k && num <= n)
            {
                ans = num;
                counter++;
                num *= 10;
            }
            while (num > n || num % 10 == 9)
            {
                num /= 10;
            }
            num++;
        }
        printf("%d\n", ans);
    }
}