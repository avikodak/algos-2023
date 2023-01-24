/****************************************************************************************************************************************************
 *  File Name                   : SingleNumber.cpp
 *  File Location               : /algos-2023/src/avikodak/v1/web/leetcode/level/easy/lists/SingleNumber.cpp
 *  Created on                  : Jan 15, 2023 :: 8:00:08 PM
 *  Author                      : avikodak
 *  URL                         : https://leetcode.com/problems/single-number/
 ****************************************************************************************************************************************************/

/****************************************************************************************************************************************************/
/*                                                                 INCLUDES                                                                         */
/****************************************************************************************************************************************************/

#include "v1/common/Includes.h"

class Solution {
public:
    int singleNumber(std::vector<int> &nums) {
        int result = 0;
        for (int counter = 0; counter < nums.size(); counter++) {
            result ^= nums[counter];
        }
        return result;
    }
};
