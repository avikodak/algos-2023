/****************************************************************************************************************************************************
 *  File Name                   : Base7.cpp
 *  File Location               : /algos-2023/src/avikodak/v1/web/leetcode/level/easy/math/Base7.cpp
 *  Created on                  : Feb 8, 2023 :: 6:55:33 PM
 *  Author                      : avikodak
 *  URL                         : https://leetcode.com/problems/base-7
 ****************************************************************************************************************************************************/

/****************************************************************************************************************************************************/
/*                                                                 INCLUDES                                                                         */
/****************************************************************************************************************************************************/

#include "v1/common/Includes.h"

using namespace std;

class Solution {
public:
    string convertToBase7(int num) {
        if (num == 0) {
            return "0";
        }
        string result;
        bool isNegative = num < 0;
        if (isNegative) {
            num *= -1;
        }
        while (num) {
            result.push_back(num % 7 + '0');
            num /= 7;
        }
        if (isNegative) {
            result.push_back('-');
        }
        reverse(result.begin(), result.end());
        return result;
    }
};
