/****************************************************************************************************************************************************
 *  File Name                   : ValidPalindrome.cpp
 *  File Location               : /algos-2023/src/avikodak/v1/web/leetcode/level/easy/strings/ValidPalindrome.cpp
 *  Created on                  : Jan 31, 2023 :: 7:55:32 PM
 *  Author                      : avikodak
 *  URL                         : https://leetcode.com/problems/valid-palindrome/
 ****************************************************************************************************************************************************/

/****************************************************************************************************************************************************/
/*                                                                 INCLUDES                                                                         */
/****************************************************************************************************************************************************/

#include "v1/common/Includes.h"

using namespace std;

class Solution {
public:
    bool isPalindrome(string userInput) {
        int frontCrawler = 0;
        int rearCrawler = userInput.size() - 1;
        while (frontCrawler < rearCrawler) {
            while (frontCrawler < rearCrawler && !isalnum(userInput[frontCrawler])) {
                frontCrawler++;
            }
            while (frontCrawler < rearCrawler && !isalnum(userInput[rearCrawler])) {
                rearCrawler--;
            }
            if (frontCrawler < rearCrawler) {
                if (!(isalnum(userInput[frontCrawler]) && isalnum(userInput[rearCrawler]))) {
                    return false;
                }
                if (isalpha(userInput[frontCrawler])) {
                    if (tolower(userInput[frontCrawler]) != tolower(userInput[rearCrawler])) {
                        return false;
                    }
                } else {
                    if (userInput[frontCrawler] != userInput[rearCrawler]) {
                        return false;
                    }
                }
                frontCrawler++;
                rearCrawler--;
            }
        }
        return true;
    }
};
