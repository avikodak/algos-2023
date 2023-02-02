/****************************************************************************************************************************************************
 *  File Name                   : ValidPerfectSquare.cpp
 *  File Location               : /algos-2023/src/avikodak/v1/web/leetcode/level/easy/math/ValidPerfectSquare.cpp
 *  Created on                  : Feb 1, 2023 :: 10:30:34 PM
 *  Author                      : avikodak
 *  URL                         : https://leetcode.com/problems/valid-perfect-square
 ****************************************************************************************************************************************************/

/****************************************************************************************************************************************************/
/*                                                                 INCLUDES                                                                         */
/****************************************************************************************************************************************************/

#include "v1/common/Includes.h"

using namespace std;

class Solution {
public:
    bool isPerfectSquare(int num) {
        int sqrtValue = sqrt(num);
        return sqrtValue * sqrtValue == num;
    }
};
