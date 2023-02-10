/****************************************************************************************************************************************************
 *  File Name                   : LongestUncommonSubsequence.cpp
 *  File Location               : /algos-2023/src/avikodak/v1/web/leetcode/level/easy/strings/LongestUncommonSubsequence.cpp
 *  Created on                  : Feb 9, 2023 :: 8:09:59 PM
 *  Author                      : avikodak
 *  URL                         : https://leetcode.com/problems/longest-uncommon-subsequence-i/
 ****************************************************************************************************************************************************/

/****************************************************************************************************************************************************/
/*                                                                 INCLUDES                                                                         */
/****************************************************************************************************************************************************/

#include "v1/common/Includes.h"

using namespace std;

class Solution {
public:
    int findLUSlength(string a, string b) {
        if (a == b) {
            return -1;
        } else {
            return max(a.length(), b.length());
        }
    }
};
