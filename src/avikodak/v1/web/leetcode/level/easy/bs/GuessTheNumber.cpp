/****************************************************************************************************************************************************
 *  File Name                   : GuessTheNumber.cpp
 *  File Location               : /algos-2023/src/avikodak/v1/web/leetcode/level/easy/bs/GuessTheNumber.cpp
 *  Created on                  : Feb 1, 2023 :: 10:44:42 PM
 *  Author                      : avikodak
 *  URL                         : https://leetcode.com/problems/guess-number-higher-or-lower
 ****************************************************************************************************************************************************/

/****************************************************************************************************************************************************/
/*                                                                 INCLUDES                                                                         */
/****************************************************************************************************************************************************/

#include "v1/common/Includes.h"

using namespace std;

int guess(int num);

class Solution {
public:
    int guessNumber(int n) {
        int start = 1;
        int end = n;
        int mid;
        int guessedValue;
        while (start <= end) {
            mid = start + (end - start) / 2;
            guessedValue = guess(mid);
            if (guessedValue == 0) {
                return mid;
            } else if (guessedValue == -1) {
                end = mid - 1;
            } else {
                start = mid + 1;
            }
        }
        return -1;
    }
};
