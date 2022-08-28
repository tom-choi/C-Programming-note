// ConsoleApplication22.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
//

#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    int tranform;
    cout << "Hello World!\n";
    int num[10] = { 5,8,9,0,2,1,4,7,6,3 };
    for (int times = 0; times < 10; times++) // 做十次
    {
        for (int idy = 0; idy < 9; idy++) // 從1到9
        {
            if (num[idy] > num[idy+1]) // 如果 8 > 5 則不變
            {
                continue;
            }
            else //如果 5 < 8
            {
                tranform = num[idy]; // tranform = 5
                num[idy] = num[idy + 1]; // 5 -> 8
                num[idy + 1] = tranform; // 8 -> tranform -> 5，改變5和8的位置
            }
        }
    }
    for (int i = 0; i < 10; i++) //打印數表
    {
        cout << num[i] << " "; 
    }
    cout << endl <<"最大值=" << num[0] << endl;
    cout << "最小值=" << num[9] << endl;
    return 0;
}

// 執行程式: Ctrl + F5 或 [偵錯] > [啟動但不偵錯] 功能表
// 偵錯程式: F5 或 [偵錯] > [啟動偵錯] 功能表

// 開始使用的提示: 
//   1. 使用 [方案總管] 視窗，新增/管理檔案
//   2. 使用 [Team Explorer] 視窗，連線到原始檔控制
//   3. 使用 [輸出] 視窗，參閱組建輸出與其他訊息
//   4. 使用 [錯誤清單] 視窗，檢視錯誤
//   5. 前往 [專案] > [新增項目]，建立新的程式碼檔案，或是前往 [專案] > [新增現有項目]，將現有程式碼檔案新增至專案
//   6. 之後要再次開啟此專案時，請前往 [檔案] > [開啟] > [專案]，然後選取 .sln 檔案
