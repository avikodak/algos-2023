/****************************************************************************************************************************************************
 *  File Name                   : MajorityElement.cpp
 *  File Location               : /algos-2023/src/avikodak/v1/web/leetcode/level/easy/arrays/MajorityElement.cpp
 *  Created on                  : Jan 24, 2023 :: 8:32:54 PM
 *  Author                      : avikodak
 *  URL                         : https://leetcode.com/problems/majority-element/
 ****************************************************************************************************************************************************/

/****************************************************************************************************************************************************/
/*                                                                 INCLUDES                                                                         */
/****************************************************************************************************************************************************/

#include "v1/common/Includes.h"

using namespace std;

class Solution {
public:
    int majorityElement(vector<int> &userInput) {
        int frequency = 1;
        int probElement = userInput[0];
        for (int counter = 1; counter < userInput.size(); counter++) {
            if (userInput[counter] == probElement) {
                frequency++;
            } else if (frequency == 1) {
                probElement = userInput[counter];
            } else {
                frequency--;
            }
        }
        return probElement;
    }
};
