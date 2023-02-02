/****************************************************************************************************************************************************
 *  File Name                   : LongestPalindrome.cpp
 *  File Location               : /algos-2023/src/avikodak/v1/web/leetcode/level/easy/strings/LongestPalindrome.cpp
 *  Created on                  : Feb 1, 2023 :: 9:34:42 PM
 *  Author                      : avikodak
 *  URL                         : https://leetcode.com/problems/longest-palindrome/
 ****************************************************************************************************************************************************/

/****************************************************************************************************************************************************/
/*                                                                 INCLUDES                                                                         */
/****************************************************************************************************************************************************/

#include "v1/common/Includes.h"

using namespace std;

class Solution {
public:
    int longestPalindrome(string userInput) {
        map<char, int> frequency;
        for (int counter = 0; counter < userInput.size(); counter++) {
            auto itToFrequency = frequency.find(userInput[counter]);
            if (itToFrequency == frequency.end()) {
                frequency[userInput[counter]] = 1;
            } else {
                frequency[userInput[counter]]++;
            }
        }
        bool hasOddFrequency = false;
        int length = 0;
        for (auto itToFrequency = frequency.begin(); itToFrequency != frequency.end(); itToFrequency++) {
            if (itToFrequency->second % 2 != 0) {
                hasOddFrequency = true;
                length += (itToFrequency->second - 1);
            } else {
                length += (itToFrequency->second);
            }
        }
        return hasOddFrequency ? length + 1 : length;
    }
};
