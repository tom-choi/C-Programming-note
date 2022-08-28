#include <iostream>
#include "workerManager.h"
#include "worker.h"
#include "employee.h"
#include "Boss.h"
#include "manager.h"

using namespace std;

int main()
{
    //TESTING
    //Worker* worker = NULL;
    //worker = new Employee(1, "TOM", 15);
    //worker->showinfo();
    //delete worker;

    //worker = new Manager(2, "Tommy", 19);
    //worker->showinfo();
    //delete worker;

    //worker = new Boss(3, "Timmy", 20);
    //worker->showinfo();
    //delete worker;

    //實例化對象
    WorkerManager wm;

    int choice = 0;

    while (true)
    {
        wm.show_menu();
        cout << "請輸入你的選擇: " << endl;
        cin >> choice;
        switch (choice)
        {
        case 0:
        {
            wm.ExitSystem();
            break;
        }
        case 1:
        {
            wm.Add_Emp();
            break;
        }
        case 2:
        {
            wm.Show_Emp();
            break;
        }
        case 3:
        {
            //testing
            /*int ret = wm.IsExist(1);
            if (ret != -1)
            {
                cout << "職工存在" << endl;
            }
            else
            {
                cout << "職工不存在" << endl;
            }*/
            wm.Del_Emp();
            break;
        }
        case 4:
        {
            wm.Mod_Emp();
            break;
        }
        case 5:
        {
            wm.Find_Emp();
            break;
        }
        case 6:
        {
            wm.Sort_Emp();
            break;
        }
        case 7:
        {
            wm.Clean_File();
            break;
        }
        default:
        {
            system("cls");
            break;
        }
        }
    }
    
    system("pause");

    return 0;
}