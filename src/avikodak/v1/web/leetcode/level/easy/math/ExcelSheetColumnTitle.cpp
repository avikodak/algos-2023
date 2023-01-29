/****************************************************************************************************************************************************
 *  File Name                   : ExcelSheetColumnTitle.cpp
 *  File Location               : /algos-2023/src/avikodak/v1/web/leetcode/level/easy/math/ExcelSheetColumnTitle.cpp
 *  Created on                  : Jan 28, 2023 :: 9:16:43 PM
 *  Author                      : avikodak
 *  URL                         : https://leetcode.com/problems/excel-sheet-column-title/
 ****************************************************************************************************************************************************/

/****************************************************************************************************************************************************/
/*                                                                 INCLUDES                                                                         */
/****************************************************************************************************************************************************/

#include "v1/common/Includes.h"

using namespace std;

class Solution {
public:
    string convertToTitle(int columnNumber) {
        string result;
        while (columnNumber) {
            char ch = 'A' + (columnNumber - 1) % 26;
            result += (ch);
            columnNumber = (columnNumber - 1) / 26;
        }
        reverse(result.begin(), result.end());
        return result;
    }
};

