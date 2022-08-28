#include <iostream>

using namespace std;
int findComplement(int num)
{
    int a = num, check = 0;
    while (a > 0)
    {
        a = a >> 1;
        //0000001 -> 0000011 -> 0000111 -> ....... 有多少位就要異或運算多少位
        check = (check << 1) + 1;
    }
    cout << check << endl;
    return num ^ check;
}

int main()
{
    cout << findComplement(5) << endl;
    printf("%d", (3 << 1) + 1);
}