#include <iostream>
#include <string>
using namespace std;

int main()
{
    int T; cin >> T;
    char s[128];
    while (T--)
    {
        memset(s, 0, sizeof(s));
        scanf("%s", s);
        int len = strlen(s);
        int j;
        for (int i = 1; i <= len; ++i) //此处的 i 就是周期 
            if (len % i == 0)
            {
                for (j = i; j <= len; j++) //周期为 i  则直接从第 i 个元素开始判断
                    if (s[j] != s[j % i]) //a b c  a != a
                        break;
                if (j == len) //没有周期 ， 也就是周期是字符串长度的情况
                {
                    cout << i << endl;
                    break;
                }
            }
        if (T)cout << endl;
    }
}