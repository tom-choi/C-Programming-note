#include <iostream>
#include <string>

using namespace std;
template<class T>

//交換模板
void mySwap(T& a, T& b)
{
	T temp = a;
	a = b;
	b = temp;
}

//排序算法
template<typename T>
void mySort(T arr[], int len)
{
	//一定进行N-1轮比较
	for (int i = 0; i < len - 1; i++)
	{
		//每一轮比较前n-1-i个，即已排序好的最后i个不用比较
		for (int j = 0; j < len - 1 - i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				T temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}















	//for (int i = 0; i < len; i++)
	//{
	//	int max = i; //認定最大值的下標
	//	for (int j = i + 1; j < len; j++)
	//	{
	//		//認定的最大值 比 遍歷出的數值 要下
	//		if (arr[max] < arr[j])
	//			max = j;
	//	}
	//	if (max != i)
	//	{
	//		//max 和 i交換
	//		mySwap(arr[max], arr[i]);
	//	}
	//}
}
template<typename T>
void printArray(T arr[], int len)
{
	for (int i = 0; i < len; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}




/*
void bubble_sort(int a[],int n)//n为数组a的元素个数
{
    //一定进行N-1轮比较
    for(int i=0; i<n-1; i++)
    {
        //每一轮比较前n-1-i个，即已排序好的最后i个不用比较
        for(int j=0; j<n-1-i; j++)
        {
            if(a[j] > a[j+1])
            {
                int temp = a[j];
                a[j] = a[j+1];
                a[j+1]=temp;
            }
        }
    }
}
*/

void test01()
{
	char charArr[] = "badcfe";
	int num = sizeof(charArr) / sizeof(char);
	mySort(charArr, num);
	printArray(charArr, num);

	int intArr[] = {7,5,8,3,4,1,6,9,9,9};
	num = sizeof(intArr) / sizeof(int);
	mySort(intArr, num);
	printArray(intArr, num);
}




int main()
{
	test01();
}