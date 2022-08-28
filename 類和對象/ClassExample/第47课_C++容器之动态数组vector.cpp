#include <iostream>
#include <vector>
#include <string>

using namespace std;

void test01()
{
	vector<int> arr_int;
	//arr_int[idx];arr_int.at(idx); //返回动态数组中下标为 idx 的 arr_int[idx] 元素的值
	arr_int.size();        //返回 arr_int 数组元素的总个数
	arr_int.front();        //返回 arr_int 数组的第一个元素的值
	arr_int.back();        //返回 arr_int 数组的最后一个元素的值
	arr_int.clear();        //清空 arr_int 数组，即把里面的所有元素都删除
	arr_int.begin();        //返回 arr_int 数组第一个数的下标
	arr_int.end();        //返回 arr_int 数组最后一个数的下标
	arr_int.empty();        //判断 arr_int 数组是否为空，如果为空则返回true，非空（有元素）则返回false
	//arr_int.swap(v1);    //v1是另一个动态数组，将 arr_int 和 v1 两个动态数组的元素互换
	//swap(arr_int, v1);    //同⑨
}

int main()
{
	int a[] = { 1, 4, 3, 7, 9, 3, 6, 8, 3, 5, 2, 3, 7 };
	vector<int> arr_int;
	arr_int.insert(arr_int.end(), a, a + sizeof(a) / sizeof(int));

	cout << *arr_int.begin() << endl;

	vector<int>::iterator itor;
	for (itor = arr_int.begin(); itor != arr_int.end(); itor++)//使用 for 循环删除动态数组中的值为 3 的元素
	{
		if (*itor == 3)
		{
			itor = arr_int.erase(itor);
			itor--;
		}

	}
	for (int idx = 0; idx < arr_int.size(); idx++)//使用 for 循环打印结果
	{
		cout << arr_int[idx] << " ";
	}
	cout << endl;


	return 0;
}