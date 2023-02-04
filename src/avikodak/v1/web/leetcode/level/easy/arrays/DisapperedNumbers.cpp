/****************************************************************************************************************************************************
 *  File Name                   : DisapperedNumbers.cpp
 *  File Location               : /algos-2023/src/avikodak/v1/web/leetcode/level/easy/arrays/DisapperedNumbers.cpp
 *  Created on                  : Feb 3, 2023 :: 7:22:50 PM
 *  Author                      : avikodak
 *  URL                         : https://leetcode.com/problems/find-all-numbers-disappeared-in-an-array/
 ****************************************************************************************************************************************************/

/****************************************************************************************************************************************************/
/*                                                                 INCLUDES                                                                         */
/****************************************************************************************************************************************************/

#include "v1/common/Includes.h"

using namespace std;

class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int> &nums) {
        vector<bool> seenValues(nums.size(), false);
        vector<int> result;
        for (int counter = 0; counter < nums.size(); counter++) {
            seenValues[nums[counter] - 1] = true;
        }
        for (int counter = 0; counter < seenValues.size(); counter++) {
            if (!seenValues[counter]) {
                result.push_back(counter + 1);
            }
        }
        return result;
    }
};
