// ConsoleApplication60.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
//

#include <iostream>
#include <string>
using namespace std;
#define MAX 1000
void showMenu()
{
    cout << "***** 1.增加聯系人 *****" << endl;
    cout << "***** 2.顯示聯系人 *****" << endl;
    cout << "***** 3.刪除聯系人 *****" << endl;
    cout << "***** 4.查找聯系人 *****" << endl;
    cout << "***** 5.修改聯系人 *****" << endl;
    cout << "***** 6.清空聯系人 *****" << endl;
    cout << "***** 0.退出聯系表 *****" << endl;
}

struct Person
{
    string m_name;
    int m_sex{};
    int m_age{};
    string m_phone;
    string m_addr;
};

struct Addressbooks
{
    struct Person personarray[MAX+1];
    int m_Size{};
};

void show()
{
    showMenu();
}

void addPerson(Addressbooks * abs)
{
    if (abs->m_Size == MAX)
    {
        cout << "聯系人已滿" << endl;
        return;
    }
    else
    {
        string name; int sex = 0; int age = 0; string phone; string address;
        cout << "輸入姓名" << endl;
        cin >> name;
        abs->personarray[abs->m_Size].m_name = name;
        
        cout << "輸入性別" << endl << "1 --- 男" << endl << "2 --- 女" << endl;
        while (true)
        {
            cin >> sex;
            if (sex == 1 || sex == 2)
            {
                abs->personarray[abs->m_Size].m_sex = sex;
                break;
            }
            cout << "輸入錯誤，請重新輸入" << endl;
        }

        cout << "輸入年齡" << endl;
        while (true)
        {
            cin >> age;
            if (age >= 0 && age < 150)
            {
                abs->personarray[abs->m_Size].m_age = age;
                break;
            }
            cout << "輸入錯誤，請重新輸入" << endl;
        }

        cout << "輸入電話號碼" << endl;
        while (true)
        {
            cin >> phone;
            if (phone.length() == 8)
            {
                abs->personarray[abs->m_Size].m_phone = phone;
                break;
            }
            cout << "輸入錯誤，請重新輸入" << endl;
        }

        cout << "輸入地址" << endl;
        cin >> address;
        abs->personarray[abs->m_Size].m_addr = address;
        
        abs->m_Size++;
        cout << "增加成功" << endl;
        system("pause");
        system("cls"); // 清屏
    }
}

void showperson(Addressbooks* abs)
{
    if (abs->m_Size == 0)
    {
        cout << "目前聯系人為空" << endl;
    }
    else
    {
        for (int idx = 0; idx < (abs->m_Size); idx++)
        {
            cout << "姓名: " << abs->personarray[idx].m_name << "\t";
            cout << "性別: " << (abs->personarray[idx].m_sex == 1 ? "男" : "女") << "\t";
            cout << "年齡: " << abs->personarray[idx].m_age  << "\t";
            cout << "電話: " << abs->personarray[idx].m_phone << "\t";
            cout << "地址: " << abs->personarray[idx].m_addr << endl;
        }
    }
    system("pause");
    system("cls");
}

int findperson(Addressbooks* abs,string name)
{
    
    for (int idx = 0; idx < abs->m_Size; idx++)
    {
        if (abs->personarray[idx].m_name == name)
        {
            return idx;
        }
    }
    return -1;
}

void deleteperson(Addressbooks* ads, string name,int targat)
{
    if (targat == -1)
    {
        cout << "查無此人，無法刪除" << endl;
    }
    else
    {
        for (; targat < (ads->m_Size); targat++)
        {
            ads->personarray[targat] = ads->personarray[targat + 1];
        }
        ads->m_Size--; // 減少一人
        cout << "刪除成功" << endl;
    }
    system("pause");
    system("cls");
    return;
}

void sendperson(Addressbooks* abs, int idx)
{
    if (idx == -1)
    {
        cout << "查無此人，無法輸出" << endl;
    }
    else
    {
        cout << "姓名: " << abs->personarray[idx].m_name << "\t";
        cout << "性別: " << (abs->personarray[idx].m_sex == 1 ? "男" : "女") << "\t";
        cout << "年齡: " << abs->personarray[idx].m_age << "\t";
        cout << "電話: " << abs->personarray[idx].m_phone << "\t";
        cout << "地址: " << abs->personarray[idx].m_addr << endl;
    }
    system("pause");
    system("cls");
    return;
}

void editperson(Addressbooks* abs, int idx)
{
    if (idx == -1)
    {
        cout << "查無此人，無法修改" << endl;
    }
    else
    {
        abs->m_Size--;
        int sex = 0; int age = 0; string phone; string address;
        cout << "輸入性別" << endl << "1 --- 男" << endl << "2 --- 女" << endl;
        while (true)
        {
            cin >> sex;
            if (sex == 1 || sex == 2)
            {
                abs->personarray[abs->m_Size].m_sex = sex;
                break;
            }
            cout << "輸入錯誤，請重新輸入" << endl;
        }

        cout << "輸入年齡" << endl;
        while (true)
        {
            cin >> age;
            if (age >= 0 && age < 150)
            {
                abs->personarray[abs->m_Size].m_age = age;
                break;
            }
            cout << "輸入錯誤，請重新輸入" << endl;
        }

        cout << "輸入電話號碼" << endl;
        while (true)
        {
            cin >> phone;
            if (phone.length() == 8)
            {
                abs->personarray[abs->m_Size].m_phone = phone;
                break;
            }
            cout << "輸入錯誤，請重新輸入" << endl;
        }

        cout << "輸入地址" << endl;
        cin >> address;
        abs->personarray[abs->m_Size].m_addr = address;

        abs->m_Size++;
        cout << "修改成功" << endl; 
    }
    system("pause");
    system("cls");
    return;
}

void clearperson(Addressbooks* abs)
{
    abs->m_Size = 0;
    cout << "已清除聯系人" << endl;
    system("pause");
    system("cls");
    return;
}


int main()
{
    Addressbooks abs;
    abs.m_Size = 0;

    int select = 0;
    while (true)
    {
        show();
        cin >> select;
        switch (select)
        {
        case 1:
            addPerson(&abs);
            break;
        case 2:
            showperson(&abs);
            break;
        case 3:
        {   
            cout << "請輸入要被刪除的人的姓名" << endl;
            string name; cin >> name;
            int targat = findperson(&abs, name);
            deleteperson(&abs, name,targat);
            break; 
        }
            break;
        case 4:
        {
            cout << "請輸入要查找的人的姓名" << endl;
            string name; cin >> name;
            int targat = findperson(&abs, name);
            sendperson(&abs, targat);
            break;
        }
        case 5:
        {
            cout << "請輸入要修改的人的姓名" << endl;
            string name; cin >> name;
            int targat = findperson(&abs, name);
            editperson(&abs, targat);
            break;
        }
        case 6:
        {
            clearperson(&abs);
            break;
        }
            break;
        case 0:
            cout << "再見" << endl;
            system("pause");
            return 0;
            break;
        default:
            break;
        }
    }
    system("pause");
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
