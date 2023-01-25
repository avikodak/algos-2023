/****************************************************************************************************************************************************
 *  File Name                   : MergeSortedArray.cpp
 *  File Location               : /algos-2023/src/avikodak/v1/web/leetcode/level/easy/arrays/MergeSortedArray.cpp
 *  Created on                  : Jan 24, 2023 :: 6:26:12 PM
 *  Author                      : avikodak
 *  URL                         : https://leetcode.com/problems/merge-sorted-array/
 ****************************************************************************************************************************************************/

/****************************************************************************************************************************************************/
/*                                                                 INCLUDES                                                                         */
/****************************************************************************************************************************************************/

#include "v1/common/Includes.h"

using namespace std;

class Solution {
public:
    void merge(vector<int> &firstInput, int m, vector<int> &secondInput, int n) {
        int fillIndex = m + n - 1;
        m -= 1;
        n -= 1;
        while (m >= 0 || n >= 0) {
            if (n < 0) {
                break;
            } else if (m < 0) {
                firstInput[fillIndex--] = secondInput[n];
                n--;
            } else {
                if (firstInput[m] > secondInput[n]) {
                    firstInput[fillIndex--] = firstInput[m];
                    m--;
                } else {
                    firstInput[fillIndex--] = secondInput[n];
                    n--;
                }
            }
        }
    }
};
