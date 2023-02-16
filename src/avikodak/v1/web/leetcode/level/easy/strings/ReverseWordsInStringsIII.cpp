/****************************************************************************************************************************************************
 *  File Name                   : ReverseWordsInStringsIII.cpp
 *  File Location               : /algos-2023/src/avikodak/v1/web/leetcode/level/easy/strings/ReverseWordsInStringsIII.cpp
 *  Created on                  : Feb 15, 2023 :: 8:01:28 PM
 *  Author                      : avikodak
 *  URL                         : https://leetcode.com/problems/reverse-words-in-a-string-iii
 ****************************************************************************************************************************************************/

/****************************************************************************************************************************************************/
/*                                                                 INCLUDES                                                                         */
/****************************************************************************************************************************************************/

#include "v1/common/Includes.h"

using namespace std;

class Solution {
public:
    string reverseWords(string userInput) {
        int wordStart = 0;
        while (wordStart < userInput.size()) {
            int currentIndex = wordStart;
            while (currentIndex < userInput.size() && userInput[currentIndex] != ' ') {
                currentIndex++;
            }
            reverse(userInput.begin() + wordStart, userInput.begin() + currentIndex);
            wordStart = currentIndex + 1;
        }
        return userInput;
    }
};

