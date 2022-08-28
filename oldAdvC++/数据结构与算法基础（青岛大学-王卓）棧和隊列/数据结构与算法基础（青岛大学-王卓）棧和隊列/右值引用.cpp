#include <iostream>

enum GENDER 
{
    Male,
    Female
};

class Student 
{
public:
    std::string id_; //�W̖
    std::string name_; //����
    GENDER gen_; //�Ԅe
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
    Student stu_[5]; //�傀�˵İ༉
};

int main()
{
    StClass class_A; // ����༉A
    //... �O������
    StClass class_B(std::move(class_A)); // �ƄӰ༉A���༉B
    class_A.PrintStudentName();
    class_B.PrintStudentName();
    return 0;
}