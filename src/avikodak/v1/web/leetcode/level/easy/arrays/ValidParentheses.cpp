/****************************************************************************************************************************************************
 *  File Name                   : ValidParentheses.cpp
 *  File Location               : /algos-2023/src/avikodak/v1/web/leetcode/level/easy/arrays/ValidParentheses.cpp
 *  Created on                  : Jan 23, 2023 :: 7:41:53 PM
 *  Author                      : avikodak
 *  URL                         : https://leetcode.com/problems/valid-parentheses/
 ****************************************************************************************************************************************************/

/****************************************************************************************************************************************************/
/*                                                                 INCLUDES                                                                         */
/****************************************************************************************************************************************************/

#include "v1/common/Includes.h"

class Solution {
public:
    bool isValid(std::string userInput) {
        std::stack<char> auxSpace;

        for (int counter = 0; counter < userInput.size(); counter++) {
            if (userInput[counter] == '{' || userInput[counter] == '(' || userInput[counter] == '[') {
                auxSpace.push(userInput[counter]);
            } else {
                if (auxSpace.empty()) {
                    return false;
                }
                if (userInput[counter] == '}') {
                    if (auxSpace.top() != '{') {
                        return false;
                    }
                    auxSpace.pop();
                } else if (userInput[counter] == ']') {
                    if (auxSpace.top() != '[') {
                        return false;
                    }
                    auxSpace.pop();
                } else if (userInput[counter] == ')') {
                    if (auxSpace.top() != '(') {
                        return false;
                    }
                    auxSpace.pop();
                } else {
                    return false;
                }
            }
        }
        return auxSpace.empty();
    }
};
