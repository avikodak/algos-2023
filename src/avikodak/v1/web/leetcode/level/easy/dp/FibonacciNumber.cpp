/****************************************************************************************************************************************************
 *  File Name                   : FibonacciNumber.cpp
 *  File Location               : /algos-2023/src/avikodak/v1/web/leetcode/level/easy/dp/FibonacciNumber.cpp
 *  Created on                  : Feb 5, 2023 :: 9:03:52 AM
 *  Author                      : avikodak
 *  URL                         : https://leetcode.com/problems/fibonacci-number/
 ****************************************************************************************************************************************************/

/****************************************************************************************************************************************************/
/*                                                                 INCLUDES                                                                         */
/****************************************************************************************************************************************************/

#include "v1/common/Includes.h"

using namespace std;

class Solution {
public:
    int fib(int n) {
        if (n < 2) {
            return n;
        }
        int prevValue = 1;
        int currentValue = 1;
        n -= 2;
        int temp;
        while (n) {
            temp = currentValue;
            currentValue = currentValue + prevValue;
            prevValue = temp;
            n--;
        }
        return currentValue;
    }
};
