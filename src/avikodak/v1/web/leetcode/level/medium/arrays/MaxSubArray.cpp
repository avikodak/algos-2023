/****************************************************************************************************************************************************
 *  File Name                   : MaxSubArray.cpp
 *  File Location               : /algos-2023/src/avikodak/v1/web/leetcode/level/medium/arrays/MaxSubArray.cpp
 *  Created on                  : Feb 6, 2023 :: 9:15:34 PM
 *  Author                      : avikodak
 *  URL                         : https://leetcode.com/problems/maximum-subarray/
 ****************************************************************************************************************************************************/

/****************************************************************************************************************************************************/
/*                                                                 INCLUDES                                                                         */
/****************************************************************************************************************************************************/

#include "v1/common/Includes.h"

using namespace std;

class Solution {
public:
    int maxSubArray(vector<int> &nums) {
        int maxSum = INT_MIN;
        int currentSum = 0;
        for (int counter = 0; counter < nums.size(); counter++) {
            currentSum = max(nums[counter], currentSum + nums[counter]);
            maxSum = max(maxSum, currentSum);
        }
        return maxSum;
    }
};
