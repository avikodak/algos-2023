/****************************************************************************************************************************************************
 *  File Name                   : NextGreaterElement.cpp
 *  File Location               : /algos-2023/src/avikodak/v1/web/leetcode/level/easy/stacks/NextGreaterElement.cpp
 *  Created on                  : Feb 8, 2023 :: 6:44:13 PM
 *  Author                      : avikodak
 *  URL                         : TODO
 ****************************************************************************************************************************************************/

/****************************************************************************************************************************************************/
/*                                                                 INCLUDES                                                                         */
/****************************************************************************************************************************************************/

#include "v1/common/Includes.h"

using namespace std;

class Solution {
public:
    vector<int> nextGreaterElement(vector<int> &firstInput, vector<int> &secondInput) {
        map<int, int> nextElementMapping;
        int currentMax = INT_MIN;
        int counter = secondInput.size() - 1;
        stack<int> auxSpace;
        vector<int> result;
        while (counter >= 0) {
            while (!auxSpace.empty() && secondInput[counter] > auxSpace.top()) {
                auxSpace.pop();
            }
            if (auxSpace.empty()) {
                nextElementMapping[secondInput[counter]] = -1;
            } else {
                nextElementMapping[secondInput[counter]] = auxSpace.top();
            }
            auxSpace.push(secondInput[counter]);
            counter--;
        }
        for (int counter = 0; counter < firstInput.size(); counter++) {
            result.push_back(nextElementMapping[firstInput[counter]]);
        }
        return result;
    }
};

