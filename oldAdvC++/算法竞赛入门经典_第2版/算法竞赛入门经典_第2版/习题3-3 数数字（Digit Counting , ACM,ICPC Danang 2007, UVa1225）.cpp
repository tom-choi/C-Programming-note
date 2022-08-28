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
            s += to_string(i); //此处 to_string() 函数 整形转为字符串
        for (int i = 0; i < s.length(); i++)
            a[s[i] - '0']++; //此处注意s[i]  取得的类型是 char
        for (int i = 0; i < 9; i++)
            cout << a[i] << " ";
        cout << a[9]; //注意输出格式，最后不能有空格 第一次没管交上去PE了
        cout << endl;
    }
    return 0;
}