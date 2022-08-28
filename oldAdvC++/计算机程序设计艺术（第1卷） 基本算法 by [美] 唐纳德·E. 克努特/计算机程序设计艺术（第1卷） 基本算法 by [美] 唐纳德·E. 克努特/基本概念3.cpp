#include <iostream>

using namespace std;
int m, n;
//歐幾里得算法
int main()
{
	scanf("%d%d", &m, &n);
	////E0 減少運行的一半時間
	//if (m < n)
	//{
	//	int temp = m;
	//	m = n;
	//	n = temp;
	//}
	while (true)
	{
		//F1
		//以 n 除 m 為所得的mod ( m%n )
		m = m % n;
		//F2
		if (m == 0)
		{
			printf("%d", n);
			break;
		}
		//F3
		n = n % m;
		if (n == 0)
		{
			printf("%d", n);
			break;
		}
	}
	return 0;
}