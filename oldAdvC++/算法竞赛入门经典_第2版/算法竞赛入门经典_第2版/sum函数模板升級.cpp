#include <iostream>

using namespace std;

//int sum(int* begin, int* end)
//{
//	int* p = begin;
//	int ans = 0;
//	for (int* p = begin; p != end; p++)
//	{
//		ans += *p;
//	}
//	return ans;
//}
//
//int main()
//{
//	int a[] = { 1,2,3,4,5,6,7,8,9};
//	cout << sum(a,a+1) << endl;
//}

template<typename T>
T sum(T* begin, T* end)
{
	T* p = begin;
	T ans = 0;
	for (T* p = begin; p != end; *p++)
	{
		ans = ans + *p;
	}
	return ans;
}

int main()
{
	int a[] = { 1,2,3,4,5 };
	double b[] = { 1.1,2.2,3.3,4.4 };
	cout << sum(a, a + 5) << endl;
	cout << sum(b, b + 4) << endl;
}