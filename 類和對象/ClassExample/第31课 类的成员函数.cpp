#include <iostream>
#include <string>
using namespace std;

//在编译阶段就将宏的代码展开直接替换调用宏的地方。
//所以省去了函数调用的压栈、出栈等开销。所以执行效率方面要比函数高。
#define Max_NUM(x,y) (x>y?x:y)

class student
{
public:
	string name{};
	int num{};
	int age{};

	int get_max_num(int a, int b, int c);
	void print_name();

	//类的成员函数的实现

private:
	char sex{};

	//用inline关键字声明的函数，可以在调用的时候，
	//将函数的代码直接嵌入到调用的地方，
	//所以大大的减少了函数调用的开销，提高了效率
	inline int max_num(int x, int y)
	{
		return (x > y ? x : y);
	}
	//只有当函数的执行体很小，只有几行代码，
	//而且会被频繁的调用的时候才适合作为 inline 内联函数
};

int student::max_num(int x, int y)
{
	return x > y ? x : y;
}

int student::get_max_num(int a, int b, int c)
{
	int max_ab = max_num(a, b);
	return max_ab > c ? max_ab : c;
}

void student::print_name()
{
	cout << "name = " << name << endl;
	cout << "number = " << num << endl;
	cout << "age = " << age << endl;
}

int main()
{
	int a = 5;
	++a;
	int b = a + 3;
	int ret = Max_NUM(6, 3);
	cout << ret << endl;
	printf("%d%d\n", a, b);

	student stu[2]; stu[0].name = "Tom"; stu[0].age = 18; stu[0].num = 100;
	stu[0].print_name();

	return 0;

}