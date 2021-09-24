#include <iostream>
#include "182MyArray.hpp"
using namespace std;

void printarray(MyArray <int>&arr1)
{
	for (int i = 0; i < arr1.getSize(); i++)
	{
		cout << arr1[i] << endl;
	}
}

void test01()
{
	MyArray<int>arr1(5);
	for (int i = 0; i < 5; i++)
	{
		//����β�巨
		arr1.push_Back(i);
	}
	cout << "arr1�Ĵ�ӡݔ����: " << endl;
	printarray(arr1);

	cout << "arr1��������: " << arr1.getCapacity() << endl;
	cout << "arr1��������: " << arr1.getSize() << endl;

	MyArray<int>arr2(arr1);
	cout << "arr2�Ĵ�ӡݔ����: " << endl;
	printarray(arr2);

	//β�h
	arr2.Pop_Back();
	cout << "arr2β�h֮��" << endl;
	cout << "arr2��������: " << arr2.getCapacity() << endl;
	cout << "arr2��������: " << arr2.getSize() << endl;

}


int main()
{
	test01();
	return 0;
}