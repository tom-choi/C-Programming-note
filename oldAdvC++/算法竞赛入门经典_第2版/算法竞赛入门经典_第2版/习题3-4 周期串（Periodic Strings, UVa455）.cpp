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
        for (int i = 1; i <= len; ++i) //�˴��� i �������� 
            if (len % i == 0)
            {
                for (j = i; j <= len; j++) //����Ϊ i  ��ֱ�Ӵӵ� i ��Ԫ�ؿ�ʼ�ж�
                    if (s[j] != s[j % i]) //a b c  a != a
                        break;
                if (j == len) //û������ �� Ҳ�����������ַ������ȵ����
                {
                    cout << i << endl;
                    break;
                }
            }
        if (T)cout << endl;
    }
}