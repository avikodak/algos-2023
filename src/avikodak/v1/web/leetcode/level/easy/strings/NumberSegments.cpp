/****************************************************************************************************************************************************
 *  File Name                   : NumberSegments.cpp
 *  File Location               : /algos-2023/src/avikodak/v1/web/leetcode/level/easy/strings/NumberSegments.cpp
 *  Created on                  : Feb 6, 2023 :: 8:16:38 PM
 *  Author                      : avikodak
 *  URL                         : https://leetcode.com/problems/number-of-segments-in-a-string/
 ****************************************************************************************************************************************************/

/****************************************************************************************************************************************************/
/*                                                                 INCLUDES                                                                         */
/****************************************************************************************************************************************************/

#include "v1/common/Includes.h"

using namespace std;

class Solution {
public:
    int countSegments(string userInput) {
        int counter = 0;
        int segmentCount = 0;
        while (counter < userInput.size()) {
            while (counter < userInput.size() && userInput[counter] == ' ') {
                counter++;
            }
            if (counter < userInput.size()) {
                segmentCount++;
                while (counter < userInput.size() && userInput[counter] != ' ') {
                    counter++;
                }
            }
        }
        return segmentCount;
    }
};
