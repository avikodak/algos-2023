/****************************************************************************************************************************************************
 *  File Name                   : RansomNote.cpp
 *  File Location               : /algos-2023/src/avikodak/v1/web/leetcode/level/easy/arrays/RansomNote.cpp
 *  Created on                  : Feb 4, 2023 :: 3:51:43 PM
 *  Author                      : avikodak
 *  URL                         : https://leetcode.com/problems/ransom-note/
 ****************************************************************************************************************************************************/

/****************************************************************************************************************************************************/
/*                                                                 INCLUDES                                                                         */
/****************************************************************************************************************************************************/

#include "v1/common/Includes.h"

using namespace std;

class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        map<char, int> frequency;
        for (int counter = 0; counter < magazine.size(); counter++) {
            auto itToFrequency = frequency.find(magazine[counter]);
            if (itToFrequency == frequency.end()) {
                frequency[magazine[counter]] = 1;
            } else {
                frequency[magazine[counter]]++;
            }
        }
        for (int counter = 0; counter < ransomNote.size(); counter++) {
            auto itToFrequency = frequency.find(ransomNote[counter]);
            if (itToFrequency == frequency.end()) {
                return false;
            } else if (itToFrequency->second == 1) {
                frequency.erase(ransomNote[counter]);
            } else {
                frequency[ransomNote[counter]]--;
            }
        }
        return true;
    }
};

