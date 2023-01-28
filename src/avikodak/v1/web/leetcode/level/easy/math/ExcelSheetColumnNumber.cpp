/****************************************************************************************************************************************************
 *  File Name                   : ExcelSheetColumnNumber.cpp
 *  File Location               : /algos-2023/src/avikodak/v1/web/leetcode/level/easy/math/ExcelSheetColumnNumber.cpp
 *  Created on                  : Jan 27, 2023 :: 7:05:56 PM
 *  Author                      : avikodak
 *  URL                         : https://leetcode.com/problems/excel-sheet-column-number/
 ****************************************************************************************************************************************************/

/****************************************************************************************************************************************************/
/*                                                                 INCLUDES                                                                         */
/****************************************************************************************************************************************************/

#include "v1/common/Includes.h"

using namespace std;

class Solution {
public:
    int titleToNumber(string columnTitle) {
        int count = 0;
        int alphaValue;
        for (int indexCounter = 0; indexCounter < columnTitle.size(); indexCounter++) {
            alphaValue = columnTitle[indexCounter] - 'A' + 1;
            count = 26 * count + alphaValue;
        }
        return count;
    }
};

