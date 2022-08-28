#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Cstudent
{
public:
	int age;
	int num;
	string name;
};


//动态数组



int main()
{
	vector<int> arr_int;
	vector<char> arr_char;
	vector<Cstudent> arr_student;
	vector<char*> arr_pchar;

	std::vector<int> one;                                //定义一个空的、元素类型是 int 的 vector 动态数组
	std::vector<int> two(4, 100);               //定义一个包含4个元素，每个元素的值都是100的 vector 动态数组
	std::vector<int> three(two.begin(), two.end());  //使用 two 这个对象的迭代器，从开始到结束的所有元素来初始化当前对象
	std::vector<int> four(three);                       // 使用 three 这个对象来初始化当前对象

	int myints[] = { 16,2,77,29 };
	std::vector<int> five(myints, myints + sizeof(myints) / sizeof(int)); //使用一个普通的 int 数组来初始化当前对象

	return 0;
}