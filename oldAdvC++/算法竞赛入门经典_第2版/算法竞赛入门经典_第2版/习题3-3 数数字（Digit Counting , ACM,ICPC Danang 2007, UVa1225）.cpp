#include <iostream>
#include <string>
using namespace std;


int main() {
    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        string s = "";
        int a[10] = { 0 };
        for (int i = 1; i <= n; i++)
            s += to_string(i); //�˴� to_string() ���� ����תΪ�ַ���
        for (int i = 0; i < s.length(); i++)
            a[s[i] - '0']++; //�˴�ע��s[i]  ȡ�õ������� char
        for (int i = 0; i < 9; i++)
            cout << a[i] << " ";
        cout << a[9]; //ע�������ʽ��������пո� ��һ��û�ܽ���ȥPE��
        cout << endl;
    }
    return 0;
}