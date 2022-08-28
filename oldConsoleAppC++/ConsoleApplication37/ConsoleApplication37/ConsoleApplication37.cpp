// ConsoleApplication37.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
//

#include <iostream>
using namespace std;

#include <iostream>

using namespace std;

int main()
{
    char str[] = "a123x456_17960?302ab5876";
    int a[10] = { 0 };
    char* pstr1 = str;
    int sum = 0, count = 0;
    for (; *pstr1 != '\0';)
    {
        if (*pstr1 <= '9' && *pstr1 >= '0')
        {
            //加上当前字符代表的数字，同时，向下移动一位
            sum = sum * 10 + *(pstr1++) - '0';
            //如果下一个字符不在0到9
            if (!(*pstr1 <= '9' && *pstr1 >= '0'))
            {
                //保存当前的数字片段
                a[count++] = sum;
                //将保存后的数字片段清零
                sum = 0;
            }
        }
        else//如果当前字符不在0到9
        {
            //向下移动一位
            pstr1++;
        }
    }//字符串遍历结束

    for (int i = 0; a[i] != 0;)
    {
        cout << a[i++] << endl;
    }

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
