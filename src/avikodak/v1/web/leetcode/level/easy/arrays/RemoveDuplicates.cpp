/****************************************************************************************************************************************************
 *  File Name                   : RemoveDuplicates.cpp
 *  File Location               : /algos-2023/src/avikodak/v1/web/leetcode/level/easy/arrays/RemoveDuplicates.cpp
 *  Created on                  : Jan 24, 2023 :: 8:09:21 PM
 *  Author                      : avikodak
 *  URL                         : https://leetcode.com/problems/remove-duplicates-from-sorted-array/
 ****************************************************************************************************************************************************/

/****************************************************************************************************************************************************/
/*                                                                 INCLUDES                                                                         */
/****************************************************************************************************************************************************/

#include "v1/common/Includes.h"

using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int> &userInput) {
        int fillIndex = -1;
        int index = 0;
        while (index < userInput.size()) {
            while (index + 1 < userInput.size() && userInput[index] == userInput[index + 1]) {
                index++;
            }
            userInput[++fillIndex] = userInput[index];
            index++;
        }
        return fillIndex + 1;
    }
};

