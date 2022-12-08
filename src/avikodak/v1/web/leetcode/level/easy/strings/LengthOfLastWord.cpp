/****************************************************************************************************************************************************
 *  File Name                   : LengthOfLastWord.cpp
 *  File Location               : /algos-2023/src/avikodak/v1/web/leetcode/level/easy/strings/LengthOfLastWord.cpp
 *  Created on                  : Dec 7, 2022 :: 9:10:25 PM
 *  Author                      : avikodak
 *  URL                         : https://leetcode.com/problems/length-of-last-word/
 ****************************************************************************************************************************************************/

/****************************************************************************************************************************************************/
/*                                                                 INCLUDES                                                                         */
/****************************************************************************************************************************************************/

#include "v1/common/Includes.h"

class Solution {
public:
    int lengthOfLastWord(std::string userInput) {
        if (userInput.size() == 0) {
            return 0;
        }
        int counter = userInput.size() - 1;
        while (counter >= 0 && userInput[counter] == ' ') {
            counter--;
        }
        int length = 0;
        while (counter >= 0 && userInput[counter] != ' ') {
            length++;
        }
        return length;
    }
};
