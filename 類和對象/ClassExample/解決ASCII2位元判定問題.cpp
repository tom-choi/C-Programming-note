#include <iostream>
#include <string>

using namespace std;

int main()
{
    char strig[] = "�����Ƶ��ϸ��H����ع�f";
    char symbol[] = "��";
    for (int i = 0; i < strlen(strig); i++)
    {
        if (strig[i] == symbol[0] && strig[i+1] == symbol[1])
        {
            i += 2;
            cout << endl;
        }
        cout << strig[i];
    }
}