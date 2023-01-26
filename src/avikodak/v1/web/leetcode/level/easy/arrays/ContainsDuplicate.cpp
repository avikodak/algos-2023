/****************************************************************************************************************************************************
 *  File Name                   : ContainsDuplicate.cpp
 *  File Location               : /algos-2023/src/avikodak/v1/web/leetcode/level/easy/arrays/ContainsDuplicate.cpp
 *  Created on                  : Jan 24, 2023 :: 10:47:18 PM
 *  Author                      : avikodak
 *  URL                         : https://leetcode.com/problems/contains-duplicate/
 ****************************************************************************************************************************************************/

/****************************************************************************************************************************************************/
/*                                                                 INCLUDES                                                                         */
/****************************************************************************************************************************************************/

#include "v1/common/Includes.h"

using namespace std;

class Solution {
public:
    bool containsDuplicate(vector<int> &userInput) {
        map<int, bool> seenValues;
        for (int counter = 0; counter < userInput.size(); counter++) {
            auto itToFrequency = seenValues.find(userInput[counter]);
            if (itToFrequency != seenValues.end()) {
                return true;
            }
            seenValues[userInput[counter]] = true;
        }
        return false;
    }
};
