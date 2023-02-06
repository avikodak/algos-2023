/****************************************************************************************************************************************************
 *  File Name                   : NthTribonacciNumber.cpp
 *  File Location               : /algos-2023/src/avikodak/v1/web/leetcode/level/easy/dp/NthTribonacciNumber.cpp
 *  Created on                  : Feb 5, 2023 :: 6:28:53 PM
 *  Author                      : avikodak
 *  URL                         : https://leetcode.com/problems/n-th-tribonacci-number/
 ****************************************************************************************************************************************************/

/****************************************************************************************************************************************************/
/*                                                                 INCLUDES                                                                         */
/****************************************************************************************************************************************************/

#include "v1/common/Includes.h"

using namespace std;

class Solution {
public:
    int tribonacci(int n) {
        if (n <= 1) {
            return n;
        }
        if (n == 2) {
            return 1;
        }
        int prevPrevValue = 0;
        int prevValue = 1;
        int nextValue = 1;
        n -= 2;
        int sum;
        while (n) {
            sum = nextValue + prevValue + prevPrevValue;
            prevPrevValue = prevValue;
            prevValue = nextValue;
            nextValue = sum;
            n--;
        }
        return nextValue;
    }
};
