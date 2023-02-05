/****************************************************************************************************************************************************
 *  File Name                   : IsSubsequence.cpp
 *  File Location               : /algos-2023/src/avikodak/v1/web/leetcode/level/easy/strings/IsSubsequence.cpp
 *  Created on                  : Feb 4, 2023 :: 11:10:32 PM
 *  Author                      : avikodak
 *  URL                         : https://leetcode.com/problems/is-subsequence/
 ****************************************************************************************************************************************************/

/****************************************************************************************************************************************************/
/*                                                                 INCLUDES                                                                         */
/****************************************************************************************************************************************************/

#include "v1/common/Includes.h"

using namespace std;

class Solution {
public:
    bool isSubsequence(string target, string source) {
        int targetCounter = 0;
        int sourceCounter = 0;
        while (targetCounter < target.size() && sourceCounter < source.size()) {
            if (target[targetCounter] == source[sourceCounter]) {
                targetCounter++;
                sourceCounter++;
            } else {
                sourceCounter++;
            }
        }
        return targetCounter == target.size();
    }
};
