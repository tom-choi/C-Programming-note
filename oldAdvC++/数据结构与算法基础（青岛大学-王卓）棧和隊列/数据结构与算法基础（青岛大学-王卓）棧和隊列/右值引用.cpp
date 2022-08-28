#include <iostream>

enum GENDER 
{
    Male,
    Female
};

class Student 
{
public:
    std::string id_; //學號
    std::string name_; //名字
    GENDER gen_; //性別
};

class StClass {
public:
    //move constructor
    StClass(StClass&& r)
    {
        for (size_t i = 0; i < 5; ++i)
        {
            stu_[i] = std::move(r.stu_[i]);
        }
    }

    //copy constructor
   /* StClass(const StClass& r)
    {
        for (size_t i = 0; i < 5; ++i)
        {
            stu_[i] = r.stu_[i];
        }
    }*/
    StClass()
    {
        Student std_AAA;
        std_AAA.name_ = "sdas";
        for (size_t i = 0; i < 5; ++i)
        {
            stu_[i] = std_AAA;
        }
    }
    void PrintStudentName()
    {
        for (size_t i = 0; i < 5; ++i)
        {
            std::cout << stu_[i].name_ << std::endl;
        }
    }
    Student stu_[5]; //五個人的班級
};

int main()
{
    StClass class_A; // 構造班級A
    //... 設定屬性
    StClass class_B(std::move(class_A)); // 移動班級A到班級B
    class_A.PrintStudentName();
    class_B.PrintStudentName();
    return 0;
}