/****************************************************************************************************************************************************
 *  File Name                   : FirstUniqueChars.cpp
 *  File Location               : /algos-2023/src/avikodak/v1/web/leetcode/level/easy/strings/FirstUniqueChars.cpp
 *  Created on                  : Feb 1, 2023 :: 7:13:38 PM
 *  Author                      : avikodak
 *  URL                         : https://leetcode.com/problems/first-unique-character-in-a-string/
 ****************************************************************************************************************************************************/

/****************************************************************************************************************************************************/
/*                                                                 INCLUDES                                                                         */
/****************************************************************************************************************************************************/

#include "v1/common/Includes.h"

using namespace std;

class Solution {
public:
    int firstUniqChar(string userInput) {
        map<char, int> frequency;
        for (int counter = 0; counter < userInput.size(); counter++) {
            auto itToFrequency = frequency.find(userInput[counter]);
            if (itToFrequency == frequency.end()) {
                frequency[userInput[counter]] = 1;
            } else {
                frequency[userInput[counter]]++;
            }
        }
        for (int counter = 0; counter < userInput.size(); counter++) {
            auto itToFrequency = frequency.find(userInput[counter]);
            if (itToFrequency->second == 1) {
                return userInput[counter];
            }
        }
        return -1;
    }
};
