/****************************************************************************************************************************************************
 *  File Name                   : RunningSum.cpp
 *  File Location               : /algos-2023/src/avikodak/v1/web/leetcode/level/easy/arrays/RunningSum.cpp
 *  Created on                  : Feb 8, 2023 :: 10:44:41 PM
 *  Author                      : avikodak
 *  URL                         : https://leetcode.com/problems/running-sum-of-1d-array/
 ****************************************************************************************************************************************************/

/****************************************************************************************************************************************************/
/*                                                                 INCLUDES                                                                         */
/****************************************************************************************************************************************************/

#include "v1/common/Includes.h"

using namespace std;

class Solution {
public:
    vector<int> runningSum(vector<int> &userInput) {
        int currentSum = 0;
        vector<int> result;
        for (unsigned int counter = 0; counter < userInput.size(); counter++) {
            currentSum = currentSum + userInput[counter];
            result.push_back(currentSum);
        }
        return result;
    }
};
