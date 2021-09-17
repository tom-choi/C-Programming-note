#include <iostream>
#include <string>

using namespace std;

class Animal
{
public:
    //vfptr 虛函數指針
    //vfptable 虛函數表w
    virtual void speak()
    {
        cout << "動物在說話" << endl;
    }
};

class cat : public Animal
{
public:
    //虛函數
    void speak()
    {
        cout << "小貓在說話" << endl;
    }

};

class dog : public Animal
{
public:
    //虛函數
    void speak()
    {
        cout << "小狗在說話" << endl;
    }

};

//地址早綁定，確定函數地址
void despeak(Animal& animal)
{
    animal.speak();
}

void test01()
{
    cat cat; dog dog;
    despeak(cat);
    despeak(dog);
}

void test02()
{
    cout << "sizeof Animal = " << sizeof(Animal) << endl; //虛函數中指針大小為4位元 在64位元電腦或顯示8位元
}


int main()
{
    test01();
    test02();
    return 0;
}
