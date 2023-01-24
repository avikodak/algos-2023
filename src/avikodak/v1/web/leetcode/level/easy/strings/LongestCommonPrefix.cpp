/****************************************************************************************************************************************************
 *  File Name                   : LongestCommonPrefix.cpp
 *  File Location               : /algos-2023/src/avikodak/v1/web/leetcode/level/easy/strings/LongestCommonPrefix.cpp
 *  Created on                  : Jan 23, 2023 :: 7:20:41 PM
 *  Author                      : avikodak
 *  URL                         : TODO
 ****************************************************************************************************************************************************/

/****************************************************************************************************************************************************/
/*                                                                 INCLUDES                                                                         */
/****************************************************************************************************************************************************/

#include "v1/common/Includes.h"

class Solution {
public:
    std::string longestCommonPrefix(std::vector<std::string> &userInput) {
        if (userInput.size() == 0) {
            return "";
        }
        if (userInput.size() == 1) {
            return userInput[0];
        }
        char currentChar;
        bool isCommon;
        std::string result;
        for (int letterCounter = 0; letterCounter < userInput[0].size(); letterCounter++) {
            currentChar = userInput[0][letterCounter];
            isCommon = true;
            for (int wordCounter = 1; wordCounter < userInput.size(); wordCounter++) {
                if (userInput[wordCounter].size() < letterCounter
                        || userInput[wordCounter][letterCounter] != currentChar) {
                    isCommon = false;
                    break;
                }
            }
            if (!isCommon) {
                break;
            }
            result.push_back(userInput[0][letterCounter]);
        }
        return result;
    }
};
