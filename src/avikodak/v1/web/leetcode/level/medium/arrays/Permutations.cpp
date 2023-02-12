/****************************************************************************************************************************************************
 *  File Name                   : Permutations.cpp
 *  File Location               : /algos-2023/src/avikodak/v1/web/leetcode/level/medium/arrays/Permutations.cpp
 *  Created on                  : Feb 11, 2023 :: 11:25:00 AM
 *  Author                      : avikodak
 *  URL                         : https://leetcode.com/problems/permutations/
 ****************************************************************************************************************************************************/

/****************************************************************************************************************************************************/
/*                                                                 INCLUDES                                                                         */
/****************************************************************************************************************************************************/

#include "v1/common/Includes.h"

using namespace std;

class Solution {
private:
    void permuteUtil(vector<int> &nums, vector<vector<int>> &result, int index) {
        if (index == nums.size()) {
            result.push_back(nums);
            return;
        }

        for (int counter = index; counter < nums.size(); counter++) {
            swap(nums[counter], nums[index]);
            permuteUtil(nums, result, index + 1);
            swap(nums[counter], nums[index]);
        }
    }
public:
    vector<vector<int>> permute(vector<int> &nums) {
        vector<vector<int>> result;
        permuteUtil(nums, result, 0);
        return result;
    }
};
