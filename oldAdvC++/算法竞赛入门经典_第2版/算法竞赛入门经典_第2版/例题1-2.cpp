#include <iostream>
using namespace std;
//int main()
//{
//	int a;
//	scanf_s("%d", &a);
//	printf("%d%d%d\n",a%10,a/10%10,a/100);
//}

int main() 
{
    int n = 0;
    while (cin >> n) 
    {
        for (int i = 10000; n != 0; i /=10)
        {
            cout << n / i;
            n / 10;
            if (n != 0)
            {
                cout << "  ";
            }
        }
    }
    return 0;
}