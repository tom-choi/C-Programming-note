#include <iostream>
#include <string>
using namespace std;


class CStudent
{
public:
    char* p_name{};
    char sex{};
    int num{};
    int age{};
    CStudent() {};
    CStudent(char* pname, char t_sex, int t_num, int t_age) :sex(t_sex), num(t_num), age(t_age)
    {
        p_name = NULL;
        int n_len = 0;
        if (pname)
        {
            n_len = strlen(pname);
        }

        if (n_len > 0)
        {
            p_name = new char[n_len + 1];
            memset(p_name, 0, n_len + 1);
            strcpy(p_name, pname);
        }
    }
    CStudent(const CStudent& stud)
    {
        int n_len = 0;
        n_len = strlen(stud.p_name);
        p_name = new char[n_len + 1];
        memset(p_name, 0, n_len + 1);
        strcpy(p_name, stud.p_name);
        num = stud.num;
        age = stud.age;
    }
    ~CStudent();
};
CStudent::~CStudent()
{
    if (p_name)
    {
        delete[] p_name;
        p_name = NULL;
    }
}

void test()
{
    CStudent stud_1 = { "zhangsan",'m', 1001, 20 };
    CStudent stud_2(stud_1);
}

int main(int argc, char* argv[])
{
    test();
    return 0;
}