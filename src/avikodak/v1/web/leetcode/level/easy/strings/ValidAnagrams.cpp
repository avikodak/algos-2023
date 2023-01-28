/****************************************************************************************************************************************************
 *  File Name                   : ValidAnagrams.cpp
 *  File Location               : /algos-2023/src/avikodak/v1/web/leetcode/level/easy/strings/ValidAnagrams.cpp
 *  Created on                  : Jan 27, 2023 :: 7:12:12 PM
 *  Author                      : avikodak
 *  URL                         : https://leetcode.com/problems/valid-anagram/
 ****************************************************************************************************************************************************/

/****************************************************************************************************************************************************/
/*                                                                 INCLUDES                                                                         */
/****************************************************************************************************************************************************/

#include "v1/common/Includes.h"

using namespace std;

class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.length() != t.length()) {
            return false;
        }
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());
        return s == t;
    }
};
