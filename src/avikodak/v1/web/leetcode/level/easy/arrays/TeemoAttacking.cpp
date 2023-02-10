/****************************************************************************************************************************************************
 *  File Name                   : TeemoAttacking.cpp
 *  File Location               : /algos-2023/src/avikodak/v1/web/leetcode/level/easy/arrays/TeemoAttacking.cpp
 *  Created on                  : Feb 9, 2023 :: 7:57:53 PM
 *  Author                      : avikodak
 *  URL                         : https://leetcode.com/problems/teemo-attacking/
 ****************************************************************************************************************************************************/

/****************************************************************************************************************************************************/
/*                                                                 INCLUDES                                                                         */
/****************************************************************************************************************************************************/

#include "v1/common/Includes.h"

using namespace std;

class Solution {
public:
    int findPoisonedDuration(vector<int> &timeSeries, int duration) {
        int total = 0;
        for (int counter = 0; counter < timeSeries.size() - 1; counter++) {
            if (timeSeries[counter] + duration < timeSeries[counter + 1]) {
                total += duration;
            } else {
                total += (timeSeries[counter + 1] - timeSeries[counter]);
            }
        }
        total += duration;
        return total;
    }
};
