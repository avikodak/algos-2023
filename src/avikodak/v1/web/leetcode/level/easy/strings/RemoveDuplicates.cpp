/****************************************************************************************************************************************************
 *  File Name                   : RemoveDuplicates.cpp
 *  File Location               : /algos-2023/src/avikodak/v1/web/leetcode/level/easy/strings/RemoveDuplicates.cpp
 *  Created on                  : Feb 8, 2023 :: 10:59:41 PM
 *  Author                      : avikodak
 *  URL                         : https://leetcode.com/problems/remove-all-adjacent-duplicates-in-string/
 ****************************************************************************************************************************************************/

/****************************************************************************************************************************************************/
/*                                                                 INCLUDES                                                                         */
/****************************************************************************************************************************************************/

#include "v1/common/Includes.h"

using namespace std;

class Solution {
public:
    string removeDuplicates(string userInput) {
        string result;
        for (unsigned int counter = 0; counter < userInput.size(); counter++) {
            if (result.empty()) {
                result.push_back(userInput[counter]);
            } else {
                if (result.back() == userInput[counter]) {
                    result.pop_back();
                } else {
                    result.push_back(userInput[counter]);
                }
            }
        }
        return result;
    }
};
