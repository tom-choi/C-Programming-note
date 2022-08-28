#include <iostream>
using namespace std;

class Solution {
public:
    int maxPower(string s) {
        int data[500] = { 1 };
        if (s.length() == 1)
        {
            return 1;
        }
        for (int i = 0; i != s.length() - 1; i++)
        {
            if (s[i] == s[i+1])
            {
                data[i+1] = data[i] + 1;
            }
            else
            {
                data[i+1] = 1;
            }
        }
        int max = 1;
        for (int i = 0; i < s.length(); i++)
        {
            printf("%c ", s[i]);
        }
        cout << endl;
        for (int i = 0; i < s.length(); i++)
        {
            printf("%d ", data[i]);
        }
        cout << endl;
        for (int i = 0; i < s.length()-1; i++)
        {
            if (max < data[i+1])
            {
                max = data[i+1];
            }
        }
        return max;
    }
};

int main()
{
    Solution A;
    cout << A.maxPower("leetcode");
}