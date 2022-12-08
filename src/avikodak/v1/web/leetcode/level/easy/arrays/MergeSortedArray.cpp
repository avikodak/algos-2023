/****************************************************************************************************************************************************
 *  File Name                   : MergeSortedArray.cpp
 *  File Location               : /algos-2023/src/avikodak/v1/web/leetcode/level/easy/arrays/MergeSortedArray.cpp
 *  Created on                  : Dec 6, 2022 :: 11:19:54 PM
 *  Author                      : avikodak
 *  URL                         : https://leetcode.com/problems/merge-sorted-array/
 ****************************************************************************************************************************************************/

/****************************************************************************************************************************************************/
/*                                                                 INCLUDES                                                                         */
/****************************************************************************************************************************************************/

#include "v1/common/Includes.h"

class Solution {
public:
    void merge(std::vector<int> &firstInput, int m, std::vector<int> &secondInput, int n) {
        int fillCounter = m + n;
        m = m - 1;
        n = n - 1;
        while (m >= 0 || n >= 0) {
            if (n < 0) {
                firstInput[--fillCounter] = firstInput[m--];
            } else if (m < 0) {
                firstInput[--fillCounter] = secondInput[n--];
            } else if (firstInput[m] > secondInput[n]) {
                firstInput[--fillCounter] = firstInput[m--];
            } else {
                firstInput[--fillCounter] = secondInput[n--];
            }
        }

    }
};
