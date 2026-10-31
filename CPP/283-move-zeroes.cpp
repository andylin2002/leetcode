/*
 * @lc app=leetcode id=283 lang=cpp
 *
 * [283] Move Zeroes
 */

// @lc code=start

#include <vector>
using namespace std;

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        // initialization
        int current_ptr = 0;
        int check_ptr = 0;
        int length = nums.size();

        while(current_ptr != length){
            check_ptr = current_ptr + 1;
            // use 'current_ptr' to find zero
            if(nums[current_ptr] == 0){
                // use 'check_ptr' to find non-zero
                while(check_ptr < length && nums[check_ptr] == 0){
                    check_ptr++;
                }
                if(check_ptr < length){
                    swap(nums[current_ptr], nums[check_ptr]);
                }
            }
            current_ptr++;    
        }
    }
};

// Remember to set proper boundary conditions for while loops.

// @lc code=end

