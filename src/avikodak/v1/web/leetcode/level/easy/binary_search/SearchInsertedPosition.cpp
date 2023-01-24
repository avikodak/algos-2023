/****************************************************************************************************************************************************
 *  File Name                   : SearchInsertedPosition.cpp
 *  File Location               : /algos-2023/src/avikodak/v1/web/leetcode/level/easy/binary_search/SearchInsertedPosition.cpp
 *  Created on                  : Jan 14, 2023 :: 5:53:30 PM
 *  Author                      : avikodak
 *  URL                         : https://leetcode.com/problems/search-insert-position/
 ****************************************************************************************************************************************************/

/****************************************************************************************************************************************************/
/*                                                                 INCLUDES                                                                         */
/****************************************************************************************************************************************************/

#include "v1/common/Includes.h"

class Solution {
public:
    int searchInsert(std::vector<int> &userInput, int target) {
        int startIndex = 0;
        int endIndex = userInput.size() - 1;
        int middleIndex;
        int result = -1;
        while (startIndex <= endIndex) {
            int middleIndex = (endIndex + startIndex) / 2;
            if (userInput[middleIndex] <= target) {
                result = middleIndex;
                endIndex--;
            } else {
                startIndex++;
            }
        }
        return result;
    }
};
