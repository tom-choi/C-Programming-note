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
		//利用尾插法
		arr1.push_Back(i);
	}
	cout << "arr1的打印輸出為: " << endl;
	printarray(arr1);

	cout << "arr1的容量為: " << arr1.getCapacity() << endl;
	cout << "arr1的容量為: " << arr1.getSize() << endl;

	MyArray<int>arr2(arr1);
	cout << "arr2的打印輸出為: " << endl;
	printarray(arr2);

	//尾刪
	arr2.Pop_Back();
	cout << "arr2尾刪之後" << endl;
	cout << "arr2的容量為: " << arr2.getCapacity() << endl;
	cout << "arr2的容量為: " << arr2.getSize() << endl;

}


int main()
{
	test01();
	return 0;
}