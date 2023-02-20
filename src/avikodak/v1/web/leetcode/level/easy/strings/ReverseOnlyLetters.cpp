/****************************************************************************************************************************************************
 *  File Name                   : ReverseOnlyLetters.cpp
 *  File Location               : /algos-2023/src/avikodak/v1/web/leetcode/level/easy/strings/ReverseOnlyLetters.cpp
 *  Created on                  : Feb 17, 2023 :: 7:20:52 PM
 *  Author                      : avikodak
 *  URL                         : https://leetcode.com/problems/reverse-only-letters/
 ****************************************************************************************************************************************************/

/****************************************************************************************************************************************************/
/*                                                                 INCLUDES                                                                         */
/****************************************************************************************************************************************************/

#include "v1/common/Includes.h"

using namespace std;

class Solution {
public:
    string reverseOnlyLetters(string userInput) {
        int frontCrawler = 0;
        int rearCrawler = userInput.size() - 1;
        while (frontCrawler < rearCrawler) {
            while (frontCrawler < rearCrawler && !isalpha(userInput[frontCrawler])) {
                frontCrawler++;
            }
            while (frontCrawler < rearCrawler && !isalpha(userInput[rearCrawler])) {
                rearCrawler--;
            }
            if (frontCrawler < rearCrawler) {
                swap(userInput[frontCrawler], userInput[rearCrawler]);
            }
            frontCrawler++;
            rearCrawler--;
        }
        return userInput;
    }
};
