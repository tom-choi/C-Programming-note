// ConsoleApplication31.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
// 以strlen 寫 strcat

#include <iostream>
using namespace std;

int my_strlen(const char* str) //strlen
{
    int i;
    for (i = 0;; i++)
    {
        if (str[i] == '\0') break;
    }
    return i;
}

char* my_stract(char* destination, const char* source, int size)
{
    int des_len = my_strlen(destination);
    int source_len = my_strlen(source);

    if (size <= (des_len + source_len + 1))
    {
        if (size <= des_len + 1)
        {
            return destination;
        }

        else
        {
            int j, k;
            for (j = des_len, k = 0; j < (size - 1); j++, k++)
            {
                destination[j] = source[k];
            }
            destination[j] = '\0';
        }
    }
    else
    {
        int j, k;
        for (j = des_len, k = 0; j < (des_len + source_len); j++, k++)
        {
            destination[j] = source[k];
        }
        destination[j] = '\0';
    }
    return destination;
}



int main()
{
    cout << "Hello World!\n";
    char a[30] = "hello";
    char b[] = "Zaorlde!";
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "a+b = " << my_stract(a,b,sizeof(a)) << endl;
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
