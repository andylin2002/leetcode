/*
 * @lc app=leetcode id=1768 lang=cpp
 *
 * [1768] Merge Strings Alternately
 */

// @lc code=start
#include <string>
#include <algorithm>

class Solution {
public:
    std::string mergeAlternately(std::string word1, std::string word2) {
        std::string result = "";
        int min_length = std::min(word1.size(), word2.size());
        for(int i = 0; i < min_length; i++){
            if(i < word1.size()){
                result += word1[i];
            }
            if(i < word2.size()){
                result += word2[i];
            }
        }

        if(word1.size() > min_length){
            result += word1.substr(min_length);
        }
        // result.append(word1, min_length, std::string::npos);

        if(word2.size() > min_length){
            result += word2.substr(min_length);
        }
        // result.append(word2, min_length, std::string::npos);

        return result;
    }
};
// @lc code=end

