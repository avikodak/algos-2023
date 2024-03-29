/****************************************************************************************************************************************************
 *  File Name                   : Sqrtx.cpp
 *  File Location               : /algos-2023/src/avikodak/v1/web/leetcode/level/easy/math/Sqrtx.cpp
 *  Created on                  : Jan 24, 2023 :: 6:09:24 PM
 *  Author                      : avikodak
 *  URL                         : https://leetcode.com/problems/sqrtx/
 ****************************************************************************************************************************************************/

/****************************************************************************************************************************************************/
/*                                                                 INCLUDES                                                                         */
/****************************************************************************************************************************************************/

#include "v1/common/Includes.h"

class Solution {
public:
    int mySqrt(int userInput) {
        if (userInput <= 1) {
            return userInput;
        }
        int left = mySqrt(userInput >> 2) << 1;
        int right = left + 1;
        return (long) right * right > userInput ? left : right;
    }
};

