/****************************************************************************************************************************************************
 *  File Name                   : SetMismatch.cpp
 *  File Location               : /algos-2023/src/avikodak/v1/web/leetcode/level/easy/arrays/SetMismatch.cpp
 *  Created on                  : Feb 19, 2023 :: 6:36:02 PM
 *  Author                      : avikodak
 *  URL                         : https://leetcode.com/problems/set-mismatch/
 ****************************************************************************************************************************************************/

/****************************************************************************************************************************************************/
/*                                                                 INCLUDES                                                                         */
/****************************************************************************************************************************************************/

#include "v1/common/Includes.h"

using namespace std;

class Solution {
public:
    vector<int> findErrorNums(vector<int> &userInput) {
        int xorResult = 0;
        for (unsigned int counter = 0; counter < userInput.size(); counter++) {
            xorResult ^= userInput[counter];
            xorResult ^= (counter + 1);
        }
        int rightMostSetBit = xorResult & ~(xorResult - 1);
        int firstXorResult = 0, secondXorResult = 0;
        for (unsigned int counter = 0; counter < userInput.size(); counter++) {
            if (rightMostSetBit & userInput[counter]) {
                firstXorResult ^= userInput[counter];
            } else {
                secondXorResult ^= userInput[counter];
            }
            if (rightMostSetBit & (counter + 1)) {
                firstXorResult ^= (counter+1);
            } else {
                secondXorResult ^= (counter+1);
            }
        }
        for(int counter = 0;counter < userInput.size();counter++) {
            if(userInput[counter] == secondXorResult) {
                return {secondXorResult, firstXorResult};
            }
        }
        return {firstXorResult, secondXorResult};
    }
};

