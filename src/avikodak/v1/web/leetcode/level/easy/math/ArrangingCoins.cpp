/****************************************************************************************************************************************************
 *  File Name                   : ArrangingCoins.cpp
 *  File Location               : /algos-2023/src/avikodak/v1/web/leetcode/level/easy/math/ArrangingCoins.cpp
 *  Created on                  : Feb 6, 2023 :: 7:54:42 PM
 *  Author                      : avikodak
 *  URL                         : https://leetcode.com/problems/arranging-coins
 ****************************************************************************************************************************************************/

/****************************************************************************************************************************************************/
/*                                                                 INCLUDES                                                                         */
/****************************************************************************************************************************************************/

#include "v1/common/Includes.h"

using namespace std;

class Solution {
public:
    int arrangeCoins(int n) {
        long long int result = (-1 + sqrt(1 + 8 * (long long int) n)) / 2;
        return result;
    }
};

