//ϰ��2-3 ��������

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int k = 0;
    int j;
    while (n > 0) 
    {
        for (int i = 0; i < k; i++) 
        {
            cout << " ";
        }
        k++;
        for (j = 2 * n - 1; j > 0; j--)
        {
            cout << "#";
        }
        j = j - 2;
        for (int i = 0; i < k; i++) 
        {
            cout << " ";
        }
        cout << endl;
        n--;
    }

    return 0;
}