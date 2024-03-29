/****************************************************************************************************************************************************
 *  File Name                   : UglyNumbers.cpp
 *  File Location               : /algos-2023/src/avikodak/v1/web/leetcode/level/easy/math/UglyNumbers.cpp
 *  Created on                  : Jan 27, 2023 :: 9:22:04 PM
 *  Author                      : avikodak
 *  URL                         : https://leetcode.com/problems/ugly-number
 ****************************************************************************************************************************************************/

/****************************************************************************************************************************************************/
/*                                                                 INCLUDES                                                                         */
/****************************************************************************************************************************************************/

#include "v1/common/Includes.h"

using namespace std;

class Solution {
public:
    bool isUgly(int n) {
        if (n == 0) {
            return false;
        }
        while (n % 5 == 0) {
            n /= 5;
        }
        while (n % 3 == 0) {
            n /= 3;
        }
        while (n % 2 == 0) {
            n /= 2;
        }
        return n == 1;
    }
};

