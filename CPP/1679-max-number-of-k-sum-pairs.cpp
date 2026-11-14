/*
 * @lc app=leetcode id=1679 lang=cpp
 *
 * [1679] Max Number of K-Sum Pairs
 */

 // @lc code=start

#include <vector>
#include <unordered_map>
using namespace std;


// Hash Table Method:
// Learned using "unordered_map to store the value that haven't used yet"
// Time = O(n), Space = O(n)
class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        unordered_map<int, int> count;
        int ret = 0;
        int need;

        for(int x : nums){
            need = k - x;
            if(count[need] > 0){
                count[need]--;
                ret++;
            }
            else{
                count[x]++;
            }
        }
        return ret;
    }
};

// #include <algorithm>

// // Sorting + Two Pointer Method
// // Learn how to use "sort" function, 
// // Time = O(nlogn), Space = O(1)
// class Solution {
// public:
//     int maxOperations(vector<int>& nums, int k) {
//         sort(nums.begin(), nums.end());
//         int left = 0;
//         int right = nums.size() - 1;
//         int ret = 0;

//         while(left < right){
//             if(nums[left] + nums[right] == k){
//                 ret++;
//                 left++;
//                 right--;
//             }
//             else if(nums[left] + nums[right] < k){
//                 left++;
//             }
//             else{
//                 right--;
//             }
//         }
//         return ret;
//     }
// };

// @lc code=end

