/****************************************************************************************************************************************************
 *  File Name                   : RemoveElement.cpp
 *  File Location               : /algos-2023/src/avikodak/v1/web/leetcode/level/easy/arrays/RemoveElement.cpp
 *  Created on                  : Dec 6, 2022 :: 10:32:34 PM
 *  Author                      : avikodak
 *  URL                         : https://leetcode.com/problems/remove-element/
 ****************************************************************************************************************************************************/

/****************************************************************************************************************************************************/
/*                                                                 INCLUDES                                                                         */
/****************************************************************************************************************************************************/

#include "v1/common/Includes.h"

class Solution {
public:
    int removeElement(std::vector<int> &userInput, int val) {
        int fillCounter = -1;
        for (int counter = 0; counter < userInput.size(); counter++) {
            if (userInput[counter] != val) {
                userInput[++fillCounter] = userInput[counter];
            }
        }
        return fillCounter + 1;
    }
};
