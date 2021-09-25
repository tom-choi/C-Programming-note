#include <iostream>
#include <string>
#include <windows.h>

using namespace std;

int people[30]; int result[15];
int counts = 1; int sum = 0; int k = 0;

// 1 2 3 4 5 6 7 8 9
// 1 3 5 7 9 11 13 15

void starts()
{
    for (int i = 0; i < size(people); i++)
    {
        people[i] = (i + 1);
    }
}

void show_result()
{
    for (int i = 0; i < size(result); i++)
    {
        if (result[i] != 0)
            cout << result[i] << " ";
        else
            continue;
    }
}

void show_person(string litter,int peo)
{
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
    for (int i = 0; i < size(people); i++)
    {
        if (people[i] != 0)
        {
            cout << people[i] << " ";
            if (people[i] == peo)
            {
                cout << litter;
            }
        }
        else
            continue;
    }
    cout << endl << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
    cout << "(っ^_^)っ  ";
    show_result();
}

void show_animation(int j,int people)
{
    string litter = "▽";
    if (counts == 9)
    {
        litter = "▼";
    }
    show_person(litter,people);
    Sleep(100); //毫秒
    system("cls");
}

void conuting()
{
    for (int j = 0; j < size(people); j++)
    {
        if (counts == 9 && people[j] != 0)
        {
            result[k++] = people[j];
            people[j] = 0;
            counts = 1;
            sum += 1;
            show_animation(j, people[j]);
        }
        else if (people[j] == 0)
        {
            continue;
        }
        else
        {
            counts++;
            show_animation(j, people[j]);
        }
    }
}

int main()
{
    starts();
    //計算結果直到出現15人為止
    while (sum < 15)
    {
        conuting();
    }
    cout << "(￣▽￣)/  ";
    show_result();
    system("pause");
}

