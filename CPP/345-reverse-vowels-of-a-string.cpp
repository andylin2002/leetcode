/*
 * @lc app=leetcode id=345 lang=cpp
 *
 * [345] Reverse Vowels of a String
 */

// @lc code=start

#include<string>
#include <iostream>
using namespace std;

class Solution {
public:
    string reverseVowels(string s) {
        string vowels = "aeiouAEIOU";
        int length = s.size();        
        int pleft = 0;
        int pright = length - 1;
        char temp;

        while(pleft < pright){
            if(vowels.find(s[pleft]) == string::npos){
                pleft++;
            }
            if(vowels.find(s[pright]) == string::npos){
                pright--;
            }
            if(vowels.find(s[pleft]) != string::npos && vowels.find(s[pright]) != string::npos){
                temp = s[pleft];
                s[pleft] = s[pright];
                s[pright] = temp;
                pleft++;
                pright--;
            }
        }
        return s;
    }
};
// @lc code=end

