/****************************************************************************************************************************************************
 *  File Name                   : ConvertToHexadecimal.cpp
 *  File Location               : /algos-2023/src/avikodak/v1/web/leetcode/level/easy/math/ConvertToHexadecimal.cpp
 *  Created on                  : Feb 4, 2023 :: 6:02:55 PM
 *  Author                      : avikodak
 *  URL                         : https://leetcode.com/problems/convert-a-number-to-hexadecimal/
 ****************************************************************************************************************************************************/

/****************************************************************************************************************************************************/
/*                                                                 INCLUDES                                                                         */
/****************************************************************************************************************************************************/

#include "v1/common/Includes.h"

using namespace std;

class Solution {
public:
    string toHex(int num) {
        if (num == 0) {
            return "0";
        }
        string result;
        int remainder;
        unsigned int value = num;
        while (value) {
            remainder = value % 16;
            if (remainder > 9) {
                result.push_back('a' + remainder - 10);
            } else {
                result.push_back(remainder + '0');
            }
            value /= 16;
        }
        reverse(result.begin(), result.end());
        return result;
    }
};
