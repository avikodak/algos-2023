/****************************************************************************************************************************************************
 *  File Name                   : RemoveVowels.cpp
 *  File Location               : /algos-2023/src/avikodak/v1/web/leetcode/level/easy/strings/RemoveVowels.cpp
 *  Created on                  : Feb 5, 2023 :: 8:11:19 PM
 *  Author                      : avikodak
 *  URL                         : https://leetcode.com/problems/remove-vowels-from-a-string/
 ****************************************************************************************************************************************************/

/****************************************************************************************************************************************************/
/*                                                                 INCLUDES                                                                         */
/****************************************************************************************************************************************************/

#include "v1/common/Includes.h"

using namespace std;

class Solution {
public:
    string removeVowels(string userInput) {
        string result;
        set<char> vowels( { 'a', 'e', 'i', 'o', 'u' });
        for (unsigned int counter = 0; counter < userInput.size(); counter++) {
            if (vowels.find(userInput[counter]) == vowels.end()) {
                result.push_back(userInput[counter]);
            }
        }
        return result;
    }
};
