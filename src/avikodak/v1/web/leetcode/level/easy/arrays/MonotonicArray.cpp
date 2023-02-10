/****************************************************************************************************************************************************
 *  File Name                   : MonotonicArray.cpp
 *  File Location               : /algos-2023/src/avikodak/v1/web/leetcode/level/easy/arrays/MonotonicArray.cpp
 *  Created on                  : Feb 9, 2023 :: 10:02:09 PM
 *  Author                      : avikodak
 *  URL                         : https://leetcode.com/problems/monotonic-array/
 ****************************************************************************************************************************************************/

/****************************************************************************************************************************************************/
/*                                                                 INCLUDES                                                                         */
/****************************************************************************************************************************************************/

#include "v1/common/Includes.h"

using namespace std;

class Solution {
public:
    bool isMonotonic(vector<int> &nums) {
        if (nums.size() <= 1) {
            return true;
        }
        bool isIncreasing = nums[nums.size() - 1] > nums[0];
        for (int counter = 1; counter < nums.size(); counter++) {
            if (isIncreasing && nums[counter] < nums[counter - 1]) {
                return false;
            } else if (!isIncreasing && nums[counter] > nums[counter - 1]) {
                return false;
            }
        }
        return true;
    }
};
