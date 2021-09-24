#include <iostream>
#include <string>

using namespace std;
//泛型編程
//template<typename T>

//void swapInt(int& a, int& b)
//{
//	int temp = a;
//	a = b;
//	b = temp;
//}
//
//void swapdouble(double& a, double& b)
//{
//	double temp = a;
//	a = b;
//	b = temp;
//}

//函數模板
template<typename T> //聲明一個模板，T為通用數據類型
void mySwap(T& a, T& b)
{
	T temp = a;
	a = b;
	b = temp;
}

void test01()
{
	int a = 10;
	int b = 20;
	/*swapInt(a, b);*/
	//利用模板
	//兩種方式
	//1.自動類型推導 //
	mySwap(a, b);
	//2.顯示指定類型 //
	mySwap<int>(a, b);
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
}

int main()
{
	test01();
}
