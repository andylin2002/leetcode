/*
 * @lc app=leetcode id=443 lang=cpp
 *
 * [443] String Compression
 */

// @lc code=start
#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution {
public:
    int compress(vector<char>& chars) {
        // initialization
        char current_char = '\0';
        int count = 0;
        string count_s;
        int length = chars.size();

        // compress
        for(int i = 0; i < length; i++){
            // check current char
            if(i == 0 || chars[i] != chars[i-1]){
                current_char = chars[i];
                count = 1;
                chars.push_back(current_char);
                continue;
            }

            count++;

            if(i == length - 1 || chars[i + 1] != current_char){
                count_s = to_string(count);
                chars.insert(chars.end(), count_s.begin(), count_s.end());
            }
        }

        chars.erase(chars.begin(), chars.begin() + length);

        return chars.size();
    }
};

// Learned: push_back(), to_string(), insert(), and erase().
// push_back(x): Add an element to the end of a vector.
// to_string(x): Convert a number to a string.
// insert(pos, begin, end): Insert a range of elements at a specified position.
// erase(begin, end): Remove elements within a specified range.

// @lc code=end

