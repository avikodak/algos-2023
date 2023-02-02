/****************************************************************************************************************************************************
 *  File Name                   : ContainsDuplicateII.cpp
 *  File Location               : /algos-2023/src/avikodak/v1/web/leetcode/level/easy/arrays/ContainsDuplicateII.cpp
 *  Created on                  : Jan 31, 2023 :: 9:54:28 PM
 *  Author                      : avikodak
 *  URL                         : https://leetcode.com/problems/contains-duplicate-ii/
 ****************************************************************************************************************************************************/

/****************************************************************************************************************************************************/
/*                                                                 INCLUDES                                                                         */
/****************************************************************************************************************************************************/

#include "v1/common/Includes.h"

using namespace std;

class Solution {
public:
    bool containsNearbyDuplicate(vector<int> &userInput, int k) {
        map<int, int> prevValues;
        for (int counter = 0; counter < userInput.size(); counter++) {
            auto itToPrevValues = prevValues.find(userInput[counter]);
            if (itToPrevValues != prevValues.end() && (counter - itToPrevValues->second) <= k) {
                return true;
            }
            prevValues[userInput[counter]] = counter;
        }
        return false;
    }
};
