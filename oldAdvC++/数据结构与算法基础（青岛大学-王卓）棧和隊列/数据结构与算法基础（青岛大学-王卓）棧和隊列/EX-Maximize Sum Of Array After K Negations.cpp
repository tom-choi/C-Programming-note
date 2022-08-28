#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;


class Solution {
public:
    int largestSumAfterKNegations(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        int max = 0;
        int times = 0;
        if (nums.size() - times < k)
        {
            times += 2;
        }
        while (times < k)
        {
            vector<int> neW_nums = nums;
            for (int i = 0; i < k - times; i++)
            {
                neW_nums[i] = -neW_nums[i];
            }
            int new_max = 0;
            for (int i = 0; i < neW_nums.size(); i++)
            {
                new_max += neW_nums[i];
            }
            if (new_max > max)
                max = new_max;
            times += 2;
        }
        return max;
    }
};