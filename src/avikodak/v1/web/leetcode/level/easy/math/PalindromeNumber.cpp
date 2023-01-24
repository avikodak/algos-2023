/****************************************************************************************************************************************************
 *  File Name                   : PalindromeNumber.cpp
 *  File Location               : /algos-2023/src/avikodak/v1/web/leetcode/level/easy/math/PalindromeNumber.cpp
 *  Created on                  : Jan 23, 2023 :: 6:57:39 PM
 *  Author                      : avikodak
 *  URL                         : https://leetcode.com/problems/palindrome-number/
 ****************************************************************************************************************************************************/

/****************************************************************************************************************************************************/
/*                                                                 INCLUDES                                                                         */
/****************************************************************************************************************************************************/

#include "v1/common/Includes.h"

/**
 * Forgot to handle case
 *
 * - When userInput has tailing zero's i.e x = 100 or x = 0
 */
class Solution {
public:
    bool isPalindrome(int userInput) {
        if(userInput < 0 || (userInput % 10 == 0 && userInput != 0)) {
            return false;
        }
        int auxValue = 0;
        while (userInput > auxValue) {
            auxValue = (auxValue * 10) + (userInput % 10);
            userInput /= 10;
        }
        return auxValue == userInput || (auxValue / 10 == userInput);
    }
};
