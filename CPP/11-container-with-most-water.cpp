/*
 * @lc app=leetcode id=11 lang=cpp
 *
 * [11] Container With Most Water
 */

// @lc code=start

#include <vector>
using namespace std;

class Solution {
public:
    int maxArea(vector<int>& height) {
        int length = height.size();
        int current = 0;
        int maxArea = 0;

        int left = 0;
        int right = length - 1;
        while(left < right){
            current = min(height[left], height[right]) * (right - left);
            maxArea = max(maxArea, current);

            if(height[left] < height[right]){
                left++;
            }
            else{
                right--;
            }
        }

        return maxArea;        
    }
};
// Move the pointer with the shorter height inward, since the shorter side limits the area.
// This gives us a chance to find a taller boundary and a larger area.
// @lc code=end

