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
        int result;
        for (int counter = 1; counter <= userInput / 2; counter++) {
            if (counter * counter < userInput) {
                result = counter;
            }
        }
        return result;
    }
};
