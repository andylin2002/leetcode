/*
 * @lc app=leetcode id=392 lang=cpp
 *
 * [392] Is Subsequence
 */

// @lc code=start

#include <string>
#include <iostream>
using namespace std;

class Solution {
public:
    bool isSubsequence(string s, string t) {
        int length_s = s.size();
        int length_t = t.size();
        int check_s = 0;

        for(int i = 0; i < length_t; i++){
            if(t[i] == s[check_s]){
                check_s++;
            }
        }

        return (check_s == length_s);
    }
};
// Iterate through the longer string t and match characters in s in order.
// Move the s pointer forward whenever a match is found.
// @lc code=end

