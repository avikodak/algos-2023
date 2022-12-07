/****************************************************************************************************************************************************
 *  File Name                   : ValidParentheses.cpp
 *  File Location               : /algos-2023/src/avikodak/v1/web/leetcode/level/easy/stacks/ValidParentheses.cpp
 *  Created on                  : Dec 6, 2022 :: 8:48:52 PM
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
        for (unsigned int counter = 0; counter < userInput.size(); counter++) {
            switch (userInput[counter]) {
            case '(':
            case '{':
            case '[':
                auxSpace.push(userInput[counter]);
                break;
            case ')':
                if (auxSpace.top() != '(') {
                    return false;
                }
                auxSpace.pop();
                break;
            case '}':
                if (auxSpace.top() != '{') {
                    return false;
                }
                auxSpace.pop();
                break;
            case ']':
                if (auxSpace.top() != '[') {
                    return false;
                }
                auxSpace.pop();
                break;
            }
            default:
            return false;
        }
        return auxSpace.size() == 0;
    }
};
