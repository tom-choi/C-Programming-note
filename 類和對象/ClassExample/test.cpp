#include <iostream>
using namespace std;

void main()
{
    char szbuf[] = "hello, friends, my name is cctry.com. what is your name ?\0";
    int j = 0;

    for (j = 0; j < 59; j++)
    {
        if (szbuf[j] == 'i')
        {
            cout << endl;
            szbuf[j] = '@';

        }
        cout << szbuf[j];
    }
}