/****************************************************************************************************************************************************
 *  File Name                   : FirstBadVersion.cpp
 *  File Location               : /algos-2023/src/avikodak/v1/web/leetcode/level/easy/bs/FirstBadVersion.cpp
 *  Created on                  : Feb 4, 2023 :: 3:18:56 PM
 *  Author                      : avikodak
 *  URL                         : https://leetcode.com/problems/first-bad-version/
 ****************************************************************************************************************************************************/

/****************************************************************************************************************************************************/
/*                                                                 INCLUDES                                                                         */
/****************************************************************************************************************************************************/

#include "v1/common/Includes.h"

using namespace std;

bool isBadVersion(int version);

class Solution {
private:
    int firstBadVersion(int start, int end) {
        int result = -1;
        while (start <= end) {
            int mid = start + (end - start) / 2;
            bool isBad = isBadVersion(mid);
            if (!isBad) {
                start = mid + 1;
            } else {
                end = mid - 1;
                result = mid;
            }
        }
        return result;
    }
public:
    int firstBadVersion(int n) {
        return firstBadVersion(1, n);
    }
};
