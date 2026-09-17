/*
 * @lc app=leetcode id=1431 lang=cpp
 *
 * [1431] Kids With the Greatest Number of Candies
 */

// @lc code=start

#include <vector>
using namespace std;

class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
      int length = candies.size();
      vector<bool> result(length);
      vector<int> target(length);
      bool check;

      for(int i = 0; i < length; i++){
        target[i] = candies[i] + extraCandies;
        check = true;

        for(int j = 0; j < length; j++){
            if(target[i] < candies[j]){
                check = false;
            }
        }

        result[i] = check;
      }

      return result;
    }
};

// Note:
// Remember to specify the vector size before accessing elements with [].
// vector<int> v(n);  // Create n elements
// vector<int> v;     // Empty vector


// @lc code=end

