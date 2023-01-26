/****************************************************************************************************************************************************
 *  File Name                   : RemoveElement.cpp
 *  File Location               : /algos-2023/src/avikodak/v1/web/leetcode/level/easy/arrays/RemoveElement.cpp
 *  Created on                  : Jan 24, 2023 :: 10:01:19 PM
 *  Author                      : avikodak
 *  URL                         : https://leetcode.com/problems/remove-element/
 ****************************************************************************************************************************************************/

/****************************************************************************************************************************************************/
/*                                                                 INCLUDES                                                                         */
/****************************************************************************************************************************************************/

#include "v1/common/Includes.h"

using namespace std;

class Solution {
public:
    int removeElement(vector<int> &userInput, int val) {
        int frontCrawler = 0;
        int rearCrawler = userInput.size();
        while (frontCrawler < rearCrawler) {
            if (userInput[frontCrawler] == val) {
                swap(userInput[frontCrawler], userInput[--rearCrawler]);
            } else {
                frontCrawler++;
            }
        }
        return rearCrawler;
    }
};
