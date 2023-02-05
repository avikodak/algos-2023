/****************************************************************************************************************************************************
 *  File Name                   : ThirdMaxNumber.cpp
 *  File Location               : /algos-2023/src/avikodak/v1/web/leetcode/level/easy/arrays/ThirdMaxNumber.cpp
 *  Created on                  : Feb 4, 2023 :: 7:01:55 PM
 *  Author                      : avikodak
 *  URL                         : TODO
 ****************************************************************************************************************************************************/

/****************************************************************************************************************************************************/
/*                                                                 INCLUDES                                                                         */
/****************************************************************************************************************************************************/

#include "v1/common/Includes.h"

using namespace std;

class Solution {
public:
    int thirdMax(vector<int> &nums) {
        int firstMax, secondMax, thirdMax;
        vector<bool> maxValuesSet(3, false);
        maxValuesSet[0] = false;
        maxValuesSet[1] = false;
        maxValuesSet[2] = false;
        for (unsigned int counter = 0; counter < nums.size(); counter++) {

            if ((maxValuesSet[0] && nums[counter] == firstMax) || (maxValuesSet[1] && nums[counter] == secondMax)
                    || (maxValuesSet[2] && nums[counter] == thirdMax)) {
                continue;
            }
            if (!maxValuesSet[0] || nums[counter] >= firstMax) {
                thirdMax = secondMax;
                secondMax = firstMax;
                firstMax = nums[counter];
                maxValuesSet[2] = maxValuesSet[1];
                maxValuesSet[1] = maxValuesSet[0];
                maxValuesSet[0] = true;
            } else if (!maxValuesSet[1] || nums[counter] >= secondMax) {
                thirdMax = secondMax;
                secondMax = nums[counter];
                maxValuesSet[2] = maxValuesSet[1];
                maxValuesSet[1] = true;
            } else if (!maxValuesSet[2] || nums[counter] >= thirdMax) {
                thirdMax = nums[counter];
                maxValuesSet[2] = true;
            }
        }
        return maxValuesSet[2] ? thirdMax : firstMax;
    }
};

