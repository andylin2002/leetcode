/*
 * @lc app=leetcode id=334 lang=cpp
 *
 * [334] Increasing Triplet Subsequence
 */

// @lc code=start
#include<vector>
#include<climits>
using namespace std;

class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        // initialization
        int min = INT_MAX;
        int middle = INT_MAX;
        int length = nums.size();
        bool result = false;

        for(int i = 0; i < length; i++){
            // check "min"
            if(nums[i] <= min){
                min = nums[i];
                continue;
            }

            // check "middle"
            if(nums[i] <= middle){
                middle = nums[i];
                continue;
            }

            result = true;
        }
        return result;
    }
};
/*
 * Only need to know IF a triplet exists, not which one.
 * min    = smallest number seen so far
 * middle = smallest number that has a smaller number before it
 * If nums[i] > middle -> triplet exists.
 *
 * min/middle may be out of index order (e.g. [1,5,0,6]), but it's fine:
 * when middle was set, a smaller number already came before it.
 * Use "<=" for strictly increasing.
 *
 * Time O(n), Space O(1)
 */

// @lc code=end

