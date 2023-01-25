/****************************************************************************************************************************************************
 *  File Name                   : SingleNumber.cpp
 *  File Location               : /algos-2023/src/avikodak/v1/web/leetcode/level/easy/arrays/SingleNumber.cpp
 *  Created on                  : Jan 24, 2023 :: 8:03:55 PM
 *  Author                      : avikodak
 *  URL                         : https://leetcode.com/problems/single-number/
 ****************************************************************************************************************************************************/

/****************************************************************************************************************************************************/
/*                                                                 INCLUDES                                                                         */
/****************************************************************************************************************************************************/

#include "v1/common/Includes.h"

using namespace std;

class Solution {
public:
    int singleNumber(vector<int> &nums) {
        int xorResult = 0;
        for (int counter = 0; counter < nums.size(); counter++) {
            xorResult ^= nums[counter];
        }
        return xorResult;
    }
};
