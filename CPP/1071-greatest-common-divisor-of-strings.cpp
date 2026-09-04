/*
 * @lc app=leetcode id=1071 lang=cpp
 *
 * [1071] Greatest Common Divisor of Strings
 */

// @lc code=start

#include <iostream>
#include <string>
#include <numeric>

class Solution {
public:
    std::string gcdOfStrings(std::string str1, std::string str2) {
        // If str1 + str2 != str2 + str1, the two strings do not share
        // the same repeating base pattern(s = t + ... + t).
        if(str1 + str2 != str2 + str1){
            return "";
        }

        // Otherwise, the length of the longest common divisor string is
        // gcd(str1.size(), str2.size()).
        return str1.substr(0, std::gcd(str1.size(), str2.size()));
    }
};
// @lc code=end

