#include <iostream>

using namespace std;
int findComplement(int num)
{
    int a = num, check = 0;
    while (a > 0)
    {
        a = a >> 1;
        //0000001 -> 0000011 -> 0000111 -> ....... �ж���λ��Ҫ�����\�����λ
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