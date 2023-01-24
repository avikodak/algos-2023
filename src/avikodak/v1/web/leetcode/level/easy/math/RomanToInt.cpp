/****************************************************************************************************************************************************
 *  File Name                   : RomanToInt.cpp
 *  File Location               : /algos-2023/src/avikodak/v1/web/leetcode/level/easy/math/RomanToInt.cpp
 *  Created on                  : Jan 23, 2023 :: 7:03:23 PM
 *  Author                      : avikodak
 *  URL                         : https://leetcode.com/problems/roman-to-integer/
 ****************************************************************************************************************************************************/

/****************************************************************************************************************************************************/
/*                                                                 INCLUDES                                                                         */
/****************************************************************************************************************************************************/

#include "v1/common/Includes.h"

class Solution {
public:
    int romanToInt(std::string userInput) {
        std::map<char, int> literalToValue;
        literalToValue['I'] = 1;
        literalToValue['V'] = 5;
        literalToValue['X'] = 10;
        literalToValue['L'] = 50;
        literalToValue['C'] = 100;
        literalToValue['D'] = 500;
        literalToValue['M'] = 1000;
        int value = 0;
        for (int counter = 0; counter < userInput.size();) {
            if (counter + 1 < userInput.size()
                    && literalToValue[userInput[counter + 1]] > literalToValue[userInput[counter]]) {
                value += literalToValue[userInput[counter + 1]];
                value -= literalToValue[userInput[counter]];
                counter += 2;
            } else {
                value += literalToValue[userInput[counter]];
                counter++;
            }
        }
        return value;
    }
};
