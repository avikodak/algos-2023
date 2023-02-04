/****************************************************************************************************************************************************
 *  File Name                   : PalindromePermutation.cpp
 *  File Location               : /algos-2023/src/avikodak/v1/web/leetcode/level/easy/strings/PalindromePermutation.cpp
 *  Created on                  : Feb 3, 2023 :: 7:17:20 PM
 *  Author                      : avikodak
 *  URL                         : https://leetcode.com/problems/palindrome-permutation/
 ****************************************************************************************************************************************************/

/****************************************************************************************************************************************************/
/*                                                                 INCLUDES                                                                         */
/****************************************************************************************************************************************************/

#include "v1/common/Includes.h"

using namespace std;

class Solution {
public:
    bool canPermutePalindrome(string userInput) {
        map<char, int> frequency;
        for (int counter = 0; counter < userInput.size(); counter++) {
            auto itToFrequency = frequency.find(userInput[counter]);
            if (itToFrequency == frequency.end()) {
                frequency[userInput[counter]] = 1;
            } else {
                frequency[userInput[counter]]++;
            }
        }
        int numOddFrequency = 0;
        for (auto itToFrequency = frequency.begin(); itToFrequency != frequency.end(); itToFrequency++) {
            if (itToFrequency->second % 2 == 1) {
                numOddFrequency++;
            }
        }
        return numOddFrequency <= 1;
    }
};
