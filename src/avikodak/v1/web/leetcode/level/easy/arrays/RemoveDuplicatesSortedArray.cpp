/****************************************************************************************************************************************************
 *  File Name                   : RemoveDuplicatesSortedArray.cpp
 *  File Location               : /algos-2023/src/avikodak/v1/web/leetcode/level/easy/arrays/RemoveDuplicatesSortedArray.cpp
 *  Created on                  : Dec 6, 2022 :: 10:21:09 PM
 *  Author                      : avikodak
 *  URL                         : https://leetcode.com/problems/remove-duplicates-from-sorted-array/
 ****************************************************************************************************************************************************/

/****************************************************************************************************************************************************/
/*                                                                 INCLUDES                                                                         */
/****************************************************************************************************************************************************/

#include "v1/common/Includes.h"

class Solution {
public:
    int removeDuplicates(std::vector<int> &userInput) {
        int fillCounter = 0;
        for (int crawler = 1; crawler < userInput.size(); crawler++) {
            if (userInput[crawler] != userInput[fillCounter]) {
                userInput[++fillCounter] = userInput[crawler];
            }
        }
        return fillCounter+1;
    }
};
