/****************************************************************************************************************************************************
 *  File Name                   : HappyNumber.cpp
 *  File Location               : /algos-2023/src/avikodak/v1/web/leetcode/level/easy/math/HappyNumber.cpp
 *  Created on                  : Jan 31, 2023 :: 8:15:43 PM
 *  Author                      : avikodak
 *  URL                         : https://leetcode.com/problems/happy-number/
 ****************************************************************************************************************************************************/

/****************************************************************************************************************************************************/
/*                                                                 INCLUDES                                                                         */
/****************************************************************************************************************************************************/

#include "v1/common/Includes.h"

using namespace std;

class Solution {
public:
    bool isHappy(int n) {
        set<int> seenValues;
        int sum;
        while (n != 1 && seenValues.find(n) == seenValues.end()) {
            seenValues.insert(n);
            sum = 0;
            while (n) {
                sum += ((n % 10) * (n % 10));
                n /= 10;
            }
            n = sum;
        }
        return n == 1;
    }
};
