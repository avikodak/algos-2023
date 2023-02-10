/****************************************************************************************************************************************************
 *  File Name                   : PerfectNumber.cpp
 *  File Location               : /algos-2023/src/avikodak/v1/web/leetcode/level/easy/math/PerfectNumber.cpp
 *  Created on                  : Feb 9, 2023 :: 8:03:27 PM
 *  Author                      : avikodak
 *  URL                         : TODO
 ****************************************************************************************************************************************************/

/****************************************************************************************************************************************************/
/*                                                                 INCLUDES                                                                         */
/****************************************************************************************************************************************************/

#include "v1/common/Includes.h"

using namespace std;

class Solution {
public:
    bool checkPerfectNumber(int num) {
        int sum = 0;
        for (int counter = 1; counter * counter <= num; counter++) {
            if (num % counter == 0) {
                sum += counter;
                if (counter * counter != num) {
                    sum += num / counter;
                }
            }
        }
        return sum - num == num;
    }
};
