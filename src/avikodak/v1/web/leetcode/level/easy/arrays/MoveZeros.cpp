/****************************************************************************************************************************************************
 *  File Name                   : MoveZeros.cpp
 *  File Location               : /algos-2023/src/avikodak/v1/web/leetcode/level/easy/arrays/MoveZeros.cpp
 *  Created on                  : Feb 1, 2023 :: 7:50:31 PM
 *  Author                      : avikodak
 *  URL                         : https://leetcode.com/problems/move-zeroes/
 ****************************************************************************************************************************************************/

/****************************************************************************************************************************************************/
/*                                                                 INCLUDES                                                                         */
/****************************************************************************************************************************************************/

#include "v1/common/Includes.h"

using namespace std;

class Solution {
public:
    void moveZeroes(vector<int> &nums) {
        int fillCrawler = -1;
        for (int counter = 0; counter < nums.size(); counter++) {
            if (nums[counter] != 0) {
                nums[++fillCrawler] = nums[counter];
            }
        }
        while (fillCrawler < nums.size() - 1) {
            nums[++fillCrawler] = 0;
        }
    }
};
