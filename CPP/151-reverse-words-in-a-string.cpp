/*
 * @lc app=leetcode id=151 lang=cpp
 *
 * [151] Reverse Words in a String
 */

// @lc code=start
#include<string>
using namespace std;

class Solution {
public:
    string reverseWords(string s) {
        int left = 0;
        int right = s.length() - 1;
        
        // reverse the whole string 
        while(left < right){
            swap(s[left], s[right]);
            left++;
            right--;
        }

        // clean redundent space
        int read = 0;
        int write = 0;

        while(read < s.length()){
            while(read < s.length() && s[read] == ' '){
                read++;
            }
            if(read < s.length() && write > 0){
                s[write] = ' ';
                write++;
            }
            while(read < s.length() && s[read] != ' '){
                s[write] = s[read];
                read++;
                write++;
            }
        }
        s.resize(write);

        // reverse each word
        int check = 0;
        left = 0;
        right = 0;

        while(check < s.length()){
            while(check < s.length() && s[check] != ' '){
                check++;
            }
            right = check - 1;
            while(left < right){
                swap(s[left], s[right]);
                left++;
                right--;
            }
            left = check + 1;
            check++;
        }

        return s;
    }
};
// @lc code=end

