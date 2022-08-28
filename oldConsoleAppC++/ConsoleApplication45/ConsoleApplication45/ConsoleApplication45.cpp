// ConsoleApplication45.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
//

#include <iostream>
using namespace std;
int main()
{
    int a[3] = {}; int b[3] = {};
    int times[3] = { 3600,60,1 };
    int result;
    printf("Hello World!\n");
    cout << "依次輸入第一組的時分秒" << endl;
    for (int idx = 0; idx < 3; idx++)
    {
        cin >> a[idx];
    }
    cout << "依次輸入第二組的時分秒" << endl;
    for (int idx = 0; idx < 3; idx++)
    {
        cin >> b[idx];
    }
    for (int idx = 0; idx < 3; idx++)
    {
        if (a[idx] < 0 || b[idx] < 0)
        {
            cout << "Error";
            return 0;
        }
    }
    for (int idx = 0; idx < 3; idx++)
    {
        if (a[idx] > b[idx]) //a組大於]b組
        {
            result = a[0] * times[0] + a[1] * times[1] + a[2] * times[2] -
                b[0] * times[0] + b[1] * times[1] + b[2] * times[2];
            break;
        }
        else if (a[idx] < b[idx]) //a組小於]b組
        {
            result = b[0] * times[0] + b[1] * times[1] + b[2] * times[2] -
                a[0] * times[0] + a[1] * times[1] + a[2] * times[2];
            break;
        }
        else if (a[idx] == b[idx]) //a組等於]b組
            continue;
    }
    cout << "它們的秒差距為" << result;
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
