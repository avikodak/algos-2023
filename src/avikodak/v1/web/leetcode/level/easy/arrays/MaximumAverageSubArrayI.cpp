/****************************************************************************************************************************************************
 *  File Name                   : MaximumAverageSubArrayI.cpp
 *  File Location               : /algos-2023/src/avikodak/v1/web/leetcode/level/easy/arrays/MaximumAverageSubArrayI.cpp
 *  Created on                  : Feb 19, 2023 :: 6:50:11 PM
 *  Author                      : avikodak
 *  URL                         : https://leetcode.com/problems/maximum-average-subarray-i/
 ****************************************************************************************************************************************************/

/****************************************************************************************************************************************************/
/*                                                                 INCLUDES                                                                         */
/****************************************************************************************************************************************************/

#include "v1/common/Includes.h"

using namespace std;

class Solution {
public:
    double findMaxAverage(vector<int> &userInput, int k) {
        int currentSum = 0;
        int maxSum;
        for (int counter = 0; counter < userInput.size() && counter < k; counter++) {
            currentSum += userInput[counter];
        }
        if (userInput.size() < k) {
            return (double) (currentSum / userInput.size());
        }
        maxSum = currentSum;
        for (int counter = k; counter < userInput.size(); counter++) {
            currentSum -= userInput[counter - k];
            currentSum += userInput[counter];
            maxSum = max(maxSum, currentSum);
        }
        return (double) (maxSum / (double)k);
    }
};
