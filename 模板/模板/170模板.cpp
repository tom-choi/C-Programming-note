#include <iostream>
#include <string>

using namespace std;
template<class T>

//���Qģ��
void mySwap(T& a, T& b)
{
	T temp = a;
	a = b;
	b = temp;
}

//�����㷨
template<typename T>
void mySort(T arr[], int len)
{
	//һ������N-1�ֱȽ�
	for (int i = 0; i < len - 1; i++)
	{
		//ÿһ�ֱȽ�ǰn-1-i������������õ����i�����ñȽ�
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
	//	int max = i; //�J�����ֵ����
	//	for (int j = i + 1; j < len; j++)
	//	{
	//		//�J�������ֵ �� ��v���Ĕ�ֵ Ҫ��
	//		if (arr[max] < arr[j])
	//			max = j;
	//	}
	//	if (max != i)
	//	{
	//		//max �� i���Q
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
void bubble_sort(int a[],int n)//nΪ����a��Ԫ�ظ���
{
    //һ������N-1�ֱȽ�
    for(int i=0; i<n-1; i++)
    {
        //ÿһ�ֱȽ�ǰn-1-i������������õ����i�����ñȽ�
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