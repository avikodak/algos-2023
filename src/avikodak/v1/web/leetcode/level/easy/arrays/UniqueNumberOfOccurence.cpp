/****************************************************************************************************************************************************
 *  File Name                   : UniqueNumberOfOccurence.cpp
 *  File Location               : /algos-2023/src/avikodak/v1/web/leetcode/level/easy/arrays/UniqueNumberOfOccurence.cpp
 *  Created on                  : Feb 8, 2023 :: 10:29:20 PM
 *  Author                      : avikodak
 *  URL                         : https://leetcode.com/problems/unique-number-of-occurrences
 ****************************************************************************************************************************************************/

/****************************************************************************************************************************************************/
/*                                                                 INCLUDES                                                                         */
/****************************************************************************************************************************************************/

#include "v1/common/Includes.h"

using namespace std;

class Solution {
public:
    bool uniqueOccurrences(vector<int> &userInput) {
        vector<int> frequency(2001, 0);
        for (unsigned int counter = 0; counter < userInput.size(); counter++) {
            frequency[userInput[counter] + 1000]++;
        }
        set<int> seenFrequency;
        for (int counter = 0; counter < 2001; counter++) {
            if (frequency[counter] != 0) {
                if (seenFrequency.find(frequency[counter]) != seenFrequency.end()) {
                    return false;
                }
                seenFrequency.insert(frequency[counter]);
            }
        }
        return true;
    }
};
