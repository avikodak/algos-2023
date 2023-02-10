/****************************************************************************************************************************************************
 *  File Name                   : ToLowerCase.cpp
 *  File Location               : /algos-2023/src/avikodak/v1/web/leetcode/level/easy/strings/ToLowerCase.cpp
 *  Created on                  : Feb 9, 2023 :: 8:11:16 PM
 *  Author                      : avikodak
 *  URL                         : https://leetcode.com/problems/to-lower-case/
 ****************************************************************************************************************************************************/

/****************************************************************************************************************************************************/
/*                                                                 INCLUDES                                                                         */
/****************************************************************************************************************************************************/

#include "v1/common/Includes.h"

using namespace std;

class Solution {
public:
    string toLowerCase(string userInput) {
        for (int counter = 0; counter < userInput.size(); counter++) {
            if (isupper(userInput[counter])) {
                userInput[counter] = userInput[counter] - 'A' + 'a';
            }
        }
        return userInput;
    }
};
