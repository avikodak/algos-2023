/****************************************************************************************************************************************************
 *  File Name                   : MaxConsecutiveOnes.cpp
 *  File Location               : /algos-2023/src/avikodak/v1/web/leetcode/level/easy/arrays/MaxConsecutiveOnes.cpp
 *  Created on                  : Feb 6, 2023 :: 8:53:07 PM
 *  Author                      : avikodak
 *  URL                         : https://leetcode.com/problems/max-consecutive-ones
 ****************************************************************************************************************************************************/

/****************************************************************************************************************************************************/
/*                                                                 INCLUDES                                                                         */
/****************************************************************************************************************************************************/

#include "v1/common/Includes.h"

using namespace std;

class Solution {
public:
    int findMaxConsecutiveOnes(vector<int> &nums) {
        int counter = 0;
        int maxValue = 0;
        int onesCount;
        while (counter < nums.size()) {
            while (counter < nums.size() && nums[counter] == 0) {
                counter++;
            }
            onesCount = 0;
            while (counter < nums.size() && nums[counter] == 1) {
                onesCount++;
                counter++;
            }
            maxValue = max(maxValue, onesCount);
        }
        return maxValue;
    }
};
