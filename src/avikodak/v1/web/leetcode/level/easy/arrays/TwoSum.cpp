/****************************************************************************************************************************************************
 *  File Name                   : TwoSum.cpp
 *  File Location               : /algos-2023/src/avikodak/v1/web/leetcode/level/easy/arrays/TwoSum.cpp
 *  Created on                  : Jan 23, 2023 :: 6:51:44 PM
 *  Author                      : avikodak
 *  URL                         : https://leetcode.com/problems/two-sum/
 ****************************************************************************************************************************************************/

/****************************************************************************************************************************************************/
/*                                                                 INCLUDES                                                                         */
/****************************************************************************************************************************************************/

#include "v1/common/Includes.h"

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int> &userInput, int target) {
        map<int, int> seenValues;
        vector<int> result;
        for (int counter = 0; counter < userInput.size(); counter++) {
            auto itToResult = seenValues.find(target - userInput[counter]);
            if (itToResult != seenValues.end()) {
                result.push_back(itToResult->second);
                result.push_back(counter);
                return result;
            }
            seenValues[userInput[counter]] = counter;
        }
        return result;
    }
};
