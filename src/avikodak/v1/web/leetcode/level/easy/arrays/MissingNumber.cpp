/****************************************************************************************************************************************************
 *  File Name                   : MissingNumber.cpp
 *  File Location               : /algos-2023/src/avikodak/v1/web/leetcode/level/easy/arrays/MissingNumber.cpp
 *  Created on                  : Feb 1, 2023 :: 10:54:54 PM
 *  Author                      : avikodak
 *  URL                         : https://leetcode.com/problems/missing-number
 ****************************************************************************************************************************************************/

/****************************************************************************************************************************************************/
/*                                                                 INCLUDES                                                                         */
/****************************************************************************************************************************************************/

#include "v1/common/Includes.h"

using namespace std;

class Solution {
public:
    int missingNumber(vector<int> &nums) {
        int sum = 0;
        int n = nums.size();
        for (int counter = 0; counter < nums.size(); counter++) {
            sum += nums[counter];
        }
        return (n * (n + 1)) / 2 - sum;
    }
};

