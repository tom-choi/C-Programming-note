#include <iostream>

using namespace std;
int m, n, r;
//歐幾里得算法
int main()
{
	scanf("%d%d", &m, &n);
	//E0 減少運行的一半時間
	if (m < n)
	{
		int temp = m;
		m = n;
		n = temp;
	}
	while (true)
	{
		//E1
		//以 n 除 m 為所得的mod ( m%n )
		r = m % n;
		//E2
		if (r == 0)
		{
			printf("%d", n);
			break;
		}
		//E3
		m = n;
		n = r;
	}
	return 0;
}