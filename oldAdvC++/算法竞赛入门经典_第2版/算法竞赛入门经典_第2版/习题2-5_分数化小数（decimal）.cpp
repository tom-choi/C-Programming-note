#include <iostream>

using namespace std;

int main()
{
	int a, b, c,kcase = 0;
	while (scanf_s("%d%d%d", &a, &b, &c))
	{
		if (a == 0 && b == 0 && c == 0)
		{
			break;
		}
		cout << "Case " << ++kcase << ": ";
		cout << (a / b) << ".";
		for (int i = 1; i < c + 1; i++)
		{
			a *= 10;
			if (i == c && (a/b >4))
			{
				cout << (a / b) + 1 << endl;
				break;
			}
			else if (i == c && (a / b <= 4))
			{
				cout << (a / b) << endl;
				break;
			}
			cout << (a / b);
			a %= b;
		}	
	}
}