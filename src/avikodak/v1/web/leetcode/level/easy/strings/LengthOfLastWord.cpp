/****************************************************************************************************************************************************
 *  File Name                   : LengthOfLastWord.cpp
 *  File Location               : /algos-2023/src/avikodak/v1/web/leetcode/level/easy/strings/LengthOfLastWord.cpp
 *  Created on                  : Jan 23, 2023 :: 8:12:09 PM
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
        int crawler = userInput.size() - 1;
        int length = 0;
        while (crawler >= 0 && userInput[crawler] == ' ') {
            if(userInput[crawler] != ' ') {
                length++;
            } else if(length > 0) {
                return length;
            }
            crawler--;
        }
        return length;
    }
};
