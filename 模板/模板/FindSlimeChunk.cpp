#include <iostream>
#include <random>
using namespace std;
bool test01()
{
    // the seed from /seed as a 64bit long literal
    long long seed = 897959372446992330;

    int xPosition = 0;
    int zPosition = 1;
    std::mt19937 rnd(
        seed +
        (long long)(xPosition * xPosition * 4987142) +
        (long long)(xPosition * 5947611) +
        (long long)(zPosition * zPosition) * 4392871L +
        (long long)(zPosition * 389711) ^ 987234911L);
    if (seed %10 == 0)
    {
        cout << "x:" << xPosition << " z: " << zPosition;
        cout << "\n是史萊姆區塊" << endl;
        return true;
    }
    else
    {
        cout << "x:" << xPosition << " z: " << zPosition;
        cout << "\n不是史萊姆區塊" << endl;
        return false;
    }
}
int main()
{
    test01();
}