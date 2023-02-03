/****************************************************************************************************************************************************
 *  File Name                   : EditDistance.cpp
 *  File Location               : /algos-2023/src/avikodak/v1/web/leetcode/level/hard/dp/EditDistance.cpp
 *  Created on                  : Feb 2, 2023 :: 7:14:16 PM
 *  Author                      : avikodak
 *  URL                         : https://leetcode.com/problems/edit-distance/
 ****************************************************************************************************************************************************/

/****************************************************************************************************************************************************/
/*                                                                 INCLUDES                                                                         */
/****************************************************************************************************************************************************/

#include "v1/common/Includes.h"

using namespace std;

class Solution {
public:
    int minDistance(string firstWord, string secondWord) {
        vector<vector<int>> auxSpace(firstWord.size() + 1, vector<int>(secondWord.size() + 1, 0));
        for (int firstLetterCounter = 0; firstLetterCounter <= firstWord.size(); firstLetterCounter++) {
            for (int secondLetterCounter = 0; secondLetterCounter <= secondWord.size(); secondLetterCounter++) {
                if (firstLetterCounter == 0) {
                    auxSpace[firstLetterCounter][secondLetterCounter] = secondLetterCounter;
                } else if (secondLetterCounter == 0) {
                    auxSpace[firstLetterCounter][secondLetterCounter] = firstLetterCounter;
                } else {
                    if (firstWord[firstLetterCounter - 1] == secondWord[secondLetterCounter - 1]) {
                        auxSpace[firstLetterCounter][secondLetterCounter] =
                                auxSpace[firstLetterCounter - 1][secondLetterCounter - 1];
                    } else {
                        auxSpace[firstLetterCounter][secondLetterCounter] = 1
                                + min(auxSpace[firstLetterCounter - 1][secondLetterCounter - 1],
                                        min(auxSpace[firstLetterCounter - 1][secondLetterCounter],
                                                auxSpace[firstLetterCounter][secondLetterCounter - 1]));
                    }
                }
            }
        }
        return auxSpace[firstWord.size()][secondWord.size()];
    }
};
