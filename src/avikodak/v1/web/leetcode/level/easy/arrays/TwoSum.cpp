/****************************************************************************************************************************************************
 *  File Name                   : TwoSum.cpp
 *  File Location               : /algos-2023/src/avikodak/v1/web/leetcode/level/easy/arrays/TwoSum.cpp
 *  Created on                  : Dec 5, 2022 :: 10:26:36 PM
 *  Author                      : avikodak
 *  URL                         : https://leetcode.com/problems/two-sum/
 ****************************************************************************************************************************************************/

/****************************************************************************************************************************************************/
/*                                                                 INCLUDES                                                                         */
/****************************************************************************************************************************************************/

#include "v1/common/Includes.h"

class Solution {
public:
    std::vector<int> twoSum(std::vector<int> &userInput, int target) {
        std::vector<int> result;
        std::map<int, int> seenMap;
        for (int counter = 0; counter < userInput.size(); counter++) {
            auto it = seenMap.find(target - userInput[counter]);
            if (it != seenMap.end()) {
                result.push_back(counter);
                result.push_back(it->second);
            }
            seenMap[userInput[counter]] = counter;
        }
        return result;
    }
};
