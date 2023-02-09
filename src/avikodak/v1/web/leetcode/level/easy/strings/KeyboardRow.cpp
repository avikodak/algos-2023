/****************************************************************************************************************************************************
 *  File Name                   : KeyboardRow.cpp
 *  File Location               : /algos-2023/src/avikodak/v1/web/leetcode/level/easy/strings/KeyboardRow.cpp
 *  Created on                  : Feb 8, 2023 :: 7:14:21 PM
 *  Author                      : avikodak
 *  URL                         : https://leetcode.com/problems/keyboard-row/
 ****************************************************************************************************************************************************/

/****************************************************************************************************************************************************/
/*                                                                 INCLUDES                                                                         */
/****************************************************************************************************************************************************/

#include "v1/common/Includes.h"

using namespace std;

class Solution {
public:
    vector<string> findWords(vector<string> &words) {
        vector<string> rows { "qwertyuiop", "asdfghjkl", "zxcvbnm" };
        map<char, int> charToRowMapping;
        for (int counter = 0; counter < rows.size(); counter++) {
            for (int letterCounter = 0; letterCounter < rows[counter].size(); letterCounter++) {
                charToRowMapping[rows[counter][letterCounter]] = counter;
            }
        }
        int prevRow;
        vector<string> result;
        for (unsigned int counter = 0; counter < words.size(); counter++) {
            prevRow = charToRowMapping[tolower(words[counter][0])];
            bool isSameRow = true;
            for (unsigned int letterCounter = 1; letterCounter < words[counter].size(); letterCounter++) {
                if(charToRowMapping[tolower(words[counter][letterCounter])] != prevRow) {
                    isSameRow = false;
                    break;
                }
            }
            if(isSameRow) {
                result.push_back(words[counter]);
            }
        }
        return result;
    }
};
