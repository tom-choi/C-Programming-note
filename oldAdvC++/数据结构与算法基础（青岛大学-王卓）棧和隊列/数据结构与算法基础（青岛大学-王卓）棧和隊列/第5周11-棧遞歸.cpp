#include <iostream>
using namespace std;

//如果一個過程直接或間接，則叫這個為遞歸
long Fact(long n)
{
	//基本項
	if (n == 0)
		return 1;
	//歸納項
	else
		return n * Fact(n - 1);
}
//先調用先返回
//尾遞歸->循環結構，單向遞歸->循環結構


int main()
{
	return 0;
}