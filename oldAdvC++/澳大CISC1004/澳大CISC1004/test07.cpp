#include <iostream>

using namespace std;

int lengthOfLastWord(string s) 
{
    int ans = 0;
    for (int i = s.length() - 1; i >= 0; i--) {
        if (s[i] == ' ')
        {
            continue;
        }
        for (; i >= 0 && s[i] != ' '; i--)
        {
            ans++;
        }
        break;
    }
    return ans;
}
int main()
{

}