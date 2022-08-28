#include <iostream>
using namespace std;

class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int abc[26] = { 0 };
        for (int i = 0; i < magazine.length(); i++)
        {
            abc[int(magazine[i]) - 97]++;
        }
        for (int i = 0; i < ransomNote.length(); i++)
        {
            abc[int(ransomNote[i]) - 97]--;
            if (abc[int(ransomNote[i]) - 97] < 0)
                return false;
        }
        return true;
    }
};