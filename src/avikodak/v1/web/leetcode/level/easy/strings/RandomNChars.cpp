/****************************************************************************************************************************************************
 *  File Name                   : RandomNChars.cpp
 *  File Location               : /algos-2023/src/avikodak/v1/web/leetcode/level/easy/strings/RandomNChars.cpp
 *  Created on                  : Jan 25, 2023 :: 10:18:05 PM
 *  Author                      : avikodak
 *  URL                         : TODO
 ****************************************************************************************************************************************************/

/****************************************************************************************************************************************************/
/*                                                                 INCLUDES                                                                         */
/****************************************************************************************************************************************************/

#include "v1/common/Includes.h"

using namespace std;

/**
 * The read4 API is defined in the parent class Reader4.
 *
 */

int read4(char *buf4);

class Solution {
public:
    int read(char *buf, int n) {
        int totalCount = 0;
        int counter = 0;
        for (counter = 0; counter < n;) {
            totalCount += read4(buf + counter);
            counter += 4;
        }
        while (counter >= n) {
            buf[counter] = '\0';
            counter--;
        }
        return totalCount;
    }
};
