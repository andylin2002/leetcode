/*
 * @lc app=leetcode id=605 lang=cpp
 *
 * [605] Can Place Flowers
 */

// @lc code=start

#include <vector>
using namespace std;

class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int count = 0;
        int length = flowerbed.size();

        for(int i = 0; i < length; i++){
            if(flowerbed[i] == 1){
                continue;
            }
            if((i == 0 || flowerbed[i-1] == 0) && (i == (length-1) || flowerbed[i+1] == 0)){
                flowerbed[i] = 1;
                count++;
            }
        }
        
        return count >= n;
    }
};

// Note:
// Solve the middle case first, then integrate the boundary cases
// instead of handling each case separately.

// @lc code=end

