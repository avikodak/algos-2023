/****************************************************************************************************************************************************
 *  File Name                   : ShortestWordDistance.cpp
 *  File Location               : /algos-2023/src/avikodak/v1/web/leetcode/level/easy/strings/ShortestWordDistance.cpp
 *  Created on                  : Feb 15, 2023 :: 7:09:12 PM
 *  Author                      : avikodak
 *  URL                         : https://leetcode.com/problems/shortest-word-distance/
 ****************************************************************************************************************************************************/

/****************************************************************************************************************************************************/
/*                                                                 INCLUDES                                                                         */
/****************************************************************************************************************************************************/

#include "v1/common/Includes.h"

using namespace std;

class Solution {
public:
    int shortestDistance(vector<string> &userInput, string firstWord, string secondWord) {
        int firstWordIndex = -1;
        int secondWordIndex = -1;
        int minDistance = INT_MAX;
        for (int counter = 0; counter < userInput.size(); counter++) {
            if (firstWord == userInput[counter]) {
                firstWordIndex = counter;
            } else if (secondWord == userInput[counter]) {
                secondWordIndex = counter;
            }
            if (firstWordIndex != -1 && secondWordIndex != -1) {
                minDistance = min(minDistance, abs(secondWordIndex - firstWordIndex));
            }
        }
        return minDistance;
    }
};
