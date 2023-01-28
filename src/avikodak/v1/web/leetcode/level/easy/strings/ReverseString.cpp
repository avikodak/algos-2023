/****************************************************************************************************************************************************
 *  File Name                   : ReverseString.cpp
 *  File Location               : /algos-2023/src/avikodak/v1/web/leetcode/level/easy/strings/ReverseString.cpp
 *  Created on                  : Jan 27, 2023 :: 7:31:58 PM
 *  Author                      : avikodak
 *  URL                         : https://leetcode.com/problems/reverse-string/
 ****************************************************************************************************************************************************/

/****************************************************************************************************************************************************/
/*                                                                 INCLUDES                                                                         */
/****************************************************************************************************************************************************/

#include "v1/common/Includes.h"

using namespace std;

class Solution {
public:
    void reverseString(vector<char> &s) {
        int frontCrawler = 0;
        int rearCrawler = s.size() - 1;
        while (frontCrawler < rearCrawler) {
            swap(s[frontCrawler], s[rearCrawler]);
            frontCrawler++;
            rearCrawler--;
        }
    }
};

