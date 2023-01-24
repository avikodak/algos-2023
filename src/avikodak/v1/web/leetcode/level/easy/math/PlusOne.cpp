/****************************************************************************************************************************************************
 *  File Name                   : PlusOne.cpp
 *  File Location               : /algos-2023/src/avikodak/v1/web/leetcode/level/easy/math/PlusOne.cpp
 *  Created on                  : Jan 23, 2023 :: 8:32:48 PM
 *  Author                      : avikodak
 *  URL                         : https://leetcode.com/problems/plus-one
 ****************************************************************************************************************************************************/

/****************************************************************************************************************************************************/
/*                                                                 INCLUDES                                                                         */
/****************************************************************************************************************************************************/

#include "v1/common/Includes.h"

class Solution {
public:
    std::vector<int> plusOne(std::vector<int> &digits) {
        int carry = 1;
        int counter = digits.size() - 1;
        while (carry && counter >= 0) {
            carry = digits[counter] + carry;
            digits[counter] = carry % 10;
            carry = carry / 10;
            counter--;
        }
        if (carry > 0) {
            digits.insert(digits.begin(), carry);
        }
        return digits;
    }
};
