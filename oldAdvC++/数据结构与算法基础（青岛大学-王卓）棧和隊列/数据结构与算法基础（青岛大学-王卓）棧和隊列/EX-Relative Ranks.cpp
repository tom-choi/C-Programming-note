#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        vector<int> sort = score;
        vector<string> ans;
        for (int i = 0; i < sort.size()-1; i++)
        {
            for (int j = 0; j < sort.size() - 1 - i; j++)
            {
                if (sort[j] < sort[j + 1])
                {
                    int temp = sort[j];
                    sort[j] = sort[j + 1];
                    sort[j + 1] = temp;
                }
            }
        }
        for (int i = 0; i < score.size(); i++)
        {
            for (int j = 0; j < score.size(); j++)
            {
                if (score[i] == sort[j])
                {
                    switch (j)
                    {
                    case 0:
                        ans.push_back("Gold Medal");
                    case 1:
                        ans.push_back("Silver Medal");
                    case 2:
                        ans.push_back("Bronze Medal");
                    default:
                        ans.push_back(to_string(j+1));
                        break;
                    }
                }
            }
        }
        return ans;
    }
};

int main()
{
    Solution S;
    vector<int> score = { 3,6,8,7,5 };
    S.findRelativeRanks(score);
}