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


//��̬����



int main()
{
	vector<int> arr_int;
	vector<char> arr_char;
	vector<Cstudent> arr_student;
	vector<char*> arr_pchar;

	std::vector<int> one;                                //����һ���յġ�Ԫ�������� int �� vector ��̬����
	std::vector<int> two(4, 100);               //����һ������4��Ԫ�أ�ÿ��Ԫ�ص�ֵ����100�� vector ��̬����
	std::vector<int> three(two.begin(), two.end());  //ʹ�� two �������ĵ��������ӿ�ʼ������������Ԫ������ʼ����ǰ����
	std::vector<int> four(three);                       // ʹ�� three �����������ʼ����ǰ����

	int myints[] = { 16,2,77,29 };
	std::vector<int> five(myints, myints + sizeof(myints) / sizeof(int)); //ʹ��һ����ͨ�� int ��������ʼ����ǰ����

	return 0;
}