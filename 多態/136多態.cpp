#include <iostream>
#include <string>

using namespace std;

class Animal
{
public:
    //vfptr ̓����ָ�
    //vfptable ̓������w
    virtual void speak()
    {
        cout << "�������fԒ" << endl;
    }
};

class cat : public Animal
{
public:
    //̓����
    void speak()
    {
        cout << "С؈���fԒ" << endl;
    }

};

class dog : public Animal
{
public:
    //̓����
    void speak()
    {
        cout << "С�����fԒ" << endl;
    }

};

//��ַ�罉�����_��������ַ
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
    cout << "sizeof Animal = " << sizeof(Animal) << endl; //̓������ָᘴ�С��4λԪ ��64λԪ��X���@ʾ8λԪ
}


int main()
{
    test01();
    test02();
    return 0;
}
