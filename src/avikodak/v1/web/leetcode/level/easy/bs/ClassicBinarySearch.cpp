/****************************************************************************************************************************************************
 *  File Name                   : ClassicBinarySearch.cpp
 *  File Location               : /algos-2023/src/avikodak/v1/web/leetcode/level/easy/bs/ClassicBinarySearch.cpp
 *  Created on                  : Feb 8, 2023 :: 10:53:08 PM
 *  Author                      : avikodak
 *  URL                         : https://leetcode.com/problems/binary-search/
 ****************************************************************************************************************************************************/

/****************************************************************************************************************************************************/
/*                                                                 INCLUDES                                                                         */
/****************************************************************************************************************************************************/

#include "v1/common/Includes.h"

using namespace std;

class Solution {
public:
    int search(vector<int> &userInput, int target) {
        int start = 0;
        int end = userInput.size() - 1;
        while (start <= end) {
            int mid = start + (end - start) / 2;
            if (userInput[mid] == target) {
                return mid;
            } else if (userInput[mid] > target) {
                end = mid - 1;
            } else {
                start = mid + 1;
            }
        }
        return -1;
    }
};
