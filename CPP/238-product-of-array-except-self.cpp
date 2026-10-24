/*
 * @lc app=leetcode id=238 lang=cpp
 *
 * [238] Product of Array Except Self
 */

// @lc code=start
#include<vector>
using namespace std;

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        // initialization
        int length = nums.size();
        vector<int> result(length, 1);
        int left = 1;
        int right = 1;

        // left production
        for(int i = 0; i < length; i++){
            result[i] = left;
            left *= nums[i];
        }

        // right production
        for(int i = length - 1; i >= 0; i--){
            result[i] *= right;
            right *= nums[i];
        }

        return result;
    }
};
// @lc code=end

