/****************************************************************************************************************************************************
 *  File Name                   : ReverseStringII.cpp
 *  File Location               : /algos-2023/src/avikodak/v1/web/leetcode/level/easy/strings/ReverseStringII.cpp
 *  Created on                  : Feb 15, 2023 :: 8:10:50 PM
 *  Author                      : avikodak
 *  URL                         : https://leetcode.com/problems/reverse-string-ii/
 ****************************************************************************************************************************************************/

/****************************************************************************************************************************************************/
/*                                                                 INCLUDES                                                                         */
/****************************************************************************************************************************************************/

#include "v1/common/Includes.h"

using namespace std;

class Solution {

public:
    string reverseStr(string userInput, int k) {
        if (k == 1) {
            return userInput;
        }
        int counter = 0;
        while (counter < userInput.size()) {
            if (counter + k < userInput.size()) {
                reverse(userInput.begin() + counter, userInput.begin() + (counter + k));
            } else {
                reverse(userInput.begin() + counter, userInput.begin() + userInput.size());
            }
            counter += 2 * k;
        }
        return userInput;
    }
};
