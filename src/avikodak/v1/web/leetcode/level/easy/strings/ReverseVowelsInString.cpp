/****************************************************************************************************************************************************
 *  File Name                   : ReverseVowelsInString.cpp
 *  File Location               : /algos-2023/src/avikodak/v1/web/leetcode/level/easy/strings/ReverseVowelsInString.cpp
 *  Created on                  : Jan 27, 2023 :: 7:45:17 PM
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
    string reverseVowels(string userInput) {
        bool vowels[26] = { false };
        vowels['a' - 'a'] = true;
        vowels['e' - 'a'] = true;
        vowels['i' - 'a'] = true;
        vowels['o' - 'a'] = true;
        vowels['u' - 'a'] = true;
        int frontCrawler = 0;
        int rearCrawler = userInput.size() - 1;
        while (frontCrawler < rearCrawler) {
            while (frontCrawler < rearCrawler
                    && (!isalpha(userInput[frontCrawler]) || !vowels[tolower(userInput[frontCrawler]) - 'a'])) {
                frontCrawler++;
            }
            while (frontCrawler < rearCrawler
                    && (!isalpha(userInput[rearCrawler]) || !vowels[tolower(userInput[rearCrawler]) - 'a'])) {
                rearCrawler--;
            }
            if (frontCrawler < rearCrawler) {
                swap(userInput[frontCrawler], userInput[rearCrawler]);
                frontCrawler++;
                rearCrawler--;
            }
        }
        return userInput;
    }
};
