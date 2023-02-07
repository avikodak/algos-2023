/****************************************************************************************************************************************************
 *  File Name                   : ValidWordAbbr.cpp
 *  File Location               : /algos-2023/src/avikodak/v1/web/leetcode/level/easy/strings/ValidWordAbbr.cpp
 *  Created on                  : Feb 6, 2023 :: 8:07:13 PM
 *  Author                      : avikodak
 *  URL                         : https://leetcode.com/problems/valid-word-abbreviation/
 ****************************************************************************************************************************************************/

/****************************************************************************************************************************************************/
/*                                                                 INCLUDES                                                                         */
/****************************************************************************************************************************************************/

#include "v1/common/Includes.h"

using namespace std;

class Solution {
public:
    bool validWordAbbreviation(string word, string abbr) {
        int wordCounter = 0;
        int jumpCount;
        int counter = 0;
        for (; counter < abbr.size();) {
            if (isalpha(abbr[counter])) {
                if (word[wordCounter] != abbr[counter]) {
                    return false;
                }
                wordCounter++;
                counter++;
            } else {
                jumpCount = 0;
                while (counter < abbr.size() && !isalpha(abbr[counter])) {
                    if (jumpCount == 0 && abbr[counter] == '0') {
                        return false;
                    }
                    jumpCount = jumpCount * 10 + (abbr[counter] - '0');
                    counter++;
                }
                wordCounter += jumpCount;
            }
        }
        return counter == abbr.size() && wordCounter == word.size();
    }
};
