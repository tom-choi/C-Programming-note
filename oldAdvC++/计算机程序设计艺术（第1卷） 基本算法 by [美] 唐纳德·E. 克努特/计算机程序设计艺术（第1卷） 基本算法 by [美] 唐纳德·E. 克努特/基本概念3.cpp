#include <iostream>

using namespace std;
int m, n;
//�W������㷨
int main()
{
	scanf("%d%d", &m, &n);
	////E0 �p���\�е�һ��r�g
	//if (m < n)
	//{
	//	int temp = m;
	//	m = n;
	//	n = temp;
	//}
	while (true)
	{
		//F1
		//�� n �� m �����õ�mod ( m%n )
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