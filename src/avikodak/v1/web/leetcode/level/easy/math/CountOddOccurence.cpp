/****************************************************************************************************************************************************
 *  File Name                   : CountOddOccurence.cpp
 *  File Location               : /algos-2023/src/avikodak/v1/web/leetcode/level/easy/math/CountOddOccurence.cpp
 *  Created on                  : Feb 8, 2023 :: 10:56:50 PM
 *  Author                      : avikodak
 *  URL                         : https://leetcode.com/problems/count-odd-numbers-in-an-interval-range
 ****************************************************************************************************************************************************/

/****************************************************************************************************************************************************/
/*                                                                 INCLUDES                                                                         */
/****************************************************************************************************************************************************/

#include "v1/common/Includes.h"

using namespace std;

class Solution {
public:
    int countOdds(int low, int high) {
        if (low % 2 == 0) {
            low++;
        }
        return low > high ? 0 : (high - low) / 2 + 1;
    }
};
