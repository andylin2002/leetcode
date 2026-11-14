/*
 * @lc app=leetcode id=643 lang=cpp
 *
 * [643] Maximum Average Subarray I
 */

// @lc code=start

#include <vector>
using namespace std;

class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double current_total = 0;
        double max = 0;
        
        for(int i = 0; i < (nums.size() - k + 1); i++){
            if(i == 0){
                for(int j = 0; j < k; j++){
                    current_total += nums[j];
                    max = current_total;
                }
            }
            else{
                current_total += nums[i + k - 1] - nums[i - 1];
                if(current_total > max){
                    max = current_total;
                }
            }
        }

        return max / k;
    }
};

// Sliding Window (fixed size)
// Time = O(n), Space = O(1)
// @lc code=end

