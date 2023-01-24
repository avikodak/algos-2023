/****************************************************************************************************************************************************
 *  File Name                   : PlusOne.cpp
 *  File Location               : /algos-2023/src/avikodak/v1/web/leetcode/level/easy/arrays/PlusOne.cpp
 *  Created on                  : Jan 14, 2023 :: 6:03:13 PM
 *  Author                      : avikodak
 *  URL                         : https://leetcode.com/problems/plus-one/
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
        int sum = 0;
        while (carry && counter >= 0) {
            sum = digits[counter] + carry;
            digits[counter] = (sum % 10);
            carry = sum / 10;
            counter--;
        }
        while (carry) {
            digits.insert(digits.begin(), carry % 10);
            carry /= 10;
        }
        return digits;
    }
};
