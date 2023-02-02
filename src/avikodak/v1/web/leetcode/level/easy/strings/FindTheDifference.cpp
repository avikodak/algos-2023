/****************************************************************************************************************************************************
 *  File Name                   : FindTheDifference.cpp
 *  File Location               : /algos-2023/src/avikodak/v1/web/leetcode/level/easy/strings/FindTheDifference.cpp
 *  Created on                  : Feb 1, 2023 :: 10:03:49 PM
 *  Author                      : avikodak
 *  URL                         : https://leetcode.com/problems/find-the-difference/
 ****************************************************************************************************************************************************/

/****************************************************************************************************************************************************/
/*                                                                 INCLUDES                                                                         */
/****************************************************************************************************************************************************/

#include "v1/common/Includes.h"

using namespace std;

class Solution {
public:
    char findTheDifference(string s, string t) {
        int xorResult = 0;
        for (int counter = 0; counter < s.size(); counter++) {
            xorResult ^= s[counter];
        }
        for (int counter = 0; counter < t.size(); counter++) {
            xorResult ^= t[counter];
        }
        return (char)xorResult;
    }
};
