// ConsoleApplication57.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
//

#include <iostream>
using namespace std;
struct Student
{
    string s_name;
    int score;
};

struct Teather
{
    string t_name;
    struct Student studentlist[5];
};

void allocateSpace(struct Teather teacherlist[], int len)
{
    string nameseed = "ABCDE";
    for (int i = 0; i < len; i++)
    {
        teacherlist[i].t_name = "Teacher_";
        teacherlist[i].t_name += nameseed[i];
        for (int j = 0; j < len; j++)
        {
            teacherlist[i].studentlist[j].s_name = "Student_";
            teacherlist[i].studentlist[j].s_name += nameseed[j];

            int random = rand() % 61 + 40 ;
            teacherlist[i].studentlist[j].score = random;
        }
    }
}

void printinfo(struct Teather teacherlist[], int len)
{
    for (int i = 0; i < len; i++)
    {
        cout << "老師姓名: " << teacherlist[i].t_name << endl;
        for (int j = 0; j < len; j++)
        {
            cout << "\t學生姓名: " << teacherlist[i].studentlist[j].s_name << 
               "考試分數: " << teacherlist[i].studentlist[j].score << endl;
        }
    }
}


int main()
{
    srand((unsigned int)time(NULL));
    struct Teather teacherlist[3];
    int len = sizeof(teacherlist) / sizeof(teacherlist[0]);
    allocateSpace(teacherlist, len);
    printinfo(teacherlist, len);
    cout << "Hello World!\n";
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
