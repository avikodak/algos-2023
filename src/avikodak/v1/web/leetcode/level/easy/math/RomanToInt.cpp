/****************************************************************************************************************************************************
 *  File Name                   : RomanToInt.cpp
 *  File Location               : /algos-2023/src/avikodak/v1/web/leetcode/level/easy/math/RomanToInt.cpp
 *  Created on                  : Jan 11, 2023 :: 9:48:14 PM
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
        std::map<char, int> symbolMap;
        symbolMap['I'] = 1;
        symbolMap['V'] = 5;
        symbolMap['X'] = 10;
        symbolMap['L'] = 50;
        symbolMap['C'] = 100;
        symbolMap['D'] = 500;
        symbolMap['M'] = 1000;
        int sum = 0;
        for (int counter = 0; counter < userInput.size();) {
            if (counter + 1 < userInput.size() && symbolMap[userInput[counter + 1]] > symbolMap[userInput[counter]]) {
                sum += symbolMap[userInput[counter + 1]];
                sum -= symbolMap[userInput[counter]];
                counter += 2;
            } else {
                sum += symbolMap[userInput[counter]];
                counter++;
            }
        }
        return sum;
    }
};
